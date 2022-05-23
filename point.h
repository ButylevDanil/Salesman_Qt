#ifndef POINT_H
#define POINT_H

#include<QGraphicsItem>
#include<QGraphicsEllipseItem>
#include<QGraphicsTextItem>
#include<QGraphicsLineItem>
#include<QBrush>
#include<QPen>
#include<QColor>
#include<QFont>
#include<QString>

#include<QDebug>

// Класс, описывающий вершину
class Point
{
public:
    unsigned int Number;                        // Номер вершины
    int X = 0, Y = 0;                           // Координаты вершины

    QGraphicsEllipseItem* zone = nullptr;       // Круг, который будет сигнализировать, что в данной области
                                                // Нельзя строить другие вершины
    QGraphicsEllipseItem* point = nullptr;      // Круг, который отображает вершину графа
    QGraphicsTextItem* nameOfTop = nullptr;     // Текст, содержит номер вершины и размещается в середине круга

    Point(int x, int y, unsigned int number, int activeZone);

    ~Point();
};

#endif // POINT_H
