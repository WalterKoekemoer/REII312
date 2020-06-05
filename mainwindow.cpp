
// EXPLANATION , JUST COMMENT OUT TO SEE PROGRAM EXAMPLE.

// QLinkedList<T> is one of Qt's generic container classes.
//It stores a list of values and provides iterator-based access as well as constant time insertions and removals.
//QList<T>, QLinkedList<T>, and QVector<T> provide similar functionality.
//Here's an overview:
//For most purposes, QList is the right class to use. Its index-based API is more convenient than QLinkedList's iterator-based API, and it is usually faster than QVector because of the way it stores its items in memory (see Algorithmic Complexity for details). It also expands to less code in your executable.
//If you need a real linked list, with guarantees of constant time insertions in the middle of the list and iterators to items rather than indexes, use QLinkedList.
//If you want the items to occupy adjacent memory positions, use QVector.

 //Here's an example of a QLinkedList that stores integers and a QLinkedList that stores QTime values:
#include <QLinkedList>
QLinkedList<int> integerList;
QLinkedList<QTime> timeList

//QLinkedList stores a list of items. The default constructor creates an empty list. To insert items into the list, you can use operator

QLinkedList<QString> list;
        list << "one" << "two" << "three";
        // list: ["one", "two", "three"]

  // If you want to get the first or last item in a linked list, use first() or last(). If you want to remove an item from either end of the list, use removeFirst() or removeLast(). If you want to remove all occurrences of a given value in the list, use removeAll().
 // A common requirement is to remove the first or last item in the list and do something with it. For this, QLinkedList provides takeFirst() and takeLast(). Here's a loop that removes the items from a list one at a time and calls delete on them:
        QLinkedList<QWidget *> list;
        ...
        while (!list.isEmpty())
            delete list.takeFirst();

 //QLinkedList's value type must be an assignable data type. This covers most data types that are commonly used, but the compiler won't let you, for example, store a QWidget as a value; instead, store a QWidget *. A few functions have additional requirements; for example, contains() and removeAll() expect the value type to support operator==(). These requirements are documented on a per-function basis


        //PROGRAM 1 EXAMPLE
        //QLinkedList stores a list of items. The default constructor creates an empty list. To insert items into the list, we can use operator<<().

#include <QCoreApplication>
#include <QLinkedList>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLinkedList<QString> List;

    List << "A" << "B" << "C";
    List.append("D");
    List.append("E");
    List.append("F");

    foreach(QString s, List) qDebug() << s;

    return a.exec();
}

