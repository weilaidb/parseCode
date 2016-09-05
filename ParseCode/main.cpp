#include <QtGui/QApplication>
#include <QTextCodec>

#include "mainwindow.h"

void SetLocalCodec()
{
//    QTextCodec *tc=QTextCodec::codecForName("utf8");
    QTextCodec *tc=QTextCodec::codecForName("GBK");
    QTextCodec::setCodecForCStrings(tc);
    QTextCodec::setCodecForLocale(tc);
    QTextCodec::setCodecForTr(tc);
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SetLocalCodec();

    MainWindow w;
    w.show();
    
    return a.exec();
}
