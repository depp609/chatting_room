#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QMainWindow>
#include <QLabel>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostInfo>
#include <QList>
#include <string>
#include <iostream>
#include "server.h"
using namespace std;

class Controller
{
private:

public:
    QByteArray opMsg(QByteArray, string&, string&, string&, int&);
};

#endif // CONTROLLER_H
