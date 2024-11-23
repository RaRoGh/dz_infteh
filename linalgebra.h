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
    QTableWidget matrixMinor(QTableWidget* sourceMat);
};

#endif // LINALGEBRA_H