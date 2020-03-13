#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    r = 0;
    g = 0;
    b = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_REDslider_valueChanged(int value)
{
    this->r = value;
    this->ChangeColor();
}

void MainWindow::on_GREENslider_valueChanged(int value)
{
    this->g = value;
    this->ChangeColor();
}

void MainWindow::on_blueSLIDER_valueChanged(int value)
{
    this->b = value;
    this->ChangeColor();
}

void MainWindow::ChangeColor()
{
    // changes color of textbox
    QColor *col = new QColor(this->r, this->g, this->b);
    QPalette qp = palette();
    qp.setColor(QPalette::Window, *col);

    QWidget *qw = this->ui->COLBOX;
    qw->setPalette(qp);
    qw->show();






}
