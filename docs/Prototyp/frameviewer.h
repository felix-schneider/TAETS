#ifndef FRAMEVIEWER_H
#define FRAMEVIEWER_H

#include <QWidget>

namespace Ui {
class FrameViewer;
}

class FrameViewer : public QWidget
{
    Q_OBJECT

public:
    explicit FrameViewer(QWidget *parent = 0);
    ~FrameViewer();

private:
    Ui::FrameViewer *ui;
};

#endif // FRAMEVIEWER_H
