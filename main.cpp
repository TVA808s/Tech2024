#include "singletonclient.h"
#include <QCoreApplication>
#include <iostream>
#include <QString>

int main(int argc, char *argv[]){
    QCoreApplication a (argc, argv);
    SingletonClient::getInstance();
    std::string msg;
    std::cin>>msg;
    while (msg!="stop")
    {
        SingletonClient::getInstance()->send_msg_to_server(QString::fromStdString(msg));
        std::cin>>msg;
    }
    return a.exec();
}
