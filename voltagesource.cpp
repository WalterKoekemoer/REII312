#include "voltagesource.h"


VoltageSource::VoltageSource()
{
    setAcceptDrops(true);
}

void VoltageSource::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    painter->drawRect(cursor().pos().x() - 50,cursor().pos().y() + 20,100,100);

    painter->drawLine(cursor().pos().x() ,cursor().pos().y(),cursor().pos().x() ,cursor().pos().y() + 20);
    painter->drawLine(cursor().pos().x() ,cursor().pos().y() + 120,cursor().pos().x() ,cursor().pos().y() + 140);

    painter->drawEllipse(cursor().pos().x() - 5,cursor().pos().y() + 135,10,10);

    painter->drawLine(cursor().pos().x() - 12.5,cursor().pos().y() + 37, cursor().pos().x() + 12.5,cursor().pos().y() + 37);
    painter->drawLine(cursor().pos().x(),cursor().pos().y() + 25, cursor().pos().x(),cursor().pos().y() + 50);

    painter->drawLine(cursor().pos().x() - 12.5,cursor().pos().y() + 102, cursor().pos().x() + 12.5,cursor().pos().y() + 102);
}

QRectF VoltageSource::boundingRect() const
{
    return QRectF(cursor().pos(),QSize(215,50));
}

void VoltageSource::dragMoveEvent(QGraphicsSceneDragDropEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "hovering";
    //setPos(cursor().pos().x() + 50,cursor().pos().y() - 20);
}



