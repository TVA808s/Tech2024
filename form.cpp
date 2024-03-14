#include "form.h"
#include "ui_form.h"
#include <QPixmap>
#include <QWindow>
#include <QMessageBox>

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{

    ui->setupUi(this);
    ui->label_e->setVisible(false);
    ui->email->setVisible(false);
    ui->reg->setVisible(false);

    QPixmap pixmap("C:\\Users\\slavi\\Downloads\\наПрофиль.jpg");
    QRegion exposed;
    pixmap.scroll(10, 10, pixmap.rect(), &exposed);
    int h = ui->papich->height();
    int w = ui->papich->width();
    ui->papich->setPixmap(pixmap.scaled(w,h, Qt::KeepAspectRatio));
    this->setWindowTitle("Prog2024");
    this->setWindowIcon(QIcon("C:\\Users\\slavi\\Downloads\\863973_1.jpg"));

}

Form::~Form()
{
    delete ui;
}

void Form::on_auth_clicked()
{

    emit is_auth(ui->login->text(), ui->pass->text());
}


void Form::on_change_clicked()
{
    bool flag = ui->label_e->isVisible();
    ui->email->setText("");
    ui->pass->setText("");
    ui->login->setText("");
    if(!flag) ui->change->setText("Back");
    else ui->change->setText("Create an account");
    ui->label_e->setVisible(!flag);
    ui->email->setVisible(!flag);
    ui->reg->setVisible(!flag);
    ui->auth->setVisible(flag);

}


void Form::on_reg_clicked()
{
    //условия регистрации
    QMessageBox::information(this,"Succesful registration","You've been registrated");
    on_change_clicked();
}

