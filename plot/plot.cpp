
#include <QtGui/QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPointF>
#include <QVector>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVector <QPointF> points;
    std::cout << "Enter number of points";
    int n,x,y;
    std::cin >> n;

    for(int i = 0; i< n; i++)
    {
       std::cin>>x>>y;
       points.append(QPointF(x, y));
    }

    QGraphicsView * view = new QGraphicsView();
    QGraphicsScene * scene = new QGraphicsScene();
    view->setScene(scene);
    scene->addLine(-100, 0,100, 0, QPen(Qt::blue));
    scene->addLine(0, -100,0, 100, QPen(Qt::blue));
    for(int i = 0; i< points.size(); i++)
        scene->addEllipse(points[i].x(), points[i].y(), 1, 1);

    view->show();

    return a.exec();
}
