#include <QTextStream>
#include <QList>
#include <algorithm>

int main(void) {

    QTextStream out(stdout);

    QList<QString> authors = {"Balzac", "Tolstoy", "Gulbranssen", "London"};

    authors.at(1);
    out << "phan thu thu nhat\n "<< authors.at(1)<< endl;;
    authors << "Galsworthy" << "Sienkiewicz"; // them phan tu

    out << "***********************" << endl;

}
