/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_del;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_point;
    QLineEdit *lineEdit;
    QPushButton *pushButton_negative;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_matrix;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(446, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(10, 150, 100, 80));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        pushButton_percent->setFont(font);
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(120, 150, 100, 80));
        pushButton_clear->setFont(font);
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName("pushButton_del");
        pushButton_del->setGeometry(QRect(340, 150, 100, 80));
        pushButton_del->setFont(font);
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName("pushButton_div");
        pushButton_div->setGeometry(QRect(230, 150, 100, 80));
        pushButton_div->setFont(font);
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName("pushButton_mult");
        pushButton_mult->setGeometry(QRect(340, 240, 100, 80));
        pushButton_mult->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(120, 240, 100, 80));
        pushButton_8->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(230, 240, 100, 80));
        pushButton_7->setFont(font);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(10, 240, 100, 80));
        pushButton_9->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 420, 100, 80));
        pushButton_2->setFont(font);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(340, 330, 100, 80));
        pushButton_plus->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 420, 100, 80));
        pushButton_3->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(120, 330, 100, 80));
        pushButton_5->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(230, 330, 100, 80));
        pushButton_4->setFont(font);
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(340, 420, 100, 80));
        pushButton_minus->setFont(font);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(230, 420, 100, 80));
        pushButton_1->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 330, 100, 80));
        pushButton_6->setFont(font);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(120, 510, 100, 80));
        pushButton_0->setFont(font);
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(230, 510, 100, 80));
        pushButton_equal->setFont(font);
        pushButton_equal->setAutoFillBackground(false);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(200, 120, 100);\n"
"}"));
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName("pushButton_point");
        pushButton_point->setGeometry(QRect(10, 510, 100, 80));
        pushButton_point->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 60, 431, 81));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	qproperty-alignment : 'AlignVCenter | AlignRight';\n"
"	border: 1px solid gray;\n"
"}"));
        pushButton_negative = new QPushButton(centralwidget);
        pushButton_negative->setObjectName("pushButton_negative");
        pushButton_negative->setGeometry(QRect(340, 510, 100, 80));
        pushButton_negative->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(262, 70, 171, 20));
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(217, 217, 217);\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label->setMargin(4);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(true);
        listWidget->setGeometry(QRect(0, 160, 441, 441));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        listWidget->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 560, 131, 31));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(400, 10, 41, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton_10->setFont(font3);
        pushButton_matrix = new QPushButton(centralwidget);
        pushButton_matrix->setObjectName("pushButton_matrix");
        pushButton_matrix->setGeometry(QRect(10, 10, 83, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_negative->setText(QCoreApplication::translate("MainWindow", "-/+", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear History", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\342\237\262", nullptr));
        pushButton_matrix->setText(QCoreApplication::translate("MainWindow", "Matrix Calc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
