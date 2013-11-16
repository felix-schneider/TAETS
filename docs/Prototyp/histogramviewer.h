#ifndef HISTOGRAMVIEWER_H
#define HISTOGRAMVIEWER_H

#include <QWidget>

namespace Ui {
class HistogramViewer;
}

class HistogramViewer : public QWidget
{
    Q_OBJECT

public:
    explicit HistogramViewer(QWidget *parent = 0);
    ~HistogramViewer();

private:
    Ui::HistogramViewer *ui;
};

#endif // HISTOGRAMVIEWER_H
