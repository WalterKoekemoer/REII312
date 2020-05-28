#ifndef VIEWWORK_H
#define VIEWWORK_H

#include <QGraphicsView>
#include <QWidget>
#include <elab.h>

class ViewWork : public QGraphicsView
{
public:
    explicit ViewWork(QWidget *parent = nullptr);
    void updater();
    eLab *myLab;

};

#endif // VIEWWORK_H
