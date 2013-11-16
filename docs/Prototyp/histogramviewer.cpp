#include "histogramviewer.h"
#include "ui_histogramviewer.h"

HistogramViewer::HistogramViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistogramViewer)
{
    ui->setupUi(this);
}

HistogramViewer::~HistogramViewer()
{
    delete ui;
}
