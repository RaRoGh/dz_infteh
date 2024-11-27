#ifndef LINALGEBRA_H
#define LINALGEBRA_H
#include <QApplication>
#include <QTableWidget>

class LinAlgebra
{
public:
    LinAlgebra();
    double calculateDet(QTableWidget* matrix);
    void transposeMat(QTableWidget* sourceMat, QTableWidget* targetMat);
    QTableWidget* matrixMinor(QTableWidget *sourceMat, int row, int col);
};

#endif // LINALGEBRA_H
