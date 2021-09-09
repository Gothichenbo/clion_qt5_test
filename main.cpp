#include <QApplication>
//#include "mainwindow.h"
#include "test1.h"

int main(int argc, char *argv[]){
    QApplication a(argc,argv);

//    MainWindow w;
//    w.show();
//jj

    test1 w;
    w.show();
    return  a.exec();
}