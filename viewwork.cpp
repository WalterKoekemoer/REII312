#include "viewwork.h"
#include <QDebug>

ViewWork::ViewWork(QWidget *parent)
    :QGraphicsView(parent)
{ 
    setGeometry(0, 100, parent->width(),  parent->height() - 100);
    setSceneRect(-10, 160, parent->width(),   parent->height() - 100);
    mapToScene(this->sceneRect().x(),this->sceneRect().y(),this->sceneRect().width(),this->sceneRect().height());

    this->myLab = new eLab;
    setScene(myLab);

    show();

}


