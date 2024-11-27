#include "matrixcalc.h"
#include "ui_matrixcalc.h"
#include "linalgebra.h"
#include <QMessageBox>
#include <QVBoxLayout>
#include "parameterdialog.h"
#include <QString>
#include <math.h>

MatrixCalc::MatrixCalc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MatrixCalc)
{
    ui->setupUi(this);
}

MatrixCalc::~MatrixCalc()
{
    delete ui;
}

void MatrixCalc::closeEvent(QCloseEvent *event) {
    emit closed();
    QMainWindow::closeEvent(event);
}

void MatrixCalc::on_pushButton_upSizeA_clicked()
{
    ui->matA->setRowCount(ui->matA->rowCount()+1);
    ui->matA->setColumnCount(ui->matA->columnCount()+1);
    ui->matB->setRowCount(ui->matB->rowCount()+1);
    ui->matB->setColumnCount(ui->matB->columnCount()+1);
    ui->matAns->setRowCount(ui->matAns->rowCount()+1);
    ui->matAns->setColumnCount(ui->matAns->columnCount()+1);
}


void MatrixCalc::on_pushButton_downSizeA_clicked()
{
    if (ui->matA->rowCount() > 1)
    {
        ui->matA->setRowCount(ui->matA->rowCount()-1);
        ui->matA->setColumnCount(ui->matA->columnCount()-1);
        ui->matB->setRowCount(ui->matB->rowCount()-1);
        ui->matB->setColumnCount(ui->matB->columnCount()-1);
        ui->matAns->setRowCount(ui->matAns->rowCount()-1);
        ui->matAns->setColumnCount(ui->matAns->columnCount()-1);
    }
}


void MatrixCalc::on_pushButton_Aclear_clicked()
{
    ui->matA->clear();
    ui->matB->clear();
    ui->lineEdit->clear();
}


void MatrixCalc::on_pushButton_plus_clicked()
{
    for (int i = 0; i < ui->matA->rowCount(); i++)
    {
        for (int j = 0; j < ui->matA->columnCount(); j++)
        {
            double value = ui->matA->item(i, j)->text().toDouble() + ui->matB->item(i, j)->text().toDouble();
            ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(value)));
        }
    }
}


void MatrixCalc::on_pushButton_minus_clicked()
{
    for (int i = 0; i < ui->matA->rowCount(); i++)
    {
        for (int j = 0; j < ui->matA->columnCount(); j++)
        {
            double value = ui->matA->item(i, j)->text().toDouble() - ui->matB->item(i, j)->text().toDouble();
            ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(value)));
        }
    }
}


void MatrixCalc::on_pushButton_mult_clicked()
{
    for (int i = 0; i < ui->matA->rowCount(); ++i) {
        for (int j = 0; j < ui->matB->columnCount(); ++j) {
            double sum = 0;
            for (int k = 0; k < ui->matA->columnCount(); ++k) {
                double value1 = ui->matA->item(i, k) ? ui->matA->item(i, k)->text().toDouble() : 0;
                double value2 = ui->matB->item(k, j) ? ui->matB->item(k, j)->text().toDouble() : 0;
                sum += value1 * value2;
            }
            ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(sum)));
        }
    }
}



void MatrixCalc::on_pushButton_multNum_clicked()
{
    for (int i = 0; i < ui->matA->rowCount(); i++)
    {
        for (int j = 0; j < ui->matA->columnCount(); j++)
        {
            double value = ui->matA->item(i, j)->text().toDouble() * ui->lineEdit->text().toDouble();
            ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(value)));
        }
    }
}


void MatrixCalc::on_pushButton_opred_clicked()
{
    double det;
    det = linA.calculateDet(ui->matA);
    ui->detL->setText(QString::number(det));
}


void MatrixCalc::on_pushButton_trans_clicked()
{
    linA.transposeMat(ui->matA, ui->matAns);
}


void MatrixCalc::on_pushButton_minorel_clicked()
{
    int row, col;
    int rowM = ui->matA->rowCount();
    int colM = ui->matA->columnCount();
    ui->matAns->setRowCount(rowM - 1);
    ui->matAns->setRowCount(colM - 1);
    while (true)
    {
        ParameterDialog dialog1("Номер строки элемента", rowM, colM);
        if (dialog1.exec() == QDialog::Accepted) {
            row = (dialog1.getParameter()).toInt();
        }
        break;
    }
    while (true)
    {
        ParameterDialog dialog2("Номер столбца элемента", rowM, colM);
        if (dialog2.exec() == QDialog::Accepted) {
            col = (dialog2.getParameter()).toInt();
        }
        break;
    }
    QTableWidget *minorMatrix = linA.matrixMinor(ui->matA, row, col);

    for (int row = 0; row < minorMatrix->rowCount(); ++row) {
        for (int col = 0; col < minorMatrix->columnCount(); ++col) {
            ui->matAns->setItem(row, col, new QTableWidgetItem(minorMatrix->item(row, col)->text()));
        }
    }

}


void MatrixCalc::on_pushButton_opredminora_clicked()
{
    int row, col;
    int rowM = ui->matA->rowCount();
    int colM = ui->matA->columnCount();
    ui->matAns->setRowCount(rowM);
    ui->matAns->setRowCount(colM);
    while (true)
    {
        ParameterDialog dialog1("Номер строки элемента", rowM, colM);
        if (dialog1.exec() == QDialog::Accepted) {
            row = (dialog1.getParameter()).toInt();
        }
        break;
    }
    while (true)
    {
        ParameterDialog dialog2("Номер столбца элемента", rowM, colM);
        if (dialog2.exec() == QDialog::Accepted) {
            col = (dialog2.getParameter()).toInt();
        }
        break;
    }
    QTableWidget *minorMatrix = linA.matrixMinor(ui->matA, row-1, col-1);
    double det = linA.calculateDet(minorMatrix);

    ui->matAns->setItem(row-1, col-1, new QTableWidgetItem(QString::number(det, 'g', 15)));

}


void MatrixCalc::on_pushButton_8_clicked()
{
    int rowM = ui->matA->rowCount();
    int colM = ui->matA->columnCount();
    for(int i = 0 ; i < rowM; ++i)
    {
        for(int j = 0; j < colM; ++j)
        {
            QTableWidget *minorMatrix = linA.matrixMinor(ui->matA, i, j);
            double det = linA.calculateDet(minorMatrix);
            ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(det, 'g', 15)));
        }
    }
}


void MatrixCalc::on_pushButton_algebrdop_clicked()
{
    int row, col;
    int rowM = ui->matA->rowCount();
    int colM = ui->matA->columnCount();
    ui->matAns->setRowCount(rowM);
    ui->matAns->setRowCount(colM);
    while (true)
    {
        ParameterDialog dialog1("Номер строки элемента", rowM, colM);
        if (dialog1.exec() == QDialog::Accepted) {
            row = (dialog1.getParameter()).toInt();
        }
        break;
    }
    while (true)
    {
        ParameterDialog dialog2("Номер столбца элемента", rowM, colM);
        if (dialog2.exec() == QDialog::Accepted) {
            col = (dialog2.getParameter()).toInt();
        }
        break;
    }
    QTableWidget *minorMatrix = linA.matrixMinor(ui->matA, row-1, col-1);
    double det = pow((-1), (row+col)) * (linA.calculateDet(minorMatrix));


    ui->matAns->setItem(row-1, col-1, new QTableWidgetItem(QString::number(det, 'g', 15)));
}


void MatrixCalc::on_pushButton_prisoedmat_clicked()
{
    int rowM = ui->matA->rowCount();
    int colM = ui->matA->columnCount();
    for(int i = 0 ; i < rowM; ++i)
    {
        for(int j = 0; j < colM; ++j)
        {
            QTableWidget *minorMatrix = linA.matrixMinor(ui->matA, i, j);
            double det =pow((-1), (i+j)) * (linA.calculateDet(minorMatrix));
            ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(det, 'g', 15)));
        }
    }
}


void MatrixCalc::on_pushButton_revmat_clicked()
{
    int rowM = ui->matA->rowCount();
    int colM = ui->matA->columnCount();
    double detA=0;
    detA = linA.calculateDet(ui->matA);
    if(detA != 0)
    {
        double element = 0;

        for(int i = 0 ; i < rowM; ++i)
        {
            for(int j = 0; j < colM; ++j)
            {
                QTableWidget *minorMatrix = linA.matrixMinor(ui->matA, i, j);
                double det =pow((-1), (i+j)) * (linA.calculateDet(minorMatrix));
                ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(det, 'g', 15)));
            }
        }

        linA.transposeMat(ui->matAns, ui->matB);
        for(int i = 0; i<rowM; ++i)
        {
            for(int j = 0; j < colM; ++j)
            {
                element = (1/detA) * (ui->matB->item(i, j)->text().toDouble());
                ui->matAns->setItem(i, j, new QTableWidgetItem(QString::number(element, 'g', 15)));
            }
        }
        ui->matB->clear();
    }
    else
    {
        QMessageBox::warning(this, "Ошибка", "Определитель матрицы равен 0. Введите другую матрицу");
    }
}


void MatrixCalc::on_pushButton_Aclear_2_clicked()
{
    ui->matAns->clear();
}

