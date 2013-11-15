#include "inspectorwindow.h"
#include "ui_inspectorwindow.h"

InspectorWindow::InspectorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InspectorWindow)
{
    ui->setupUi(this);
}

InspectorWindow::~InspectorWindow()
{
    delete ui;
}
