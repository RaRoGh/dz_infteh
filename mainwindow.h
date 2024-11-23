#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPushButton>
#include <QMainWindow>
#include "matrixcalc.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton * btn_save = new QPushButton;
    void calculate(QString op);
    void addToHistory(QString op, double firstNum, double secondNum);
    MatrixCalc *mxCalc;

private slots:
    void btn_press();
    void on_pushButton_point_released();
    void on_pushButton_negative_released();
    void on_pushButton_percent_released();
    void on_pushButton_clear_released();
    void on_pushButton_del_released();
    void operator_press();
    void on_pushButton_equal_released();
    void on_pushButton_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_matrix_clicked();
    void on_listWidget_doubleClicked(const QModelIndex &index);
};
#endif // MAINWINDOW_H
