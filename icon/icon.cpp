#include "icon.h"
#include "ui_icon.h"

Icon::Icon(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Icon)
{
    ui->setupUi(this);
}

Icon::~Icon()
{
    delete ui;
}

