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

private slots:
    void on_actionNewFrameViewer_triggered();

    void on_actionNewHistogramViewer_triggered();

    void on_actionNewDiagramViewer_triggered();

    void on_actionNewVideoControlsViewer_triggered();

    void on_actionNewValueTableViewer_triggered();

private:
    Ui::InspectorWindow *ui;
};

#endif // INSPECTORWINDOW_H
