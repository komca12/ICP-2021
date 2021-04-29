#include "blockmodel.h"
#include <QDebug>
blockModel::blockModel():height(120),width(100)
{
    setFlag(ItemIsMovable);
    qDebug()<<"model created";
}

blockModel::~blockModel()
{
    qDebug()<<"model deleted";
}

QRectF blockModel::boundingRect() const
{
    return QRectF(0,0,width,height);
}

void blockModel::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    QPen border(Qt::black, 2);
    painter->setBrush(Qt::gray);
    painter->setPen(border);
    painter->drawRoundedRect(rect,20,20);
}

void blockModel::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug()<<"fuuu";
}

void blockModel::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

void blockModel::resize(int newWidth, int newHeight)
{
    width=newWidth;
    height=newHeight;
    update();
}
