/********************************************************************************
** Form generated from reading UI file 'mycalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCALCULATOR_H
#define UI_MYCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCalculator
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QPushButton *Zero;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *Four;
    QPushButton *Five;
    QPushButton *Six;
    QPushButton *Seven;
    QPushButton *Eight;
    QPushButton *Nine;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *multiply;
    QPushButton *share;
    QPushButton *answer;
    QLineEdit *lineEdit;
    QLineEdit *lineEditMini;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MyCalculator)
    {
        if (MyCalculator->objectName().isEmpty())
            MyCalculator->setObjectName(QStringLiteral("MyCalculator"));
        MyCalculator->resize(248, 352);
        MyCalculator->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        MyCalculator->setWindowIcon(icon);
        MyCalculator->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        actionExit = new QAction(MyCalculator);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MyCalculator);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MyCalculator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Zero = new QPushButton(centralwidget);
        Zero->setObjectName(QStringLiteral("Zero"));
        Zero->setGeometry(QRect(10, 80, 51, 51));
        One = new QPushButton(centralwidget);
        One->setObjectName(QStringLiteral("One"));
        One->setGeometry(QRect(70, 80, 51, 51));
        Two = new QPushButton(centralwidget);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setGeometry(QRect(130, 80, 51, 51));
        Three = new QPushButton(centralwidget);
        Three->setObjectName(QStringLiteral("Three"));
        Three->setGeometry(QRect(10, 140, 51, 51));
        Four = new QPushButton(centralwidget);
        Four->setObjectName(QStringLiteral("Four"));
        Four->setGeometry(QRect(70, 140, 51, 51));
        Five = new QPushButton(centralwidget);
        Five->setObjectName(QStringLiteral("Five"));
        Five->setGeometry(QRect(130, 140, 51, 51));
        Six = new QPushButton(centralwidget);
        Six->setObjectName(QStringLiteral("Six"));
        Six->setGeometry(QRect(10, 200, 51, 51));
        Seven = new QPushButton(centralwidget);
        Seven->setObjectName(QStringLiteral("Seven"));
        Seven->setGeometry(QRect(70, 200, 51, 51));
        Eight = new QPushButton(centralwidget);
        Eight->setObjectName(QStringLiteral("Eight"));
        Eight->setGeometry(QRect(130, 200, 51, 51));
        Nine = new QPushButton(centralwidget);
        Nine->setObjectName(QStringLiteral("Nine"));
        Nine->setGeometry(QRect(70, 260, 51, 51));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(190, 80, 51, 51));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(190, 140, 51, 51));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName(QStringLiteral("multiply"));
        multiply->setGeometry(QRect(190, 200, 51, 51));
        share = new QPushButton(centralwidget);
        share->setObjectName(QStringLiteral("share"));
        share->setGeometry(QRect(190, 260, 51, 51));
        answer = new QPushButton(centralwidget);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(10, 260, 51, 51));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 231, 41));
        lineEditMini = new QLineEdit(centralwidget);
        lineEditMini->setObjectName(QStringLiteral("lineEditMini"));
        lineEditMini->setGeometry(QRect(10, 10, 131, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 16, 16));
        MyCalculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyCalculator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 248, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        MyCalculator->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionAbout);
        menu->addAction(actionExit);

        retranslateUi(MyCalculator);
        QObject::connect(actionExit, SIGNAL(triggered()), MyCalculator, SLOT(close()));

        QMetaObject::connectSlotsByName(MyCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *MyCalculator)
    {
        MyCalculator->setWindowTitle(QApplication::translate("MyCalculator", "MyCalculator", 0));
        actionExit->setText(QApplication::translate("MyCalculator", "Exit", 0));
        actionAbout->setText(QApplication::translate("MyCalculator", "About", 0));
        Zero->setText(QApplication::translate("MyCalculator", "0", 0));
        One->setText(QApplication::translate("MyCalculator", "1", 0));
        Two->setText(QApplication::translate("MyCalculator", "2", 0));
        Three->setText(QApplication::translate("MyCalculator", "3", 0));
        Four->setText(QApplication::translate("MyCalculator", "4", 0));
        Five->setText(QApplication::translate("MyCalculator", "5", 0));
        Six->setText(QApplication::translate("MyCalculator", "6", 0));
        Seven->setText(QApplication::translate("MyCalculator", "7", 0));
        Eight->setText(QApplication::translate("MyCalculator", "8", 0));
        Nine->setText(QApplication::translate("MyCalculator", "9", 0));
        plus->setText(QApplication::translate("MyCalculator", "+", 0));
        minus->setText(QApplication::translate("MyCalculator", "-", 0));
        multiply->setText(QApplication::translate("MyCalculator", "*", 0));
        share->setText(QApplication::translate("MyCalculator", "/", 0));
        answer->setText(QApplication::translate("MyCalculator", "=", 0));
        label->setText(QApplication::translate("MyCalculator", "?", 0));
        menu->setTitle(QApplication::translate("MyCalculator", "Pogramm", 0));
    } // retranslateUi

};

namespace Ui {
    class MyCalculator: public Ui_MyCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCALCULATOR_H
