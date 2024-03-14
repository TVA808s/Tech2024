#include "functions_4_client.h"

Functions_4_client::Functions_4_client() {
    ui_auth = new Form;
    ui_auth->show();

    connect(ui_auth,&Form::is_auth,this, &Functions_4_client::is_auth);

}

void Functions_4_client::is_auth(QString log, QString pass){
    if(log == "user" && pass == "123"){
        delete ui_auth;
        ui_main = new MainWindow;
        ui_main->show();
    }
    else{
        QMessageBox::warning(ui_auth,"Login error","Username or password is not correct");
    }
}
//создать бъект мсгбокс для успешной регестрации и неуспешного логина.
