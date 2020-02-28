#include <QTextStream>

int main()
{
    QTextStream out(stdout);

    QString a = "chuong";

    a.append(" tran");  //noi chuoi truoc
    a.prepend("Hello ");//noi chuoi sau

    out << a << endl;
    out << "Chuoi a co " << a.count() << " ky tu"<< endl;

    out << a.toUpper() << endl; //in HOA
    out << a.toLower() << endl; //in thuong

    return 0;
}
