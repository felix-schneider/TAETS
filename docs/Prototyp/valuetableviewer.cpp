#include "valuetableviewer.h"
#include "ui_valuetableviewer.h"

ValueTableViewer::ValueTableViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ValueTableViewer)
{
    ui->setupUi(this);
}

ValueTableViewer::~ValueTableViewer()
{
    delete ui;
}
