/********************************************************************************
** Form generated from reading UI file 'configuracion.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_H
#define UI_CONFIGURACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Configuracion
{
public:
    QLabel *label;
    QSpinBox *cantprod;
    QSpinBox *cantcon;
    QLabel *label_2;
    QPushButton *Cambiar;
    QPushButton *Cancelar;

    void setupUi(QDialog *Configuracion)
    {
        if (Configuracion->objectName().isEmpty())
            Configuracion->setObjectName(QString::fromUtf8("Configuracion"));
        Configuracion->resize(400, 92);
        label = new QLabel(Configuracion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 91, 20));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        label->setFont(font);
        cantprod = new QSpinBox(Configuracion);
        cantprod->setObjectName(QString::fromUtf8("cantprod"));
        cantprod->setGeometry(QRect(170, 20, 42, 22));
        cantprod->setMinimum(1);
        cantprod->setMaximum(25);
        cantcon = new QSpinBox(Configuracion);
        cantcon->setObjectName(QString::fromUtf8("cantcon"));
        cantcon->setGeometry(QRect(170, 60, 42, 22));
        cantcon->setMinimum(1);
        cantcon->setMaximum(25);
        label_2 = new QLabel(Configuracion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 101, 20));
        label_2->setFont(font);
        Cambiar = new QPushButton(Configuracion);
        Cambiar->setObjectName(QString::fromUtf8("Cambiar"));
        Cambiar->setGeometry(QRect(280, 20, 80, 21));
        Cancelar = new QPushButton(Configuracion);
        Cancelar->setObjectName(QString::fromUtf8("Cancelar"));
        Cancelar->setGeometry(QRect(280, 50, 80, 21));

        retranslateUi(Configuracion);
        QObject::connect(cantprod, &QSpinBox::valueChanged, Cambiar, qOverload<>(&QPushButton::click));
        QObject::connect(cantcon, &QSpinBox::valueChanged, Cambiar, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(Configuracion);
    } // setupUi

    void retranslateUi(QDialog *Configuracion)
    {
        Configuracion->setWindowTitle(QCoreApplication::translate("Configuracion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Configuracion", "PRODUCTORES", nullptr));
        label_2->setText(QCoreApplication::translate("Configuracion", "CONSUMIDORES", nullptr));
        Cambiar->setText(QCoreApplication::translate("Configuracion", "Confirmar", nullptr));
        Cancelar->setText(QCoreApplication::translate("Configuracion", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Configuracion: public Ui_Configuracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_H
