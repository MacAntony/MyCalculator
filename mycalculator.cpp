#include "mycalculator.h"
#include "ui_mycalculator.h"
#include "QMessageBox"
#include "secdialog.h"
#include "windows.h"

MyCalculator::MyCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyCalculator)
{
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);

    // Создаём палитру для тёмной темы оформления
    QPalette darkPalette;

    // Настраиваем палитру для цветовых ролей элементов интерфейса
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);

    // Устанавливаем данную палитру
    qApp->setPalette(darkPalette);
}

MyCalculator::~MyCalculator()
{
    delete ui;
}

void MyCalculator::on_actionAbout_triggered()
{
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}

static QString expression = "";
void MyCalculator::on_Zero_clicked()
{
    expression += "0";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_One_clicked()
{
    expression += "1";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Two_clicked()
{
    expression += "2";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Three_clicked()
{
    expression += "3";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Four_clicked()
{
    expression += "4";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Five_clicked()
{
    expression += "5";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Six_clicked()
{
    expression += "6";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Seven_clicked()
{
    expression += "7";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Eight_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_Nine_clicked()
{
    expression += "9";
    ui->lineEdit->setText(expression);
}

void MyCalculator::on_dot_clicked()
{
    expression += ".";
    ui->lineEdit->setText(expression);
}

static int num1 = 0;
static int num2 = 0;
static int out = 0;
static bool num = false;
static char operation = ' ';
void MyCalculator::on_answer_clicked()
{
    QMessageBox errorBox;
    if(num1 == 0 && num2 == 0){
       errorBox.setIcon(QMessageBox::Critical);
       errorBox.setText("You did not enter a number");
       errorBox.exec();
       num = false;
    }
    else
    {
        if(num == true){
            num2 = expression.toInt();;
        }
        switch(operation) {
        case '*':
            out = num1 * num2;
            break;
        case '/':
            out = num1 / num2;
          break;
        case '-':
            out = num1 - num2;
          break;
        case '+':
            out = num1 + num2;
          break;
        }
        expression = "";
        ui->lineEdit->setText(QString::number(out));
        ui->lineEditMini->clear();
        num1 = 0;
        num2 = 0;

        num = false;
        ui->label->setText("?");
    }
}

void MyCalculator::on_share_clicked()
{
    if(expression != ""){
        if(num == false){
            num1 = expression.toInt();
            num = true;
        }
        operation = '/';
    }
    expression = "";
    ui->lineEditMini->setText(QString::number(num1));
    ui->lineEdit->clear();

    ui->label->setText(QString::fromUtf8(&operation));
}

void MyCalculator::on_multiply_clicked()
{
    if(expression != ""){
        if(num == false){
            num1 = expression.toInt();
            num = true;
        }
        operation = '*';
    }
    expression = "";
    ui->lineEditMini->setText(QString::number(num1));
    ui->lineEdit->clear();

    ui->label->setText(QString::fromUtf8(&operation));
}

void MyCalculator::on_minus_clicked()
{
    if(expression != ""){
        if(num == false){
            num1 = expression.toInt();
            num = true;
        }
        operation = '-';
    }
    expression = "";
    ui->lineEditMini->setText(QString::number(num1));
    ui->lineEdit->clear();

    ui->label->setText(QString::fromUtf8(&operation));
}

void MyCalculator::on_plus_clicked()
{
    if(expression != ""){
        if(num == false){
            num1 = expression.toInt();
            num = true;
        }
        operation = '+';
    }
    expression = "";
    ui->lineEditMini->setText(QString::number(num1));
    ui->lineEdit->clear();

    ui->label->setText(QString::fromUtf8(&operation));
}

