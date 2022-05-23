#include "paintscene.h"


PaintScene::PaintScene(QGraphicsScene* parent) : QGraphicsScene(parent)
{

}

PaintScene::~PaintScene()
{

}

void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        //Если в месте, где находится курсор мыши уже имеется некий элемент сцены, то не создаем вершину
        if(items(QPointF(event->scenePos().x(), event->scenePos().y())).size()==0)
        {
            // Получаем указатель на объект класса PointsAndMatrix
            if(ptrMatrix==nullptr) {emit signalGetPtrMatrix(ptrMatrix);}

            // Создаем и добавляем в контейнер вершину
            // buffNumbOfCreatedPoint - индекс последней созданной вершины
            int buffNumbOfCreatedPoint = ptrMatrix->addPoint(event->scenePos().x(), event->scenePos().y());

            // Рисуем вершину
            addItem_Point(buffNumbOfCreatedPoint);

            for(int i = 0; i < buffNumbOfCreatedPoint; i++)
            {
            // Рисуем пути от вновь созданной вершины к другим вершинам
            addItem_Line(i, buffNumbOfCreatedPoint);
            }


            qDebug() << "\n";
            QDebug aaa = qDebug();
            aaa << "    ";
            for(int i = 0; i < ptrMatrix->Points.size(); i++)
            {
                aaa << i << " ";
            }
            aaa << "\n";
            qDebug() = aaa;
            for(int i = 0; i < ptrMatrix->Points.size(); i++)
            {
                for(int j = 0; j < ptrMatrix->Points.size(); j++)
                {
                    if(j==0) {aaa << i << " ";}
                    aaa << ptrMatrix->WaysMatrix[i][j].size << " ";
                }
                aaa << "\n";
                qDebug() = aaa;
            }


        }

    }

    if(event->button() == Qt::RightButton)
    {
        /*
        for(int i = 0; i < ptrMatrix->Points.size(); i++)
        {
            for(int j = 0; j < ptrMatrix->Points.size(); j++)
            {
                deleteItem_Line(i, j);
                ptrMatrix->deleteLine(i,j);
            }
        }
        */
        ptrMatrix->deletePoint(0);
    }

    if(event->button() == Qt::MiddleButton)
    {
        /*
        for(int i = 0; i < ptrMatrix->Points.size(); i++)
        {
            for(int j = 0; j < ptrMatrix->Points.size(); j++)
            {
                deleteItem_Line(i, j);
                ptrMatrix->deleteLine(i,j);
            }
        }
        */
        ptrMatrix->deleteAll();
    }
}
