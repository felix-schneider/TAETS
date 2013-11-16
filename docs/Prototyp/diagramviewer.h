#ifndef DIAGRAMVIEWER_H
#define DIAGRAMVIEWER_H

#include <QWidget>

namespace Ui {
class DiagramViewer;
}

class DiagramViewer : public QWidget
{
    Q_OBJECT

public:
    explicit DiagramViewer(QWidget *parent = 0);
    ~DiagramViewer();

private:
    Ui::DiagramViewer *ui;
};

#endif // DIAGRAMVIEWER_H
