#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inspectorwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionInspect_triggered()
{
    InspectorWindow *wnd = new InspectorWindow();
    wnd->show();
}
