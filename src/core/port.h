#ifndef PORT_H
#define PORT_H

#include <QObject>

class port : public QObject
{
    Q_OBJECT
public:
    explicit port(QObject *parent = nullptr);
protected:
    QString type="";
    QString data="";
    QString name;
    port *connected=NULL;
signals:

};

#endif // PORT_H
