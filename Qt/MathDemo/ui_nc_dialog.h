/********************************************************************************
** Form generated from reading UI file 'nc_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_DIALOG_H
#define UI_NC_DIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NCDialog
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinSource;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QSpinBox *spinNC;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnCount;
    QPushButton *btnClose;
    QWidget *widget;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QDialog *NCDialog)
    {
        if (NCDialog->objectName().isEmpty())
            NCDialog->setObjectName(QStringLiteral("NCDialog"));
        NCDialog->resize(343, 320);
        layoutWidget = new QWidget(NCDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 147, 29));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinSource = new QSpinBox(layoutWidget);
        spinSource->setObjectName(QStringLiteral("spinSource"));
        spinSource->setMaximum(1000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinSource);

        layoutWidget1 = new QWidget(NCDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 80, 281, 29));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        spinNC = new QSpinBox(layoutWidget1);
        spinNC->setObjectName(QStringLiteral("spinNC"));
        spinNC->setMinimum(2);
        spinNC->setMaximum(10);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinNC);

        layoutWidget2 = new QWidget(NCDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 220, 99, 60));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnCount = new QPushButton(layoutWidget2);
        btnCount->setObjectName(QStringLiteral("btnCount"));

        verticalLayout->addWidget(btnCount);

        btnClose = new QPushButton(layoutWidget2);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        verticalLayout->addWidget(btnClose);

        widget = new QWidget(NCDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(31, 131, 302, 29));
        formLayout_3 = new QFormLayout(widget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit);


        retranslateUi(NCDialog);

        QMetaObject::connectSlotsByName(NCDialog);
    } // setupUi

    void retranslateUi(QDialog *NCDialog)
    {
        NCDialog->setWindowTitle(QApplication::translate("NCDialog", "\320\241\320\270\321\201\321\202\320\265\320\274\321\213 \321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("NCDialog", "\320\247\320\270\321\201\320\273\320\276:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NCDialog", "\320\236\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217:", Q_NULLPTR));
        btnCount->setText(QApplication::translate("NCDialog", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214", Q_NULLPTR));
        btnClose->setText(QApplication::translate("NCDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("NCDialog", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202(10-\321\207\320\275\320\260\321\217 \321\201.)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NCDialog: public Ui_NCDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_DIALOG_H
