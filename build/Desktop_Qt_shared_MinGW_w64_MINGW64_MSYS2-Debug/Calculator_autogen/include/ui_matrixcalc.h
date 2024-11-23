/********************************************************************************
** Form generated from reading UI file 'matrixcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIXCALC_H
#define UI_MATRIXCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MatrixCalc
{
public:
    QWidget *centralwidget;
    QTableWidget *matA;
    QTableWidget *matB;
    QPushButton *pushButton_Aclear;
    QPushButton *pushButton_upSizeA;
    QPushButton *pushButton_downSizeA;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_opred;
    QPushButton *pushButton_trans;
    QPushButton *pushButton_revmat;
    QPushButton *pushButton_algebrdop;
    QPushButton *pushButton_prisoedmat;
    QPushButton *pushButton_minorel;
    QPushButton *pushButton_opredminora;
    QPushButton *pushButton_8;
    QTableWidget *matAns;
    QLabel *label;
    QPushButton *pushButton_multNum;
    QPushButton *pushButton_Aclear_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *detL;

    void setupUi(QMainWindow *MatrixCalc)
    {
        if (MatrixCalc->objectName().isEmpty())
            MatrixCalc->setObjectName("MatrixCalc");
        MatrixCalc->resize(800, 600);
        centralwidget = new QWidget(MatrixCalc);
        centralwidget->setObjectName("centralwidget");
        matA = new QTableWidget(centralwidget);
        if (matA->columnCount() < 2)
            matA->setColumnCount(2);
        if (matA->rowCount() < 2)
            matA->setRowCount(2);
        matA->setObjectName("matA");
        matA->setGeometry(QRect(20, 20, 261, 211));
        matA->setMinimumSize(QSize(2, 2));
        matA->setSizeIncrement(QSize(2, 2));
        matA->setBaseSize(QSize(2, 2));
        matA->setRowCount(2);
        matA->setColumnCount(2);
        matA->horizontalHeader()->setDefaultSectionSize(43);
        matA->verticalHeader()->setMinimumSectionSize(30);
        matA->verticalHeader()->setDefaultSectionSize(30);
        matB = new QTableWidget(centralwidget);
        if (matB->columnCount() < 2)
            matB->setColumnCount(2);
        if (matB->rowCount() < 2)
            matB->setRowCount(2);
        matB->setObjectName("matB");
        matB->setGeometry(QRect(480, 20, 301, 211));
        matB->setMinimumSize(QSize(2, 2));
        matB->setRowCount(2);
        matB->setColumnCount(2);
        matB->horizontalHeader()->setVisible(true);
        matB->horizontalHeader()->setMinimumSectionSize(43);
        matB->horizontalHeader()->setDefaultSectionSize(43);
        matB->horizontalHeader()->setHighlightSections(false);
        matB->verticalHeader()->setMinimumSectionSize(30);
        matB->verticalHeader()->setDefaultSectionSize(30);
        pushButton_Aclear = new QPushButton(centralwidget);
        pushButton_Aclear->setObjectName("pushButton_Aclear");
        pushButton_Aclear->setGeometry(QRect(60, 240, 71, 29));
        pushButton_upSizeA = new QPushButton(centralwidget);
        pushButton_upSizeA->setObjectName("pushButton_upSizeA");
        pushButton_upSizeA->setGeometry(QRect(130, 240, 31, 29));
        pushButton_downSizeA = new QPushButton(centralwidget);
        pushButton_downSizeA->setObjectName("pushButton_downSizeA");
        pushButton_downSizeA->setGeometry(QRect(160, 240, 31, 29));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(340, 70, 83, 51));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(340, 130, 83, 51));
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName("pushButton_mult");
        pushButton_mult->setGeometry(QRect(340, 190, 83, 51));
        pushButton_opred = new QPushButton(centralwidget);
        pushButton_opred->setObjectName("pushButton_opred");
        pushButton_opred->setGeometry(QRect(10, 280, 151, 31));
        pushButton_trans = new QPushButton(centralwidget);
        pushButton_trans->setObjectName("pushButton_trans");
        pushButton_trans->setGeometry(QRect(170, 280, 191, 31));
        pushButton_revmat = new QPushButton(centralwidget);
        pushButton_revmat->setObjectName("pushButton_revmat");
        pushButton_revmat->setGeometry(QRect(10, 320, 151, 31));
        pushButton_algebrdop = new QPushButton(centralwidget);
        pushButton_algebrdop->setObjectName("pushButton_algebrdop");
        pushButton_algebrdop->setGeometry(QRect(170, 320, 191, 31));
        pushButton_prisoedmat = new QPushButton(centralwidget);
        pushButton_prisoedmat->setObjectName("pushButton_prisoedmat");
        pushButton_prisoedmat->setGeometry(QRect(170, 360, 191, 31));
        pushButton_minorel = new QPushButton(centralwidget);
        pushButton_minorel->setObjectName("pushButton_minorel");
        pushButton_minorel->setGeometry(QRect(10, 360, 151, 31));
        pushButton_opredminora = new QPushButton(centralwidget);
        pushButton_opredminora->setObjectName("pushButton_opredminora");
        pushButton_opredminora->setGeometry(QRect(170, 400, 191, 31));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(10, 400, 151, 31));
        matAns = new QTableWidget(centralwidget);
        if (matAns->columnCount() < 2)
            matAns->setColumnCount(2);
        if (matAns->rowCount() < 2)
            matAns->setRowCount(2);
        matAns->setObjectName("matAns");
        matAns->setGeometry(QRect(430, 310, 331, 251));
        matAns->setMinimumSize(QSize(2, 2));
        matAns->setRowCount(2);
        matAns->setColumnCount(2);
        matAns->horizontalHeader()->setVisible(true);
        matAns->horizontalHeader()->setMinimumSectionSize(43);
        matAns->horizontalHeader()->setDefaultSectionSize(43);
        matAns->horizontalHeader()->setHighlightSections(false);
        matAns->verticalHeader()->setMinimumSectionSize(30);
        matAns->verticalHeader()->setDefaultSectionSize(30);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 280, 191, 31));
        pushButton_multNum = new QPushButton(centralwidget);
        pushButton_multNum->setObjectName("pushButton_multNum");
        pushButton_multNum->setGeometry(QRect(10, 440, 351, 29));
        pushButton_Aclear_2 = new QPushButton(centralwidget);
        pushButton_Aclear_2->setObjectName("pushButton_Aclear_2");
        pushButton_Aclear_2->setGeometry(QRect(450, 570, 71, 29));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 30, 43, 30));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 10, 161, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 540, 181, 31));
        detL = new QLabel(centralwidget);
        detL->setObjectName("detL");
        detL->setGeometry(QRect(200, 539, 63, 41));
        MatrixCalc->setCentralWidget(centralwidget);

        retranslateUi(MatrixCalc);

        QMetaObject::connectSlotsByName(MatrixCalc);
    } // setupUi

    void retranslateUi(QMainWindow *MatrixCalc)
    {
        MatrixCalc->setWindowTitle(QCoreApplication::translate("MatrixCalc", "MainWindow", nullptr));
        pushButton_Aclear->setText(QCoreApplication::translate("MatrixCalc", "Clear", nullptr));
        pushButton_upSizeA->setText(QCoreApplication::translate("MatrixCalc", "+", nullptr));
        pushButton_downSizeA->setText(QCoreApplication::translate("MatrixCalc", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MatrixCalc", "A + B", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MatrixCalc", "A - B", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MatrixCalc", "A * B", nullptr));
        pushButton_opred->setText(QCoreApplication::translate("MatrixCalc", "\320\260.\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214", nullptr));
        pushButton_trans->setText(QCoreApplication::translate("MatrixCalc", "b.\320\242\321\200\320\260\320\275\321\201\320\277\320\276\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_revmat->setText(QCoreApplication::translate("MatrixCalc", "h.\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\320\260", nullptr));
        pushButton_algebrdop->setText(QCoreApplication::translate("MatrixCalc", "f.\320\220\320\273\320\263\320\265\320\261\321\200\320\260\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\264\320\276\320\277", nullptr));
        pushButton_prisoedmat->setText(QCoreApplication::translate("MatrixCalc", "g.\320\237\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\275\320\260\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\320\260", nullptr));
        pushButton_minorel->setText(QCoreApplication::translate("MatrixCalc", "c.\320\234\320\260\321\202\321\200\320\270\321\206\320\260 \320\274\320\270\320\275\320\276\321\200\320\260", nullptr));
        pushButton_opredminora->setText(QCoreApplication::translate("MatrixCalc", "d.\320\234\320\270\320\275\320\276\321\200 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MatrixCalc", "e. \320\234\320\260\321\202\321\200\320\270\321\206\321\213 \320\274\320\270\320\275\320\276\321\200\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("MatrixCalc", "\320\237\320\276\320\273\321\203\321\207\320\265\320\275\320\275\320\260\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\320\260:", nullptr));
        pushButton_multNum->setText(QCoreApplication::translate("MatrixCalc", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265 \320\275\320\260 \321\207\320\270\321\201\320\273\320\276", nullptr));
        pushButton_Aclear_2->setText(QCoreApplication::translate("MatrixCalc", "Clear", nullptr));
        label_2->setText(QCoreApplication::translate("MatrixCalc", "\320\247\320\270\321\201\320\273\320\276 \320\264\320\273\321\217 \321\203\320\274\320\275\320\276\320\266\320\265\320\275\320\270\321\217: ", nullptr));
        label_3->setText(QCoreApplication::translate("MatrixCalc", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214 \320\274\320\260\321\202\321\200\320\270\321\206\321\213:", nullptr));
        detL->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MatrixCalc: public Ui_MatrixCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIXCALC_H
