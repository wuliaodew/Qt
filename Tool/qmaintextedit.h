#ifndef QMAINTEXTEDIT_H
#define QMAINTEXTEDIT_H

#include <QTextEdit>

class QMainTextedit : public QTextEdit
{
    Q_OBJECT
public:
    explicit QMainTextedit(QWidget *parent = 0);
    
signals:

public slots:
    
protected:
    void mouseDoubleClickEvent(QMouseEvent *e);
};

#endif // QMAINTEXTEDIT_H
