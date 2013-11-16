#ifndef VIDEOCONTROLS_H
#define VIDEOCONTROLS_H

#include <QWidget>

namespace Ui {
class VideoControlsViewer;
}

class VideoControlsViewer : public QWidget
{
    Q_OBJECT

public:
    explicit VideoControlsViewer(QWidget *parent = 0);
    ~VideoControlsViewer();

private:
    Ui::VideoControlsViewer *ui;
};

#endif // VIDEOCONTROLS_H
