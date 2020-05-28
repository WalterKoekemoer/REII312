#include "elab.h"
#include <QDebug>

eLab::eLab()
{
    NewCursor = addEllipse(-5,-5,10,10);
    addItem(NewCursor);

    this->voltagesrc = new VoltageSource;
    addItem(voltagesrc);
    voltagesrc->show();

    this->draw = new QTimer(this);
    this->connect(this->draw,SIGNAL(timeout()),this,SLOT(LayWire()));

    this->build = new QTimer(this);
    this->connect(this->build,SIGNAL(timeout()),this,SLOT(SceneTimer()));
    build->start();
}

eLab::~eLab(){}

void eLab::ShortWires()
{

}

void eLab::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event);
    if(wiring){
        activeWiring = true;
        this->link = new wire();
        if(!draw->isActive()) addEllipse(link->cursor->pos().x() - 5,link->cursor->pos().y() - 5,10,10);
        this->addItem(link);
        draw->start(10);
        update();
    }

}

void eLab::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event);

}

void eLab::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event);
    if(activeWiring)
    {
        draw->stop();
        link->Endnode();
        wires.push_back(link);
        addEllipse(link->cursor->pos().x() - 5,link->cursor->pos().y() - 5,10,10);
        activeWiring = false;
    }
}

void eLab::dragMoveEvent(QGraphicsSceneDragDropEvent *event)
{
    voltagesrc->dragMoveEvent(event);
    update();
}

void eLab::LayWire()
{
    if(link != nullptr) this->link->update();

    //NewCursor->hide();
    //ConnectToNode = collidingItems(NewCursor).last()->shape().intersected(NewCursor->opaqueArea());
    //NewCursor->setPos(ConnectToNode.pointAtPercent(1));
}

void eLab::SceneTimer()
{
    NewCursor->setPos(link->cursor->pos());
    update();
}































