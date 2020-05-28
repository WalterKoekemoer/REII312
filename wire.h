#ifndef WIRE_H
#define WIRE_H

#include <QGraphicsLineItem>
#include <QCursor>
#include <QPointF>
#include <QDebug>

class wire : public QGraphicsLineItem
{
public:
    wire();
    void Endnode();
    void update();

    QCursor *cursor;

private:
    QPointF start;
    QPointF end;
};

#endif // WIRE_H
