#ifndef TARIFSFORM_H
#define TARIFSFORM_H

#include <QWidget>

namespace Ui {
class tarifsForm;
}

class tarifsForm : public QWidget
{
    Q_OBJECT

public:
    explicit tarifsForm(QWidget *parent = nullptr);
    ~tarifsForm();

private:
    Ui::tarifsForm *ui;
};

#endif // TARIFSFORM_H
