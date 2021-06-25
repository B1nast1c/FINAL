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

class Ui_leeme
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *leeme)
    {
        if (leeme->objectName().isEmpty())
            leeme->setObjectName(QString::fromUtf8("leeme"));
        leeme->resize(380, 272);
        label = new QLabel(leeme);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 261, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Fixedsys")});
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(leeme);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 341, 201));

        retranslateUi(leeme);

        QMetaObject::connectSlotsByName(leeme);
    } // setupUi

    void retranslateUi(QDialog *leeme)
    {
        leeme->setWindowTitle(QCoreApplication::translate("leeme", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("leeme", "Problema Productor-Consumidor", nullptr));
        label_2->setText(QCoreApplication::translate("leeme", "\"Programa basado en el problema: \"Productor-Consumidor\".\n"
"El problema se basa en la siguiente premisa: Existe una cantidad\n"
"\"n\" de productores y una cantidad \"m\" de consumidores, los\n"
"\"n\" productores producen elementos pertenecientes a las letras\n"
"del abecedario. Cada producci\303\263n se inserta en algo llamado\n"
"\"Buffer\" y un consumidor extrae lo que est\303\241 dentro del \"Buffer\".\n"
"Cada productor tiene 3 \"estados\". Activo, Stop y Fuera, lo mismo\n"
"aplica a los cosumidores. Al producir o consumir la cantidad de\n"
"productos va a variar por bloque productor/consumidor.\"\n"
"Existe una cantidad de estres que sale de la falta de producir\n"
"o consumir.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leeme: public Ui_leeme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEEME_H
