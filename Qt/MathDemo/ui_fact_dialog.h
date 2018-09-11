/********************************************************************************
** Form generated from reading UI file 'fact_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACT_DIALOG_H
#define UI_FACT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FactDialog
{
public:
    QPushButton *btnCalc;
    QPushButton *btnClose;
    QLabel *label_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLineEdit *resultLE;

    void setupUi(QDialog *FactDialog)
    {
        if (FactDialog->objectName().isEmpty())
            FactDialog->setObjectName(QStringLiteral("FactDialog"));
        FactDialog->resize(322, 320);
        btnCalc = new QPushButton(FactDialog);
        btnCalc->setObjectName(QStringLiteral("btnCalc"));
        btnCalc->setGeometry(QRect(100, 230, 97, 26));
        btnClose = new QPushButton(FactDialog);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(100, 260, 97, 26));
        label_2 = new QLabel(FactDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 140, 131, 17));
        layoutWidget = new QWidget(FactDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 161, 29));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        resultLE = new QLineEdit(FactDialog);
        resultLE->setObjectName(QStringLiteral("resultLE"));
        resultLE->setGeometry(QRect(22, 180, 271, 27));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        resultLE->setFont(font);
        resultLE->setMaxLength(1000000000);
        resultLE->setEchoMode(QLineEdit::Normal);
        resultLE->setReadOnly(true);

        retranslateUi(FactDialog);

        QMetaObject::connectSlotsByName(FactDialog);
    } // setupUi

    void retranslateUi(QDialog *FactDialog)
    {
        FactDialog->setWindowTitle(QApplication::translate("FactDialog", "\320\222\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\265 \321\204\320\260\320\272\321\202\320\276\321\200\320\270\320\260\320\273\320\260", Q_NULLPTR));
        btnCalc->setText(QApplication::translate("FactDialog", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214", Q_NULLPTR));
        btnClose->setText(QApplication::translate("FactDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("FactDialog", "\320\244\320\260\320\272\321\202\320\276\321\200\320\270\320\260\320\273 \321\200\320\260\320\262\320\265\320\275:", Q_NULLPTR));
        label->setText(QApplication::translate("FactDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FactDialog: public Ui_FactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACT_DIALOG_H
