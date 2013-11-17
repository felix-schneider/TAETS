#ifndef TEMPLATEMANAGER_H
#define TEMPLATEMANAGER_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class TemplateManager;
}

class TemplateManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit TemplateManager(QWidget *parent = 0);
    ~TemplateManager();

private slots:
    void on_pushButton_3_clicked();

    void on_plainTextEdit_textChanged();

    void on_saveButton_clicked();

    void on_resetButton_clicked();

private:
    Ui::TemplateManager *ui;
    QString format;
};

#endif // TEMPLATEMANAGER_H
