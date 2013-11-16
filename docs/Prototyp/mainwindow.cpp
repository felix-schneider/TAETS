#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inspectorwindow.h"

static QString def_string = "ffmpeg -i input.avi -b:v 64k -bufsize 64k output.avi";

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

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    ui->groupBox->setEnabled(false);
    ui->pushButton->setEnabled(true);
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText(def_string);
    ui->groupBox->setEnabled(true);
    ui->pushButton->setEnabled(false);
}
