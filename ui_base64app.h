/********************************************************************************
** Form generated from reading UI file 'Base64.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE64APP_H
#define UI_BASE64APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Base64App
{
public:
    QWidget *centralWidget;
    QLineEdit *inputField;
    QLabel *labelOutput;
    QLineEdit *outputField;
    QPushButton *encodeButton;
    QLabel *labelInput;
    QPushButton *copyButton;
    QPushButton *decodeButton;

    void setupUi(QMainWindow *Base64App)
    {
        if (Base64App->objectName().isEmpty())
            Base64App->setObjectName(QString::fromUtf8("Base64App"));
        Base64App->resize(450, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Base64App->sizePolicy().hasHeightForWidth());
        Base64App->setSizePolicy(sizePolicy);
        Base64App->setMaximumSize(QSize(450, 300));
        Base64App->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(Base64App);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(450, 300));
        centralWidget->setMaximumSize(QSize(450, 300));
        centralWidget->setBaseSize(QSize(0, 0));
        inputField = new QLineEdit(centralWidget);
        inputField->setObjectName(QString::fromUtf8("inputField"));
        inputField->setGeometry(QRect(9, 32, 431, 91));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inputField->sizePolicy().hasHeightForWidth());
        inputField->setSizePolicy(sizePolicy1);
        inputField->setMaxLength(196602);
        inputField->setFrame(false);
        inputField->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelOutput = new QLabel(centralWidget);
        labelOutput->setObjectName(QString::fromUtf8("labelOutput"));
        labelOutput->setGeometry(QRect(10, 127, 431, 17));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelOutput->sizePolicy().hasHeightForWidth());
        labelOutput->setSizePolicy(sizePolicy2);
        outputField = new QLineEdit(centralWidget);
        outputField->setObjectName(QString::fromUtf8("outputField"));
        outputField->setGeometry(QRect(10, 150, 431, 91));
        sizePolicy1.setHeightForWidth(outputField->sizePolicy().hasHeightForWidth());
        outputField->setSizePolicy(sizePolicy1);
        outputField->setMaxLength(196602);
        outputField->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        outputField->setReadOnly(true);
        encodeButton = new QPushButton(centralWidget);
        encodeButton->setObjectName(QString::fromUtf8("encodeButton"));
        encodeButton->setGeometry(QRect(10, 250, 90, 25));
        labelInput = new QLabel(centralWidget);
        labelInput->setObjectName(QString::fromUtf8("labelInput"));
        labelInput->setGeometry(QRect(9, 9, 431, 17));
        sizePolicy2.setHeightForWidth(labelInput->sizePolicy().hasHeightForWidth());
        labelInput->setSizePolicy(sizePolicy2);
        labelInput->setLayoutDirection(Qt::LeftToRight);
        copyButton = new QPushButton(centralWidget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setGeometry(QRect(340, 250, 101, 25));
        decodeButton = new QPushButton(centralWidget);
        decodeButton->setObjectName(QString::fromUtf8("decodeButton"));
        decodeButton->setGeometry(QRect(110, 250, 92, 25));
        Base64App->setCentralWidget(centralWidget);

        retranslateUi(Base64App);

        QMetaObject::connectSlotsByName(Base64App);
    } // setupUi

    void retranslateUi(QMainWindow *Base64App)
    {
        Base64App->setWindowTitle(QCoreApplication::translate("Base64App", "Base64 Encoder / Decoder", nullptr));
#if QT_CONFIG(tooltip)
        inputField->setToolTip(QCoreApplication::translate("Base64App", "<html><head/><body><p>\320\237\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276 \321\202\320\265\320\272\321\201\321\202\320\260<br/>\320\230\320\273\320\270 \320\274\320\276\320\266\320\265\321\210\321\214 \320\262\320\277\320\270\321\201\320\260\321\202\321\214 \321\201\320\262\320\276\320\271 \321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\270</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        inputField->setText(QString());
        labelOutput->setText(QCoreApplication::translate("Base64App", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
#if QT_CONFIG(tooltip)
        outputField->setToolTip(QCoreApplication::translate("Base64App", "<html><head/><body><p>\320\237\320\276\320\273\320\265 \320\262\321\213\320\262\320\276\320\264\320\260 \320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276/\321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276 \321\202\320\265\320\272\321\201\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        encodeButton->setToolTip(QCoreApplication::translate("Base64App", "<html><head/><body><p>\320\237\320\276\320\267\320\262\320\276\320\273\321\217\320\265\321\202 \320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214 \321\202\320\265\320\272\321\201\321\202 \320\275\320\260 Base64</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        encodeButton->setText(QCoreApplication::translate("Base64App", "\320\227\320\260\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        labelInput->setText(QCoreApplication::translate("Base64App", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\270\320\273\320\270 \320\264\320\265\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
#if QT_CONFIG(tooltip)
        copyButton->setToolTip(QCoreApplication::translate("Base64App", "<html><head/><body><p>\320\241\320\272\320\276\320\277\320\270\321\200\321\203\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\270\320\267 \320\277\320\276\320\273\321\217 \320\262\321\213\320\262\320\276\320\264\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        copyButton->setText(QCoreApplication::translate("Base64App", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        decodeButton->setToolTip(QCoreApplication::translate("Base64App", "<html><head/><body><p>\320\237\320\276\320\267\320\262\320\276\320\273\321\217\320\265\321\202 \321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214 Base64</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        decodeButton->setText(QCoreApplication::translate("Base64App", "\320\224\320\265\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Base64App: public Ui_Base64App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE64APP_H
