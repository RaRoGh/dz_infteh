#ifndef PARAMETERDIALOG_H
#define PARAMETERDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class ParameterDialog : public QDialog {
    Q_OBJECT

public:
    explicit ParameterDialog(QString name, int rowM, int colM,QWidget *parent = nullptr);

    QString getParameter() const;

private:
    QLineEdit *lineEdit;
};

#endif // PARAMETERDIALOG_H
