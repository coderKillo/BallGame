#include <QApplication>
#include <QGraphicsItem>
#include <QTime>
#include <iostream>

#include "renderer.h"
#include "game.h"

class MyApplication: public QApplication
{
    // QCoreApplication interface
public:
    MyApplication(int &argc, char **argv, int a = ApplicationFlags)
        :QApplication(argc,argv,a)
    {}
    bool notify(QObject *object, QEvent *event)
    {
        std::cout << object << "\t : \t" << event->type() << std::endl;
        return QApplication::notify(object, event);
    }
};

int main(int argc, char *argv[])
{
        // INIT OBJECTS
        MyApplication a(argc, argv);
        Game game;

        //CONNECT

        //EXEC
        return a.exec();
}
