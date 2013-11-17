#include "templatemanager.h"
#include "ui_templatemanager.h"
#include <QMessageBox>

TemplateManager::TemplateManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TemplateManager)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem("ffmpeg", ui->listWidget);
    item->setSelected(true);
    ui->comboBox->addItem("Slider");
    ui->comboBox->addItem("Spinner");
    ui->comboBox->setCurrentIndex(0);

    ui->comboBox_2->addItem("Slider");
    ui->comboBox_2->addItem("Spinner");
    ui->comboBox_2->setCurrentIndex(1);

    format = ui->plainTextEdit->toPlainText();
}

TemplateManager::~TemplateManager()
{
    delete ui;
}

void TemplateManager::on_pushButton_3_clicked()
{
    if(format.compare(ui->plainTextEdit->toPlainText()) != 0)
    {
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Nicht gespeicherte Änderungen", "Es existieren nicht gespeicherte Änderungen. "
                              "Diese gehen beim Schließen des Fensters verloren. Wollen sie das Fenster wirklich schließen?");
        if(reply == QMessageBox::Yes)
        {
            close();
        }
    } else {
        close();
    }
}

void TemplateManager::on_plainTextEdit_textChanged()
{
    ui->saveButton->setEnabled(true);
    ui->resetButton->setEnabled(true);
}

void TemplateManager::on_saveButton_clicked()
{
    format = ui->plainTextEdit->toPlainText();
    ui->saveButton->setEnabled(false);
    ui->resetButton->setEnabled(false);
}

void TemplateManager::on_resetButton_clicked()
{
    ui->plainTextEdit->setPlainText(format);
    ui->saveButton->setEnabled(false);
    ui->resetButton->setEnabled(false);
}
