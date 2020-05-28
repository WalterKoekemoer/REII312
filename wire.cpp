#include "wire.h"

wire::wire()
{
    this->cursor = new QCursor;
    this->start = cursor->pos();
    this->setLine(start.x(),start.y(),start.x(),start.y());
}

void wire::Endnode()
{
   end = cursor->pos();
   this->setLine(start.x(),start.y(),end.x(),end.y());
}

void wire::update()
{
    this->setLine(start.x(),start.y(),cursor->pos().x(),cursor->pos().y());

}

