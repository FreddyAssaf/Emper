/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QLabel *label_7;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_6;
    QLabel *label_8;

    void setupUi(QDialog *SecondDialog)
    {
        if (SecondDialog->objectName().isEmpty())
            SecondDialog->setObjectName("SecondDialog");
        SecondDialog->resize(1000, 700);
        SecondDialog->setMinimumSize(QSize(1000, 700));
        SecondDialog->setMaximumSize(QSize(1000, 700));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(18, 194, 159, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        SecondDialog->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Desktop/image/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SecondDialog->setWindowIcon(icon);
        formLayoutWidget = new QWidget(SecondDialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(50, 150, 321, 484));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(14);
        formLayout->setVerticalSpacing(31);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(14);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        QFont font1;
        font1.setPointSize(15);
        lineEdit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font1);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font2);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_4);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font2);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_6);

        label_6 = new QLabel(SecondDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 80, 171, 41));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(false);
        label_6->setFont(font3);
        label_7 = new QLabel(SecondDialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(640, 80, 171, 41));
        label_7->setFont(font3);
        tableView = new QTableView(SecondDialog);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(470, 150, 521, 311));
        pushButton_2 = new QPushButton(SecondDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 470, 121, 51));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(SecondDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(610, 470, 121, 51));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        pushButton_3->setFont(font4);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5 = new QPushButton(SecondDialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(470, 540, 161, 51));
        pushButton_5->setFont(font4);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_6 = new QLineEdit(SecondDialog);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(850, 530, 131, 51));
        label_8 = new QLabel(SecondDialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(860, 500, 111, 41));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setUnderline(true);
        label_8->setFont(font5);

        retranslateUi(SecondDialog);

        QMetaObject::connectSlotsByName(SecondDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondDialog)
    {
        SecondDialog->setWindowTitle(QCoreApplication::translate("SecondDialog", "EMPER", nullptr));
        label->setText(QCoreApplication::translate("SecondDialog", "Employee ID:", nullptr));
        label_2->setText(QCoreApplication::translate("SecondDialog", "First Name:", nullptr));
        label_3->setText(QCoreApplication::translate("SecondDialog", "Last Name:", nullptr));
        label_4->setText(QCoreApplication::translate("SecondDialog", "Position:", nullptr));
        label_5->setText(QCoreApplication::translate("SecondDialog", "Salary:", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondDialog", "INSERT", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SecondDialog", "UPDATE", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SecondDialog", "DELETE", nullptr));
        label_6->setText(QCoreApplication::translate("SecondDialog", "DATA ENTERY", nullptr));
        label_7->setText(QCoreApplication::translate("SecondDialog", "TABLE VIEW", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SecondDialog", "VIEW", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SecondDialog", "CLEAR", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SecondDialog", "EXPORT INTO FILE", nullptr));
        label_8->setText(QCoreApplication::translate("SecondDialog", "Sum Salaries ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondDialog: public Ui_SecondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
