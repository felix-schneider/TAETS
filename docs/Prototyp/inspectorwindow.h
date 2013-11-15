#ifndef INSPECTORWINDOW_H
#define INSPECTORWINDOW_H

#include <QMainWindow>

namespace Ui {
class InspectorWindow;
}

class InspectorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InspectorWindow(QWidget *parent = 0);
    ~InspectorWindow();

private:
    Ui::InspectorWindow *ui;
};

#endif // INSPECTORWINDOW_H
