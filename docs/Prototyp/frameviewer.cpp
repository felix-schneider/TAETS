#include "frameviewer.h"
#include "ui_frameviewer.h"

FrameViewer::FrameViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrameViewer)
{
    ui->setupUi(this);
}

FrameViewer::~FrameViewer()
{
    delete ui;
}
