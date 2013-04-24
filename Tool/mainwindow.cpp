#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    comstate=false;
    myCom=NULL;
    opfile=NULL;
    ui->hex1button->click();
    ui->hex2button->click();
    rec_hexflag=true;
    send_hexflag=true;

    connect(ui->hex1button,SIGNAL(clicked()),this,SLOT(send_data_dis()));
    connect(ui->str1button,SIGNAL(clicked()),this,SLOT(send_data_dis()));

    connect(ui->hex2button,SIGNAL(clicked()),this,SLOT(rev_data_dis()));
    connect(ui->str2button,SIGNAL(clicked()),this,SLOT(rev_data_dis()));

    qtimer = new QTimer(this);
    connect(qtimer,SIGNAL(timeout()),this,SLOT(readserialdata()));

    autosendtimer = new QTimer(this);
    connect(autosendtimer,SIGNAL(timeout()),this,SLOT(on_SendButton_clicked()));

    nowtime=new QTime();
    line_number=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::send_data_dis()
{
    if(ui->hex1button->isChecked()==true)
    {
        ui->errorlabel->setText(tr("send hex select"));
        send_hexflag=true;
    }
    else
    {
        ui->errorlabel->setText(tr("send string select"));
        send_hexflag=false;
    }
}

void MainWindow::rev_data_dis()
{
    if(ui->hex2button->isChecked()==true)
    {
        ui->errorlabel->setText(tr("receivce hex select"));
        rec_hexflag=true;
    }
    else
    {
        ui->errorlabel->setText(tr("receive string select"));
        rec_hexflag=false;
    }

}

void MainWindow::readserialdata()
{
    QByteArray temp=myCom->readAll();
    QString str ;
    QString stt;

    if(rec_hexflag==true)//16进制
    {
        str = temp.toHex ();
        str = str.toUpper ();

        for(int i = 0;i<str.length ();i+=2)
        {
           stt += str.mid (i,2);
           stt += " ";
        }

    }
    else
    {
        stt=temp;
    }

    if(stt.length()!=0)
    {
        ui->rec_textedit->insertPlainText(stt);
        ui->rec_textedit->moveCursor(QTextCursor::End);
    }

}

QString MainWindow::getcomm(int index, QString keyorvalue)
{

    QString commresult="";
        QString strkey="HARDWARE\\DEVICEMAP\\SERIALCOMM";//子键路径
        int a=strkey.toWCharArray(subkey);
        subkey[a]=L'\0';
        if(RegOpenKeyEx(HKEY_LOCAL_MACHINE,subkey,0,KEY_READ|KEY_QUERY_VALUE,&hKey)!=0)
        {
            QString error="Cannot open regedit!";
        }

        QString keymessage="";//键名
        QString message="";
        QString valuemessage="";//键值
        indexnum=index;//要读取键值的索引号

        keysize=sizeof(keyname);
        valuesize=sizeof(keyvalue);

        if(::RegEnumValue(hKey,indexnum,keyname,&keysize,0,&type,(BYTE*)keyvalue,&valuesize)==0)
        {
            //读取键名
            for(uint i=0;i<keysize;i++)
            {
                message=QString::fromStdWString(keyname);
                keymessage.append(message);
            }
            //读取键值
            for(uint j=0;j<valuesize;j++)
            {
                if(keyvalue[j]!=0x00)
                {
                    valuemessage.append(keyvalue[j]);
                }
            }

            if(keyorvalue=="key")
            {
                commresult=keymessage;
            }
            if(keyorvalue=="value")
            {
                commresult=valuemessage;
            }
        }
        else
        {
            commresult="nokey";
        }
        ::RegCloseKey(hKey);//关闭注册表
        return commresult;
}

void MainWindow::on_seachcom_clicked()
{
    if(comstate==false)
    {
        QString path="HKEY_LOCAL_MACHINE\\HARDWARE\\DEVICEMAP\\SERIALCOMM";
        QSettings *settings=new QSettings(path,QSettings::NativeFormat);
        QStringList key=settings->allKeys();
        QStringList comlist ;


        int kk = key.size();
        int i;
        comlist.clear();
        for(i=0;i<kk;i++)
        {
             comlist << getcomm(i,"value");
        }
        ui->serialcom->clear();
        ui->serialcom->addItems(comlist);
    }
}

void MainWindow::on_opencom_clicked()
{
    BaudRateType combandrate;

    if(comstate==false)
    {
        QString portName = ui->serialcom->currentText();
        myCom = new Win_QextSerialPort(portName,QextSerialBase::EventDriven);
        bool flag = myCom  ->open(QIODevice::ReadWrite);
        if(false==flag)
        {
            QMessageBox::warning(this,tr("Warning"),tr("串口不存在或已被占用!"),QMessageBox::Yes);
            return ;//false;
        }

        if(ui->bandratebox->currentText()==tr("600"))
            combandrate=BAUD600;
        else if(ui->bandratebox->currentText()==tr("1200"))
            combandrate=BAUD1200;
        else if(ui->bandratebox->currentText()==tr("2400"))
            combandrate=BAUD2400;
        else if(ui->bandratebox->currentText()==tr("4800"))
            combandrate=BAUD4800;
        else if(ui->bandratebox->currentText()==tr("9600"))
            combandrate=BAUD9600;
       // else if(ui->bandratebox->currentText()==tr("14400"))
       //     combandrate=BAUD14400;
        else if(ui->bandratebox->currentText()==tr("19200"))
            combandrate=BAUD19200;
        else if(ui->bandratebox->currentText()==tr("115200"))
            combandrate=BAUD115200;
        else
            ui->errorlabel->setText("Bandrate error");
        myCom->setBaudRate(combandrate);

        if(ui->checkbox->currentText()==tr("None 无"))
            myCom->setParity(PAR_NONE);
        else if(ui->checkbox->currentText()==tr("Odd 奇"))
            myCom->setParity(PAR_ODD);
        else if(ui->checkbox->currentText()==tr("Even 偶"))
            myCom->setParity(PAR_EVEN);
        else
            ui->errorlabel->setText("Parity error");

        if(ui->databox->currentText()==tr("8bit"))
            myCom->setDataBits(DATA_8);
        else if(ui->databox->currentText()==tr("7bit"))
            myCom->setDataBits(DATA_7);
        else
            ui->errorlabel->setText("DataBit error");

        if(ui->stopbitbox->currentText()==tr("1bit"))
            myCom->setStopBits(STOP_1);
        else if(ui->stopbitbox->currentText()==tr("2bit"))
            myCom->setStopBits(STOP_2);
        else
            ui->errorlabel->setText("StopBit error");

        myCom->setFlowControl(FLOW_OFF);
        myCom->setTimeout(100);

        qtimer->start(5);

        ui->serialcom->setEnabled(false);
        ui->bandratebox->setEnabled(false);
        ui->checkbox->setEnabled(false);
        ui->databox->setEnabled(false);
        ui->stopbitbox->setEnabled(false);
        ui->opencom->setText(tr("关闭"));
        comstate=true;
    }
    else
    {
        myCom->close();
        qtimer->stop();
        comstate=false;
        ui->serialcom->setEnabled(true);
        ui->bandratebox->setEnabled(true);
        ui->checkbox->setEnabled(true);
        ui->databox->setEnabled(true);
        ui->stopbitbox->setEnabled(true);
        ui->opencom->setText(tr("打开"));
    }
}


void MainWindow::on_pushButton_clicked()
{
    ui->rec_textedit->clear();
}

//void MainWindow::on_rec_textedit_copyAvailable(bool b)
//{
//    ui->rec_textedit->copy();
//}

void MainWindow::on_clrsendbutton_clicked()
{
    ui->send_textedit->clear();
}

////QByteArray MainWindow::updata_format_deal()
//{
//    static bool accessflag=false;
//    QByteArray updata;

//    if(accessflag==true)
//    {
//        if(opfile->atEnd()==true)
//        {
//            accessflag=false;
//            sendfile=NON_FORMAT;
//            send_fileflag=false;
//            ui->SendFileButton->setStyleSheet("background:white");
//            opfile->close();
//            autosendtimer->stop();
//        }

//        updata=opfile->read(16);
//        sendaddr+=16;

//    }
//    else if(accessflag == false)
//    {
//        accessflag=true;

//        if(opfile->open(QIODevice::ReadOnly))
//        {
//            opfile->seek(0);
//            updata=opfile->read(16);
//            sendaddr=0;
//        }
//        else
//        {
//            QMessageBox::information(this,tr("提示"),tr("文件未打开"));
//        }

//    }
//    return updata;
//}

void MainWindow::on_SendButton_clicked()
{
    QByteArray aa;
    QString sdata;


    if(comstate == false)
    {
        ui->errorlabel->setText("串口未打开");
        return;
    }
    sdata= ui->send_textedit->toPlainText();

    if(sdata.isEmpty())
    {
        ui->errorlabel->setText("未输入数据");
        return;
    }

    if(send_hexflag==true)
    {
        aa = QByteArray::fromHex(sdata.toLatin1());
    }
    else
    {
        aa=sdata.toLatin1();
    }


    myCom->write(aa);

    QString time=nowtime->currentTime().toString("hh:mm:ss:zzz");
    sdata.insert(0,"发送：");
    sdata.insert(sdata.size()," ("+time+")");

    ui->errorlabel->setText(sdata);

}

void MainWindow::on_autosendcheckBox_clicked()
{
    if(ui->autosendcheckBox->isChecked()==true)
    {
        if(ui->msBox->value()!=0)
        {
            int value=ui->msBox->value();
            autosendtimer->start(value);
        }
        else
        {
            ui->errorlabel->setText("时间未设置");
        }
    }
    else
    {
        autosendtimer->stop();
        ui->errorlabel->setText("自动发送停止");
    }
}

void MainWindow::on_msBox_valueChanged(int arg1)
{
    if(ui->autosendcheckBox->isChecked()==true)
    {
        int value=ui->msBox->value();
        autosendtimer->setInterval(value);
    }
}

void MainWindow::on_FileOpenButton_clicked()
{
    QString path=QFileDialog::getOpenFileName(this, tr("Open file"),".", tr("Files(*.bin);;File(*.txt *.hex);;Other(*.*)"));
    if(path.length()==0)
    {
        ui->tab2warn_dis->setText("没选择文件！！");
    }
    else
    {
        ui->tab2warn_dis->setText(path);
        opfile=new QFile(path);
        ui->filenameedit->setText(path);
        if(opfile->open(QIODevice::ReadOnly))
        {
            QTextStream stream(opfile);
            QByteArray qb=opfile->readAll();
            stream.seek(0);
            QString textstr=stream.readAll();
            QString str=qb.toHex();
            int size=str.length();
            QString disstr="0x"+QString::number(0,16)+": ";
            for(int i=0;i<size;i++)
            {
                if(i%2==0 && i!=0 && (i%32)!=0)
                {
                    disstr+=" ";
                }

                if((i%32)==0 && i!=0)
                {
                    disstr+="\r0x"+QString::number(i/2,16)+": ";

                }

                disstr+=str[i];

            }

            ui->fileHexEdit->setPlainText(disstr);
            ui->fileTextEdit->setPlainText(textstr);
        }
        opfile->close();
    }
}

void MainWindow::on_fileHexEdit_cursorPositionChanged()
{
    QList<QTextEdit::ExtraSelection> extraSelections;

    QTextEdit::ExtraSelection selection;
    QColor lineColor = QColor(Qt::blue).lighter(160);

    selection.format.setBackground(lineColor);
    selection.format.setProperty(QTextFormat::FullWidthSelection, true);
    selection.cursor = ui->fileHexEdit->textCursor();
    selection.cursor.clearSelection();
    extraSelections.append(selection);

    ui->fileHexEdit->setExtraSelections(extraSelections);
}

