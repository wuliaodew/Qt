#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "win_qextserialport.h"
#include <QMessageBox>
#include <qt_windows.h>
#include <QSettings>
#include <qtimer.h>
#include <qdatetime.h>
#include <qfile.h>
#include <qfiledialog.h>
#include <qtextstream.h>
#include <QPlainTextEdit>
#include <QObject>

namespace Ui {
    class MainWindow;
}

typedef enum{
    NON_FORMAT,
    UPDATA_FORMAT
}FILE_SEND_FORMAT;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_seachcom_clicked();

    void on_opencom_clicked();

    void send_data_dis();

    void rev_data_dis();

    void readserialdata();

    void on_pushButton_clicked();

//    void on_rec_textedit_copyAvailable(bool b);

    void on_clrsendbutton_clicked();

    void on_SendButton_clicked();

    void on_autosendcheckBox_clicked();

    void on_msBox_valueChanged(int arg1);

    void on_FileOpenButton_clicked();

    void on_fileHexEdit_cursorPositionChanged();

//    void on_SendFileButton_clicked();

private:
    Ui::MainWindow *ui;
    Win_QextSerialPort *myCom;
    wchar_t subkey[80];
    wchar_t keyname[256]; //键名数组
    char keyvalue[256];  //键值数组
    int indexnum;
    DWORD keysize,type,valuesize;
    HKEY hKey;
    bool comstate;
    bool rec_hexflag;
    bool send_hexflag;
    bool send_fileflag;

    int line_number;
    QFile *opfile;

    QTimer *qtimer;
    QTimer *autosendtimer;
    QTime *nowtime;

    QString getcomm(int index,QString keyorvalue); //读取键名
//    QByteArray updata_format_deal();//格式处理

};

#endif // MAINWINDOW_H
