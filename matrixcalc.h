#ifndef MATRIXCALC_H
#define MATRIXCALC_H
#include "linalgebra.h"
#include <QMainWindow>

namespace Ui {
class MatrixCalc;
}

class MatrixCalc : public QMainWindow
{
    Q_OBJECT

public:
    explicit MatrixCalc(QWidget *parent = nullptr);
    ~MatrixCalc();
protected:
    void closeEvent(QCloseEvent *event) override;
private:
    Ui::MatrixCalc *ui;
    LinAlgebra linA;
signals:
    void closed();
private slots:
    void on_pushButton_upSizeA_clicked();
    void on_pushButton_downSizeA_clicked();
    void on_pushButton_Aclear_clicked();
    void on_pushButton_plus_clicked();
    void on_pushButton_minus_clicked();
    void on_pushButton_mult_clicked();
    void on_pushButton_multNum_clicked();
    void on_pushButton_opred_clicked();
    void on_pushButton_trans_clicked();
    void on_pushButton_minorel_clicked();
    void on_pushButton_opredminora_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_algebrdop_clicked();
    void on_pushButton_prisoedmat_clicked();
    void on_pushButton_revmat_clicked();
    void on_pushButton_Aclear_2_clicked();
};

#endif // MATRIXCALC_H
