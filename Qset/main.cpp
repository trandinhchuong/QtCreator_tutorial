#include <QSet>
#include <QList>
#include <QTextStream>
#include <algorithm>

int main(void) {

    QTextStream out(stdout);

    QSet<QString> cols1 = {"yellow", "red", "blue"};
    QSet<QString> cols2 = {"blue", "pink", "orange"};

    out << "do dai cols1: " << cols1.size()  << endl;

    cols1.insert("brown");  //chen them phan tu;

    out << "There are " << cols1.size() << " values in the set" << endl;

    cols1.unite(cols2);  // nhap cols2 vao cols1

    out << "There are " << cols1.size() << " values in the set" << endl;

    for (QString val : cols1) {
        out << val << endl;
    }


    out << "*********************" << endl;
    out << "Sorted:" << endl;


    return 0;
}
