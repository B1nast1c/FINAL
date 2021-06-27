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
    QLabel *labelbuffer;
    QProgressBar *buffer;
    QToolButton *starprod;
    QToolButton *startcon;
    QLabel *label_2;
    QLabel *producido;
    QLabel *consumido;
    QScrollArea *outputprod;
    QWidget *salidac;
    QScrollArea *outputprod_2;
    QWidget *salidac_2;
    QPushButton *pushButton;
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
        labelbuffer = new QLabel(centralwidget);
        labelbuffer->setObjectName(QString::fromUtf8("labelbuffer"));
        labelbuffer->setGeometry(QRect(390, 20, 81, 21));
        labelbuffer->setFont(font1);
        labelbuffer->setAlignment(Qt::AlignCenter);
        buffer = new QProgressBar(centralwidget);
        buffer->setObjectName(QString::fromUtf8("buffer"));
        buffer->setGeometry(QRect(390, 60, 118, 23));
        buffer->setValue(24);
        buffer->setInvertedAppearance(false);
        starprod = new QToolButton(centralwidget);
        starprod->setObjectName(QString::fromUtf8("starprod"));
        starprod->setGeometry(QRect(150, 180, 21, 20));
        startcon = new QToolButton(centralwidget);
        startcon->setObjectName(QString::fromUtf8("startcon"));
        startcon->setGeometry(QRect(700, 180, 21, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 240, 101, 61));
        producido = new QLabel(centralwidget);
        producido->setObjectName(QString::fromUtf8("producido"));
        producido->setGeometry(QRect(250, 60, 51, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        producido->setFont(font2);
        consumido = new QLabel(centralwidget);
        consumido->setObjectName(QString::fromUtf8("consumido"));
        consumido->setGeometry(QRect(590, 60, 51, 20));
        consumido->setFont(font2);
        outputprod = new QScrollArea(centralwidget);
        outputprod->setObjectName(QString::fromUtf8("outputprod"));
        outputprod->setGeometry(QRect(190, 100, 151, 201));
        outputprod->setWidgetResizable(true);
        salidac = new QWidget();
        salidac->setObjectName(QString::fromUtf8("salidac"));
        salidac->setGeometry(QRect(0, 0, 149, 199));
        outputprod->setWidget(salidac);
        outputprod_2 = new QScrollArea(centralwidget);
        outputprod_2->setObjectName(QString::fromUtf8("outputprod_2"));
        outputprod_2->setGeometry(QRect(530, 100, 151, 201));
        outputprod_2->setWidgetResizable(true);
        salidac_2 = new QWidget();
        salidac_2->setObjectName(QString::fromUtf8("salidac_2"));
        salidac_2->setGeometry(QRect(0, 0, 149, 199));
        outputprod_2->setWidget(salidac_2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 200, 80, 21));
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
        labelbuffer->setText(QCoreApplication::translate("MainWindow", "BUFFER", nullptr));
        buffer->setFormat(QString());
        starprod->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        startcon->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "LEYENDA:\n"
"C: Continuar\n"
"P: Detener\n"
"K: Matar", nullptr));
        producido->setText(QCoreApplication::translate("MainWindow", "P: ", nullptr));
        consumido->setText(QCoreApplication::translate("MainWindow", "C:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
