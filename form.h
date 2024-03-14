#ifndef FORM_H
#define FORM_H

#include <QWidget>
//#include "functions_4_client.h"
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

signals:
    void is_auth(QString,QString);

private slots:
    void on_auth_clicked();

    void on_change_clicked();

    void on_reg_clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H
