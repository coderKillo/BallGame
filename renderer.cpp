#include "renderer.h"
#include "iostream"

Renderer::Renderer()
{
    this->setSceneRect(0, 0, WIDTH, HEIGHT);

    m_view = new QGraphicsView(this);
    m_view->fitInView(this->sceneRect(), Qt::KeepAspectRatio);
    m_view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_view->show();
    m_view->setScene(this);
}

Renderer::~Renderer()
{
    delete m_view;
}
