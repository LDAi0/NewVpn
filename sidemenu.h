#ifndef SIDEMENU_H
#define SIDEMENU_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class sidemenu;
}

class sidemenu : public QWidget
{
    Q_OBJECT

public:
    explicit sidemenu(QWidget *parent = nullptr);
    ~sidemenu();
public slots:
    void slideIn();
    void slideOut();

private:
    Ui::sidemenu *ui;

    bool isVisible = false;
    QPropertyAnimation *animation;
};

#endif // SIDEMENU_H
