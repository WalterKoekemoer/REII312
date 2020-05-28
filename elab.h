#ifndef ELAB_H
#define ELAB_H

#include <QGraphicsLineItem>
#include <voltagesource.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPainterPath>
#include <QLinkedList>
#include <QTransform>
#include <QWidget>
#include <QTimer>
#include "wire.h"
#include <QDebug>

class eLab : public QGraphicsScene
{
    Q_OBJECT
public:
    eLab();
    ~eLab();
    void ShortWires();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
    void dragMoveEvent(QGraphicsSceneDragDropEvent *event);

    bool wiring = false;
    bool shortOut = true;

public slots:
    void LayWire();
    void SceneTimer();


private:
    QLinkedList <QPointF> ShortCircuits;
    QGraphicsEllipseItem *NewCursor;
    QPainterPath ConnectToNode;
    bool activeWiring = false;
    QLinkedList <wire*> wires;
    VoltageSource *voltagesrc;
    QTimer *draw;
    QTimer *build;
    wire *link;

};

#endif // ELAB_H
