#ifndef VALUETABLEVIEW_H
#define VALUETABLEVIEW_H

#include <QWidget>

namespace Ui {
class ValueTableViewer;
}

class ValueTableViewer : public QWidget
{
    Q_OBJECT

public:
    explicit ValueTableViewer(QWidget *parent = 0);
    ~ValueTableViewer();

private:
    Ui::ValueTableViewer *ui;
};

#endif // VALUETABLEVIEW_H
