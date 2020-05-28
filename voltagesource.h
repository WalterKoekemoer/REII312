#ifndef VOLTAGESOURCE_H
#define VOLTAGESOURCE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QWidget>
#include <QRectF>
#include <QDebug>

class VoltageSource : public QGraphicsItem
{
public:
    VoltageSource();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    void dragMoveEvent(QGraphicsSceneDragDropEvent *event);

    int OutputVoltage;

};

#endif // VOLTAGESOURCE_H
