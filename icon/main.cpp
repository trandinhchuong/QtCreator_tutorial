#include "icon.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Icon w;
    w.setWindowTitle("example");
    w.setWindowTitle("Icon");
    w.setWindowIcon(QIcon("truesmart.png"));
    w.show();
    return a.exec();
}
