#include "videocontrolsviewer.h"
#include "ui_videocontrolsviewer.h"

VideoControlsViewer::VideoControlsViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoControlsViewer)
{
    ui->setupUi(this);
}

VideoControlsViewer::~VideoControlsViewer()
{
    delete ui;
}
