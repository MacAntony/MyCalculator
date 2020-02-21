#ifndef MYCALCULATOR_H
#define MYCALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MyCalculator; }
QT_END_NAMESPACE

class MyCalculator : public QMainWindow
{
    Q_OBJECT

public:
    MyCalculator(QWidget *parent = nullptr);
    ~MyCalculator();

private slots:
    void on_Zero_clicked();

    void on_One_clicked();

    void on_Two_clicked();

    void on_Three_clicked();

    void on_Four_clicked();

    void on_Five_clicked();

    void on_Six_clicked();

    void on_Seven_clicked();

    void on_Eight_clicked();

    void on_Nine_clicked();

    void on_dot_clicked();

    void on_answer_clicked();

    void on_share_clicked();

    void on_multiply_clicked();

    void on_minus_clicked();

    void on_plus_clicked();

    void on_actionAbout_triggered();

private:
    Ui::MyCalculator *ui;
};
#endif // MYCALCULATOR_H
