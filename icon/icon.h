#ifndef ICON_H
#define ICON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Icon; }
QT_END_NAMESPACE

class Icon : public QMainWindow
{
    Q_OBJECT

public:
    Icon(QWidget *parent = nullptr);
    ~Icon();

private:
    Ui::Icon *ui;
};
#endif // ICON_H
