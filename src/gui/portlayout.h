#ifndef PORTLAYOUT_H
#define PORTLAYOUT_H

#include <QGraphicsItem>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <qdebug.h>
#include <QComboBox>
#include  "ui_mainwindow.h"
#include  "./core/port.h"
class portLayout: public QObject
{
public:
    portLayout(QWidget * place,port * corePtr);
    ~portLayout();
public slots:
   void destructButt();
private:
    port * corePtr;
    QVBoxLayout * mainLayout;
    bool deletedGraphic;
    void deleteElements();
};

#endif // PORTLAYOUT_H
