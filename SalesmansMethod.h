#ifndef SALESMANSMETHOD_H
#define SALESMANSMETHOD_H

#include <vector>



class SalesmansMethod
{
public:
    struct Edge
    {
        int firstTop;
        int secondTop;

        Edge(int I, int J) : firstTop(I), secondTop(J)
        {

        }
    };

private:

    class Zero
    {
    public:
        int quantity;
        int i;
        int j;

        Zero(int Q, int I, int J) : quantity{ Q }, i{ I }, j{ J }
        {
        }
        ~Zero()
        {
        }
    };

private:

    int **array = nullptr;                  // Матрица
    int **arraySecond = nullptr;
    //Первые строка и столбец содержат в себе названия соответствующих строк и столбцов

    const int firstSizeArr;                 // Начальный размер матрицы
    int sizeArr;							// Размеры матриц
    int sizeArrSecond;
    int *di = nullptr, *dj = nullptr;		// "векторы" столбец и строка соответственно
    int *diSecond = nullptr, *djSecond = nullptr;

    int di_sum, dj_sum;                     // Сумма значений соответствующих "векторов"


    std::vector<Edge> *Ways = nullptr;      // Массив ребер, из которых будет формироваться кратчайший путь
    int HWays;                              // Сумма ребер в Ways

    int H_current, H_0, H_1;                // Сохраняют размер путей (H_current - текущий, H_0-размер пути если выключили ребро, H_1 - если включили)

    std::vector<Zero> zerosArray;

public:
    SalesmansMethod(int** arr, int size, std::vector<Edge> *&ways);

    int findMinElemColumn(int j, int currI = -1);
    int findMinElemRow(int i, int currJ = -1);
    void findDi();
    void findDj();
    void reduceMatrix();
    void findZeros();
    void findZeros1();
    int findBiggerZero();
    void exclusionSimilarEdge(int indexI, int indexJ, bool choseArr);
    void edgesExclusion(int indexI, int indexJ);
    void chooseMatrix(int chose);
    void mainFunction();

    ~SalesmansMethod();
};



#endif // SALESMANSMETHOD_H
