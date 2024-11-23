#include "linalgebra.h"

LinAlgebra::LinAlgebra() {}


double LinAlgebra::calculateDet(QTableWidget* matrix)
{
    int n = matrix->rowCount();
    if (n == 0) return 0;


    if (n == 1) {
        return matrix->item(0, 0) ? matrix->item(0, 0)->text().toDouble() : 0;
    }


    if (n == 2) {
        double a = matrix->item(0, 0) ? matrix->item(0, 0)->text().toDouble() : 0;
        double b = matrix->item(0, 1) ? matrix->item(0, 1)->text().toDouble() : 0;
        double c = matrix->item(1, 0) ? matrix->item(1, 0)->text().toDouble() : 0;
        double d = matrix->item(1, 1) ? matrix->item(1, 1)->text().toDouble() : 0;
        return a * d - b * c;
    }

    double det = 0;

    for (int p = 0; p < n; p++) {
        QTableWidget subMatrix(n - 1, n - 1);
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j < p) {
                    subMatrix.setItem(i - 1, j, new QTableWidgetItem(*matrix->item(i, j)));
                } else if (j > p) {
                    subMatrix.setItem(i - 1, j - 1, new QTableWidgetItem(*matrix->item(i, j)));
                }
            }
        }
        det += (p % 2 == 0 ? 1 : -1) * matrix->item(0, p)->text().toDouble() * calculateDet(&subMatrix);
    }

    return det;
}
void LinAlgebra::transposeMat(QTableWidget *sourceMat, QTableWidget *targetMat)
{
    if (sourceMat->rowCount() == 0 || sourceMat->columnCount() == 0) {
        return;
    }

    int rows = sourceMat->rowCount();
    int cols = sourceMat->columnCount();

    targetMat->setRowCount(cols);
    targetMat->setColumnCount(rows);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            QTableWidgetItem* item = sourceMat->item(i, j);
            if (item) {
                targetMat->setItem(j, i, new QTableWidgetItem(item->text()));
            }
        }
    }
}
QTableWidget LinAlgebra::matrixMinor(QTableWidget *sourceMat, int row, int col)
{
    int rows = sourceMat->rowCount();
    int cols = sourceMat->columnCount();

    QTableWidget minor(rows-1, cols-1);
    for (int i = 0, minorRow = 0; i < rows; ++i) {
        if (i == row) continue; // Пропускаем строку, содержащую элемент

        for (int j = 0, minorCol = 0; j < cols; ++j) {
            if (j == col) continue; // Пропускаем столбец, содержащий элемент

            // Копируем элемент в минор
            minor.setI = table->item(i, j)->text().toDouble();
            minorCol++;
        }
        minorRow++;
    }

    return minor;
}
