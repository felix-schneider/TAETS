#include "diagramviewer.h"
#include "ui_diagramviewer.h"

DiagramViewer::DiagramViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DiagramViewer)
{
    ui->setupUi(this);
}

DiagramViewer::~DiagramViewer()
{
    delete ui;
}
