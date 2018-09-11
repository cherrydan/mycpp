/********************************************************************************
** Form generated from reading UI file 'fib_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIB_DIALOG_H
#define UI_FIB_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FibDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnCalc;
    QPushButton *btnClose;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *resultLE;

    void setupUi(QDialog *FibDialog)
    {
        if (FibDialog->objectName().isEmpty())
            FibDialog->setObjectName(QStringLiteral("FibDialog"));
        FibDialog->resize(322, 320);
        layoutWidget = new QWidget(FibDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 230, 87, 60));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnCalc = new QPushButton(layoutWidget);
        btnCalc->setObjectName(QStringLiteral("btnCalc"));

        verticalLayout->addWidget(btnCalc);

        btnClose = new QPushButton(layoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        verticalLayout->addWidget(btnClose);

        layoutWidget1 = new QWidget(FibDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 30, 263, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(35);
        spinBox->setValue(1);

        horizontalLayout->addWidget(spinBox);

        layoutWidget2 = new QWidget(FibDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(80, 120, 171, 52));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        resultLE = new QLineEdit(layoutWidget2);
        resultLE->setObjectName(QStringLiteral("resultLE"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        resultLE->setFont(font);
        resultLE->setReadOnly(true);

        verticalLayout_2->addWidget(resultLE);


        retranslateUi(FibDialog);

        QMetaObject::connectSlotsByName(FibDialog);
    } // setupUi

    void retranslateUi(QDialog *FibDialog)
    {
        FibDialog->setWindowTitle(QApplication::translate("FibDialog", "\320\247\320\270\321\201\320\273\320\276 \320\244\320\270\320\261\320\276\320\275\320\260\321\207\321\207\320\270", Q_NULLPTR));
        btnCalc->setText(QApplication::translate("FibDialog", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214", Q_NULLPTR));
        btnClose->setText(QApplication::translate("FibDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("FibDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 n:", Q_NULLPTR));
        label_2->setText(QApplication::translate("FibDialog", "n-\321\207\320\270\321\201\320\273\320\276 \320\244\320\270\320\261\320\276\320\275\320\260\321\207\321\207\320\270:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FibDialog: public Ui_FibDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIB_DIALOG_H
