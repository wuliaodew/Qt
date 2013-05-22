#include "qmaintextedit.h"
#include <QMessageBox>

QMainTextedit::QMainTextedit(QWidget *parent) :
    QTextEdit(parent)
{

}

void QMainTextedit::mouseDoubleClickEvent(QMouseEvent *e)
{
   QMessageBox::warning(this,tr("Warning"),tr("串口不存在或已被占用!"),QMessageBox::Yes);
}
