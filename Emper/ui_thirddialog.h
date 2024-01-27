/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName("ThirdDialog");
        ThirdDialog->resize(1000, 700);
        ThirdDialog->setMinimumSize(QSize(1000, 700));
        ThirdDialog->setMaximumSize(QSize(1000, 700));
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
        ThirdDialog->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Desktop/image/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ThirdDialog->setWindowIcon(icon);
        tableView = new QTableView(ThirdDialog);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(610, 60, 381, 481));
        pushButton = new QPushButton(ThirdDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(740, 550, 141, 71));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        pushButton->setPalette(palette1);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        pushButton->setFont(font);
        gridLayoutWidget = new QWidget(ThirdDialog);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 120, 574, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_7, 4, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_4, 3, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 3, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka")});
        font2.setPointSize(16);
        font2.setBold(true);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        pushButton_2->setPalette(palette2);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font1);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_6, 4, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_5, 2, 2, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka")});
        font3.setPointSize(16);
        label_7->setFont(font3);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        pushButton_3->setFont(font4);

        gridLayout->addWidget(pushButton_3, 5, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setFont(font4);

        gridLayout->addWidget(pushButton_8, 5, 2, 1, 1);

        label_5 = new QLabel(ThirdDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(710, 10, 261, 31));
        QFont font5;
        font5.setPointSize(22);
        font5.setBold(true);
        label_5->setFont(font5);
        label_6 = new QLabel(ThirdDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(190, 70, 261, 31));
        label_6->setFont(font5);

        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QCoreApplication::translate("ThirdDialog", "EMPER", nullptr));
        pushButton->setText(QCoreApplication::translate("ThirdDialog", "CLEAR", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ThirdDialog", "HIGHER", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ThirdDialog", "CALCULATE", nullptr));
        label_2->setText(QCoreApplication::translate("ThirdDialog", "Search By Salary", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ThirdDialog", "SEARCH", nullptr));
        label_3->setText(QCoreApplication::translate("ThirdDialog", "Calculate AVG Salary", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ThirdDialog", "LOWER", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ThirdDialog", "SEARCH", nullptr));
        label->setText(QCoreApplication::translate("ThirdDialog", "Search By ID", nullptr));
        label_4->setText(QCoreApplication::translate("ThirdDialog", "Employees W.R.T Average Salary", nullptr));
        label_7->setText(QCoreApplication::translate("ThirdDialog", "Sort By Salary", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ThirdDialog", "ASC", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ThirdDialog", "DESC", nullptr));
        label_5->setText(QCoreApplication::translate("ThirdDialog", "TABLE VIEW", nullptr));
        label_6->setText(QCoreApplication::translate("ThirdDialog", "MANAGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
