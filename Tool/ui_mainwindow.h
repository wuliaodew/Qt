/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 22 17:24:57 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include <qmaintextedit.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QMainTextedit *send_textedit;
    QPushButton *seachcom;
    QComboBox *bandratebox;
    QPlainTextEdit *rec_textedit;
    QComboBox *serialcom;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *checkbox;
    QComboBox *databox;
    QComboBox *stopbitbox;
    QPushButton *opencom;
    QLabel *label_6;
    QLabel *errorlabel;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *hex1button;
    QRadioButton *str1button;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *hex2button;
    QRadioButton *str2button;
    QPushButton *pushButton;
    QPushButton *SendButton;
    QPushButton *clrsendbutton;
    QCheckBox *autosendcheckBox;
    QSpinBox *msBox;
    QLabel *label_9;
    QWidget *tab_2;
    QLabel *tab2warnlab;
    QLabel *tab2warn_dis;
    QPlainTextEdit *fileHexEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLineEdit *filenameedit;
    QPushButton *FileOpenButton;
    QPlainTextEdit *fileTextEdit;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *tab_3;
    QTextEdit *FileSendEdit;
    QLabel *label_13;
    QRadioButton *updataradioButton;
    QPushButton *SendFileButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(800, 600));
        centralWidget->setMaximumSize(QSize(800, 600));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 600));
        tabWidget->setMaximumSize(QSize(800, 600));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        send_textedit = new QMainTextedit(tab);
        send_textedit->setObjectName(QString::fromUtf8("send_textedit"));
        send_textedit->setGeometry(QRect(50, 30, 341, 451));
        send_textedit->setFocusPolicy(Qt::WheelFocus);
        send_textedit->setOverwriteMode(false);
        send_textedit->setTextInteractionFlags(Qt::TextEditorInteraction);
        seachcom = new QPushButton(tab);
        seachcom->setObjectName(QString::fromUtf8("seachcom"));
        seachcom->setGeometry(QRect(430, 430, 121, 23));
        bandratebox = new QComboBox(tab);
        bandratebox->setObjectName(QString::fromUtf8("bandratebox"));
        bandratebox->setGeometry(QRect(480, 490, 71, 22));
        bandratebox->setFocusPolicy(Qt::WheelFocus);
        bandratebox->setDuplicatesEnabled(false);
        bandratebox->setFrame(true);
        rec_textedit = new QPlainTextEdit(tab);
        rec_textedit->setObjectName(QString::fromUtf8("rec_textedit"));
        rec_textedit->setEnabled(true);
        rec_textedit->setGeometry(QRect(420, 30, 361, 381));
        rec_textedit->setMinimumSize(QSize(0, 381));
        rec_textedit->setMaximumSize(QSize(361, 381));
        rec_textedit->setSizeIncrement(QSize(0, 0));
        rec_textedit->setMouseTracking(false);
        rec_textedit->setFocusPolicy(Qt::WheelFocus);
        rec_textedit->setContextMenuPolicy(Qt::DefaultContextMenu);
        rec_textedit->setFrameShape(QFrame::StyledPanel);
        rec_textedit->setReadOnly(true);
        rec_textedit->setTextInteractionFlags(Qt::TextSelectableByMouse);
        serialcom = new QComboBox(tab);
        serialcom->setObjectName(QString::fromUtf8("serialcom"));
        serialcom->setGeometry(QRect(480, 460, 71, 20));
        serialcom->setEditable(false);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 460, 41, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 492, 54, 20));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 430, 61, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(570, 460, 54, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(570, 490, 54, 16));
        label_5->setFont(font1);
        checkbox = new QComboBox(tab);
        checkbox->setObjectName(QString::fromUtf8("checkbox"));
        checkbox->setGeometry(QRect(630, 430, 69, 22));
        databox = new QComboBox(tab);
        databox->setObjectName(QString::fromUtf8("databox"));
        databox->setGeometry(QRect(630, 460, 69, 22));
        stopbitbox = new QComboBox(tab);
        stopbitbox->setObjectName(QString::fromUtf8("stopbitbox"));
        stopbitbox->setGeometry(QRect(630, 490, 69, 22));
        opencom = new QPushButton(tab);
        opencom->setObjectName(QString::fromUtf8("opencom"));
        opencom->setGeometry(QRect(710, 440, 71, 71));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 531, 51, 21));
        label_6->setFont(font1);
        errorlabel = new QLabel(tab);
        errorlabel->setObjectName(QString::fromUtf8("errorlabel"));
        errorlabel->setGeometry(QRect(40, 530, 731, 21));
        errorlabel->setFont(font);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(420, 10, 54, 21));
        label_7->setFont(font);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 54, 20));
        label_8->setFont(font);
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 0, 121, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        hex1button = new QRadioButton(horizontalLayoutWidget);
        hex1button->setObjectName(QString::fromUtf8("hex1button"));
        hex1button->setAcceptDrops(false);

        horizontalLayout->addWidget(hex1button);

        str1button = new QRadioButton(horizontalLayoutWidget);
        str1button->setObjectName(QString::fromUtf8("str1button"));
        str1button->setEnabled(true);

        horizontalLayout->addWidget(str1button);

        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(470, 0, 114, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        hex2button = new QRadioButton(horizontalLayoutWidget_2);
        hex2button->setObjectName(QString::fromUtf8("hex2button"));

        horizontalLayout_2->addWidget(hex2button);

        str2button = new QRadioButton(horizontalLayoutWidget_2);
        str2button->setObjectName(QString::fromUtf8("str2button"));

        horizontalLayout_2->addWidget(str2button);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(680, 0, 91, 31));
        pushButton->setFont(font);
        SendButton = new QPushButton(tab);
        SendButton->setObjectName(QString::fromUtf8("SendButton"));
        SendButton->setGeometry(QRect(300, 500, 75, 23));
        clrsendbutton = new QPushButton(tab);
        clrsendbutton->setObjectName(QString::fromUtf8("clrsendbutton"));
        clrsendbutton->setGeometry(QRect(290, 0, 81, 31));
        clrsendbutton->setFont(font);
        autosendcheckBox = new QCheckBox(tab);
        autosendcheckBox->setObjectName(QString::fromUtf8("autosendcheckBox"));
        autosendcheckBox->setGeometry(QRect(180, 500, 87, 20));
        autosendcheckBox->setFont(font1);
        msBox = new QSpinBox(tab);
        msBox->setObjectName(QString::fromUtf8("msBox"));
        msBox->setGeometry(QRect(90, 500, 61, 20));
        msBox->setMaximum(999);
        msBox->setValue(10);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 500, 71, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_9->setFont(font2);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab2warnlab = new QLabel(tab_2);
        tab2warnlab->setObjectName(QString::fromUtf8("tab2warnlab"));
        tab2warnlab->setGeometry(QRect(0, 540, 54, 31));
        tab2warnlab->setFont(font);
        tab2warn_dis = new QLabel(tab_2);
        tab2warn_dis->setObjectName(QString::fromUtf8("tab2warn_dis"));
        tab2warn_dis->setGeometry(QRect(60, 540, 661, 31));
        tab2warn_dis->setFont(font);
        fileHexEdit = new QPlainTextEdit(tab_2);
        fileHexEdit->setObjectName(QString::fromUtf8("fileHexEdit"));
        fileHexEdit->setGeometry(QRect(0, 20, 381, 471));
        fileHexEdit->setReadOnly(true);
        horizontalLayoutWidget_3 = new QWidget(tab_2);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 490, 301, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_3->addWidget(label_10);

        filenameedit = new QLineEdit(horizontalLayoutWidget_3);
        filenameedit->setObjectName(QString::fromUtf8("filenameedit"));
        filenameedit->setFont(font);
        filenameedit->setReadOnly(true);

        horizontalLayout_3->addWidget(filenameedit);

        FileOpenButton = new QPushButton(horizontalLayoutWidget_3);
        FileOpenButton->setObjectName(QString::fromUtf8("FileOpenButton"));
        FileOpenButton->setFont(font);

        horizontalLayout_3->addWidget(FileOpenButton);

        fileTextEdit = new QPlainTextEdit(tab_2);
        fileTextEdit->setObjectName(QString::fromUtf8("fileTextEdit"));
        fileTextEdit->setGeometry(QRect(420, 20, 371, 471));
        fileTextEdit->setReadOnly(true);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 71, 21));
        label_11->setFont(font);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(420, 0, 101, 16));
        label_12->setFont(font);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        FileSendEdit = new QTextEdit(tab_3);
        FileSendEdit->setObjectName(QString::fromUtf8("FileSendEdit"));
        FileSendEdit->setGeometry(QRect(10, 30, 771, 201));
        FileSendEdit->setReadOnly(true);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 2, 121, 20));
        label_13->setFont(font);
        updataradioButton = new QRadioButton(tab_3);
        updataradioButton->setObjectName(QString::fromUtf8("updataradioButton"));
        updataradioButton->setGeometry(QRect(40, 250, 121, 31));
        updataradioButton->setFont(font1);
        SendFileButton = new QPushButton(tab_3);
        SendFileButton->setObjectName(QString::fromUtf8("SendFileButton"));
        SendFileButton->setGeometry(QRect(650, 500, 101, 41));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        send_textedit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        seachcom->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        bandratebox->clear();
        bandratebox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "115200", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\346\243\200\351\252\214\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        checkbox->clear();
        checkbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None \346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Odd \345\245\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Even \345\201\266", 0, QApplication::UnicodeUTF8)
        );
        databox->clear();
        databox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7bit", 0, QApplication::UnicodeUTF8)
        );
        stopbitbox->clear();
        stopbitbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2bit", 0, QApplication::UnicodeUTF8)
        );
        opencom->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\346\217\220\347\244\272\357\274\232", 0, QApplication::UnicodeUTF8));
        errorlabel->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        hex1button->setText(QApplication::translate("MainWindow", "HEX", 0, QApplication::UnicodeUTF8));
        str1button->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", 0, QApplication::UnicodeUTF8));
        hex2button->setText(QApplication::translate("MainWindow", "HEX ", 0, QApplication::UnicodeUTF8));
        str2button->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        SendButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        clrsendbutton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        autosendcheckBox->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\351\227\264\351\232\224(ms):", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        tab2warnlab->setText(QApplication::translate("MainWindow", "\346\217\220\347\244\272\357\274\232", 0, QApplication::UnicodeUTF8));
        tab2warn_dis->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        FileOpenButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "HEX\346\230\276\347\244\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "hex\346\226\207\344\273\266\350\257\273\345\217\226", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\217\221\351\200\201\346\225\260\346\215\256:", 0, QApplication::UnicodeUTF8));
        updataradioButton->setText(QApplication::translate("MainWindow", "DRV\345\215\207\347\272\247\346\240\274\345\274\217", 0, QApplication::UnicodeUTF8));
        SendFileButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
