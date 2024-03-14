#ifndef FUNCTIONS_4_CLIENT_H
#define FUNCTIONS_4_CLIENT_H
#include <QMessageBox>
#include <QObject>
#include "mainwindow.h"
#include "form.h"
class Functions_4_client: public QObject
{
public:

    Functions_4_client();

signals:
    void on_auth_ok();

private:
    MainWindow * ui_main;
    Form * ui_auth;
public slots:
    void is_auth(QString,QString);
};

#endif // FUNCTIONS_4_CLIENT_H
