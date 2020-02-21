#include "mycalculator.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qApp->setStyle(QStyleFactory::create("Fusion"));
    MyCalculator w;
    w.show();
    return a.exec();
}
