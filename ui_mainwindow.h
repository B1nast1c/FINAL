/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *leeme;
    QPushButton *config;
    QPushButton *info;
    QFrame *line;
    QLabel *label;
    QLabel *productores;
    QLabel *consumidores;
    QLabel *label_4;
    QProgressBar *buffer;
    QToolButton *stopprod;
    QToolButton *killprod;
    QToolButton *starprod;
    QToolButton *killcon;
    QToolButton *stopcon;
    QToolButton *startcon;
    QLabel *label_2;
    QLabel *producido;
    QLabel *consumido;
    QLabel *estresp;
    QLabel *estresc;
    QScrollArea *outputprod;
    QWidget *salidac;
    QScrollArea *outputcon;
    QWidget *salidap;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(734, 354);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        leeme = new QPushButton(centralwidget);
        leeme->setObjectName(QString::fromUtf8("leeme"));
        leeme->setGeometry(QRect(20, 20, 80, 31));
        config = new QPushButton(centralwidget);
        config->setObjectName(QString::fromUtf8("config"));
        config->setGeometry(QRect(20, 70, 91, 31));
        info = new QPushButton(centralwidget);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(20, 120, 80, 31));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(130, 0, 20, 421));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 310, 311, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Fixedsys")});
        font.setBold(false);
        label->setFont(font);
        productores = new QLabel(centralwidget);
        productores->setObjectName(QString::fromUtf8("productores"));
        productores->setGeometry(QRect(190, 20, 121, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(10);
        font1.setBold(false);
        productores->setFont(font1);
        productores->setAlignment(Qt::AlignCenter);
        consumidores = new QLabel(centralwidget);
        consumidores->setObjectName(QString::fromUtf8("consumidores"));
        consumidores->setGeometry(QRect(550, 20, 121, 21));
        consumidores->setFont(font1);
        consumidores->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 20, 61, 21));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        buffer = new QProgressBar(centralwidget);
        buffer->setObjectName(QString::fromUtf8("buffer"));
        buffer->setGeometry(QRect(390, 60, 118, 23));
        buffer->setValue(24);
        buffer->setInvertedAppearance(false);
        stopprod = new QToolButton(centralwidget);
        stopprod->setObjectName(QString::fromUtf8("stopprod"));
        stopprod->setGeometry(QRect(150, 130, 21, 20));
        killprod = new QToolButton(centralwidget);
        killprod->setObjectName(QString::fromUtf8("killprod"));
        killprod->setGeometry(QRect(150, 160, 21, 20));
        starprod = new QToolButton(centralwidget);
        starprod->setObjectName(QString::fromUtf8("starprod"));
        starprod->setGeometry(QRect(150, 100, 21, 20));
        killcon = new QToolButton(centralwidget);
        killcon->setObjectName(QString::fromUtf8("killcon"));
        killcon->setGeometry(QRect(700, 160, 21, 20));
        stopcon = new QToolButton(centralwidget);
        stopcon->setObjectName(QString::fromUtf8("stopcon"));
        stopcon->setGeometry(QRect(700, 130, 21, 20));
        startcon = new QToolButton(centralwidget);
        startcon->setObjectName(QString::fromUtf8("startcon"));
        startcon->setGeometry(QRect(700, 100, 21, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 240, 101, 61));
        producido = new QLabel(centralwidget);
        producido->setObjectName(QString::fromUtf8("producido"));
        producido->setGeometry(QRect(170, 60, 31, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        producido->setFont(font2);
        consumido = new QLabel(centralwidget);
        consumido->setObjectName(QString::fromUtf8("consumido"));
        consumido->setGeometry(QRect(530, 60, 31, 20));
        consumido->setFont(font2);
        estresp = new QLabel(centralwidget);
        estresp->setObjectName(QString::fromUtf8("estresp"));
        estresp->setGeometry(QRect(260, 60, 61, 20));
        estresp->setFont(font2);
        estresc = new QLabel(centralwidget);
        estresc->setObjectName(QString::fromUtf8("estresc"));
        estresc->setGeometry(QRect(620, 60, 61, 20));
        estresc->setFont(font2);
        outputprod = new QScrollArea(centralwidget);
        outputprod->setObjectName(QString::fromUtf8("outputprod"));
        outputprod->setGeometry(QRect(190, 100, 161, 201));
        outputprod->setWidgetResizable(true);
        salidac = new QWidget();
        salidac->setObjectName(QString::fromUtf8("salidac"));
        salidac->setGeometry(QRect(0, 0, 159, 199));
        outputprod->setWidget(salidac);
        outputcon = new QScrollArea(centralwidget);
        outputcon->setObjectName(QString::fromUtf8("outputcon"));
        outputcon->setGeometry(QRect(520, 100, 161, 201));
        outputcon->setWidgetResizable(true);
        salidap = new QWidget();
        salidap->setObjectName(QString::fromUtf8("salidap"));
        salidap->setGeometry(QRect(0, 0, 159, 199));
        outputcon->setWidget(salidap);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        leeme->setText(QCoreApplication::translate("MainWindow", "Leeme", nullptr));
        config->setText(QCoreApplication::translate("MainWindow", "Configuraci\303\263n", nullptr));
        info->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Elaborado por: Valeria Goyzueta Torres", nullptr));
        productores->setText(QString());
        consumidores->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "BUFFER", nullptr));
        buffer->setFormat(QString());
        stopprod->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        killprod->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        starprod->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        killcon->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        stopcon->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        startcon->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "LEYENDA:\n"
"Verde: Empezar\n"
"Amarillo: Detener\n"
"Rojo: Matar", nullptr));
        producido->setText(QCoreApplication::translate("MainWindow", "P: ", nullptr));
        consumido->setText(QCoreApplication::translate("MainWindow", "C:", nullptr));
        estresp->setText(QCoreApplication::translate("MainWindow", "STRESS: ", nullptr));
        estresc->setText(QCoreApplication::translate("MainWindow", "STRESS: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
