#include "parameterdialog.h"
#include <QLabel>
#include <QMessageBox>

ParameterDialog::ParameterDialog(QString name, int rowM, int colM,QWidget *parent) : QDialog(parent) {
    QLabel *label_1 = new QLabel(name, this);
    lineEdit = new QLineEdit(this);
    QPushButton *okButton = new QPushButton("OK", this);
    QPushButton *cancelButton = new QPushButton("Cancel", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label_1);
    layout->addWidget(lineEdit);
    layout->addWidget(okButton);
    layout->addWidget(cancelButton);

    QObject::connect(okButton, &QPushButton::clicked, [&]() {
        QString parameter = lineEdit->text();
        if (parameter.toInt()<=rowM || parameter.toInt() <= colM) {
            accept();
        } else {
            QMessageBox::warning(this, "Ошибка", "Некорректный ввод. Пожалуйста, введите другое число.");
        }
    });
    connect(cancelButton, &QPushButton::clicked, this, &ParameterDialog::reject);
}

QString ParameterDialog::getParameter() const {
    return lineEdit->text();
}
