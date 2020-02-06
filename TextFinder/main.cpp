/*
 * https://sites.google.com/site/embedded247/escourse/viet-ung-dung-qt---quan-ly-layout?tmpl=%2Fsystem%2Fapp%2Ftemplates%2Fprint%2F&showPrintDialog=1
 *
 */

#include "textfinder.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextFinder w;
    w.show();


    return a.exec();
}
