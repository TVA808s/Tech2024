#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("C:\\Users\\slavi\\Downloads\\maxresdefault.jpg");
    QRegion exposed;
    pixmap.scroll(10, 10, pixmap.rect(), &exposed);
    int h = ui->meme->height();
    int w = ui->meme->width();
    ui->meme->setPixmap(pixmap.scaled(w,h, Qt::KeepAspectRatio));

    this->setWindowTitle("Таска от Tasks");
    this->setWindowIcon(QIcon("C:\\Users\\slavi\\Downloads\\863973_1.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_clicked()
{
    this->close();
}
