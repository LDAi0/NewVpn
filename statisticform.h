#ifndef STATISTICFORM_H
#define STATISTICFORM_H

#include <QWidget>

namespace Ui {
class statisticForm;
}

class statisticForm : public QWidget
{
    Q_OBJECT

public:
    explicit statisticForm(QWidget *parent = nullptr);
    ~statisticForm();

private:
    Ui::statisticForm *ui;
};

#endif // STATISTICFORM_H
