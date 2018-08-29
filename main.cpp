#include <QApplication>
#include <QGraphicsItem>
#include <QTime>

#include "renderer.h"
#include "game.h"

int main(int argc, char *argv[])
{
        QApplication a(argc, argv);
        Game game{};

        int updateSteps = 16; //60 FPS
        int previousTime = QTime::currentTime().msec();
        int lag = 0;

       while(game.isRunning())
       {
            int currentTime = QTime::currentTime().msec();
            int elapsedTime = currentTime - previousTime;
            previousTime = currentTime;
            lag += elapsedTime;

            //handle User Input

            if(lag >= updateSteps)
            {
                game.updateGame();
                lag -= updateSteps;
            }
            game.setIntpolateFraction(static_cast<float>(lag)/static_cast<float>(updateSteps));
            game.renderGameObjects();
            game.renderGUI();
       }
       a.exit();
       return 0;
}
