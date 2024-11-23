#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(btn_press()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(btn_press()));

    connect(ui->pushButton_mult, SIGNAL(released()), this, SLOT(operator_press()));
    connect(ui->pushButton_div, SIGNAL(released()), this, SLOT(operator_press()));
    connect(ui->pushButton_minus, SIGNAL(released()), this, SLOT(operator_press()));
    connect(ui->pushButton_plus, SIGNAL(released()), this, SLOT(operator_press()));

    ui->listWidget->setVisible(false);
    ui->pushButton->setVisible(false);

}

double firstNum, secondNum;


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btn_press()
{
    QPushButton * btn = (QPushButton*)sender();

    double editNum;
    QString editText;
    editNum = (ui->lineEdit->text() + btn->text()).toDouble();
    editText = QString::number(editNum, 'g', 15);
    ui->lineEdit->setText(editText);
};



void MainWindow::on_pushButton_point_released()
{
    if (!ui->lineEdit->text().contains("."))
    {
        ui->lineEdit->setText(ui->lineEdit->text() + ".");
    }
};

void MainWindow::on_pushButton_negative_released()
{
    QPushButton * btn = (QPushButton*)sender();

    double editNum;
    QString editText;
    editNum = (ui->lineEdit->text().toDouble()) * -1;
    editText = QString::number(editNum, 'g', 15);
    ui->lineEdit->setText(editText);
}

QString op;

void MainWindow::on_pushButton_percent_released()
{
    double editNum;
    QString editText;
    editNum = (ui->lineEdit->text().toDouble()) * 0.01;
    editText = QString::number(editNum, 'g', 15);
    ui->lineEdit->setText(editText);
}


void MainWindow::on_pushButton_clear_released()
{
    ui->lineEdit->setText("0");
    ui->label->setText("");
    firstNum = 0;
    secondNum = 0;
    op = "";
}


void MainWindow::on_pushButton_del_released()
{

    ui->lineEdit->setText((ui->lineEdit->text()).chopped(1));
    if (ui->lineEdit->text() == "")
    {
        ui->lineEdit->setText("0");
    }

};

void MainWindow::operator_press()
{
    QString labelText;

    calculate(op);

    ui->lineEdit->setText("0");

    QPushButton * btn = (QPushButton*)sender();
    op = btn->text();

    labelText = QString::number(secondNum, 'g', 15) + btn->text();
    ui->label->setText(labelText);
}
void MainWindow::addToHistory(QString op, double firstNum, double secondNum)
{
    double lastNum;
    if (op == "+" || op == "-" || op == "/" || op == "*")
    {
        if (op == "+"){
            lastNum = secondNum - firstNum;
        }
        else if (op == "-"){
            lastNum = secondNum + firstNum;
        }
        else if (op ==  "*"){
            lastNum = secondNum / firstNum;
        }
        else if (op ==  "/"){
            if (firstNum != 0)
                lastNum = secondNum * firstNum;
        }
        QString historyEntry = QString("%1 %2 %3 = %4")
                                   .arg(lastNum)
                                   .arg(op)
                                   .arg(firstNum)
                                   .arg(secondNum);

        ui->listWidget->addItem(historyEntry);
    }
}
void MainWindow::calculate(QString op)
{
    firstNum = (ui->lineEdit->text()).toDouble();
    if (op == "+"){
        secondNum += firstNum;
    }
    else if (op == "-"){
        secondNum -= firstNum;
    }
    else if (op ==  "*"){
        secondNum *= firstNum;
    }
    else if (op ==  "/"){
        if (firstNum != 0)
            secondNum /= firstNum;
        else
        {
            ui->lineEdit->setText("Деление на 0 невозможно!");
        }
    }
    else {
        secondNum = firstNum;
    }
    if (ui->lineEdit->text() != "Деление на 0 невозможно!"){
        addToHistory(op, firstNum, secondNum);}
    firstNum = 0;
}
void MainWindow::on_pushButton_equal_released()
{
    QString answer;
    QPushButton * btn = (QPushButton*)sender();
    calculate(op);
    if (ui->lineEdit->text() != "Деление на 0 невозможно!"){
        answer = QString::number(secondNum, 'g', 15);
        ui->label->setText((ui->label->text() + (ui->lineEdit->text()) + "="));
        ui->lineEdit->setText(answer);
    }

}


void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->listWidget->setVisible(!ui->listWidget->isVisible());
    ui->pushButton->setVisible(!ui->pushButton->isVisible());
}


void MainWindow::on_pushButton_matrix_clicked()
{
    mxCalc = new MatrixCalc();
    connect(mxCalc, &MatrixCalc::closed, this, &MainWindow::show);
    mxCalc->show();
    this->hide();
}


void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{

    ui->label->setText(index.data().toString());
}

