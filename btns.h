#ifndef BTNS_H
#define BTNS_H
#include <QPushButton>
#include <QString>
#include <QPoint>
class Btns
{
    QPushButton btn;
    QString btn_name;
    QPoint pos;
public:
    Btns(QString btn_name, QPoint pos);

};

#endif // BTNS_H
