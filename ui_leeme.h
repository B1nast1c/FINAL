/********************************************************************************
** Form generated from reading UI file 'leeme.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEEME_H
#define UI_LEEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Leeme
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Leeme)
    {
        if (Leeme->objectName().isEmpty())
            Leeme->setObjectName(QString::fromUtf8("Leeme"));
        Leeme->resize(400, 300);
        label = new QLabel(Leeme);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 241, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Fixedsys")});
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(Leeme);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 341, 171));

        retranslateUi(Leeme);

        QMetaObject::connectSlotsByName(Leeme);
    } // setupUi

    void retranslateUi(QDialog *Leeme)
    {
        Leeme->setWindowTitle(QCoreApplication::translate("Leeme", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Leeme", "Instrucciones del programa", nullptr));
        label_2->setText(QCoreApplication::translate("Leeme", "Programa basado en el problema: Productor-Consumidor.\n"
"El problema se basa en la siguiente premisa: Existe una cantidad\n"
"n de productores y una cantidad m de consumidores, los\n"
"productores producen elementos pertenecientes a la letra del\n"
"abecedario. Cada producci\303\263n se inserta en algo llamado \"Buffer\"\n"
"y un consumidor extrae lo que est\303\241 dentro del \"Buffer\"\n"
"cada productor tiene 3 \"estados\". Activo, Stop y Fuera, lo mismo\n"
"aplica a los cosumidores. Al producir o consumir la cantidad\n"
"de productos va a variar por bloque productor/consumidor.\n"
"Para los productores y consumidores existe un porcentaje de\n"
"estr\303\251s.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Leeme: public Ui_Leeme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEEME_H
