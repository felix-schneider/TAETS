#include "inspectorwindow.h"
#include "ui_inspectorwindow.h"
#include "frameviewer.h"
#include "histogramviewer.h"
#include "diagramviewer.h"
#include "videocontrolsviewer.h"
#include "valuetableviewer.h"

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

void InspectorWindow::on_actionNewFrameViewer_triggered()
{
    FrameViewer *frameViewer = new FrameViewer();
    ui->mdiArea->addSubWindow(frameViewer);
    frameViewer->show();
}

void InspectorWindow::on_actionNewHistogramViewer_triggered()
{
    HistogramViewer *histogramViewer = new HistogramViewer();
    ui->mdiArea->addSubWindow(histogramViewer);
    histogramViewer->show();
}

void InspectorWindow::on_actionNewDiagramViewer_triggered()
{
    DiagramViewer *diagramViewer = new DiagramViewer();
    ui->mdiArea->addSubWindow(diagramViewer);
    diagramViewer->show();
}

void InspectorWindow::on_actionNewVideoControlsViewer_triggered()
{
    VideoControlsViewer *videoControlsViewer = new VideoControlsViewer();
    ui->mdiArea->addSubWindow(videoControlsViewer);
    videoControlsViewer->show();
}

void InspectorWindow::on_actionNewValueTableViewer_triggered()
{
    ValueTableViewer *valueTableViewer = new ValueTableViewer();
    ui->mdiArea->addSubWindow(valueTableViewer);
    valueTableViewer->show();
}
