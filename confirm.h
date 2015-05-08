#ifndef CONFIRM_H
#define CONFIRM_H

#include <QDialog>
#include <QObject>

namespace Ui {
class confirm;
}

class confirm : public QDialog
{
    Q_OBJECT

public:
    explicit confirm(QWidget *parent = 0);
    ~confirm();

private slots:
    void on_check_clicked();

    void on_cancel_clicked();

private:
    Ui::confirm *ui;

signals:
    void sentMsg(const int msgs);
};

#endif // CONFIRM_H
