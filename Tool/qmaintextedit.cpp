#include "qmaintextedit.h"
#include <QMessageBox>

QMainTextedit::QMainTextedit(QWidget *parent) :
    QTextEdit(parent)
{

}

void QMainTextedit::mouseDoubleClickEvent(QMouseEvent *e)
{
   QMessageBox::warning(this,tr("Warning"),tr("���ڲ����ڻ��ѱ�ռ��!"),QMessageBox::Yes);
}
