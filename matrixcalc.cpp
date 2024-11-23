#include "matrixcalc.h"
#include "ui_matrixcalc.h"
#include "linalgebra.h"
#include <QMessageBox>
#include <QVBoxLayout>
#include "parameterdialog.h"

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
    int rowM = ui->matA->rowCount();
    int colM = ui->matA->columnCount();
    while (true)
    {
        ParameterDialog dialog1("Номер строки элемента", rowM, colM);
        if (dialog1.exec() == QDialog::Accepted) {
            int row = (dialog1.getParameter()).toInt();
        }
        break;
    }
    while (true)
    {
        ParameterDialog dialog2("Номер столбца элемента", rowM, colM);
        if (dialog2.exec() == QDialog::Accepted) {
            int col = (dialog2.getParameter()).toInt();
        }
        break;
    }
    ui->matAns->setRowCount(rowM - 1);
    ui->matAns->setRowCount(colM - 1);


}

