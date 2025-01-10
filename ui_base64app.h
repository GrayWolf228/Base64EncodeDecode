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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Base64App
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelInput;
    QLineEdit *inputField;
    QLabel *labelOutput;
    QLineEdit *outputField;
    QPushButton *encodeButton;
    QPushButton *decodeButton;
    QPushButton *copyButton;

    void setupUi(QMainWindow *Base64App)
    {
        if (Base64App->objectName().isEmpty())
            Base64App->setObjectName(QString::fromUtf8("Base64App"));
        Base64App->resize(327, 213);
        QFont font;
        font.setFamily(QString::fromUtf8("Minecraft Rus"));
        Base64App->setFont(font);
        centralWidget = new QWidget(Base64App);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setFont(font);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelInput = new QLabel(centralWidget);
        labelInput->setObjectName(QString::fromUtf8("labelInput"));
        labelInput->setFont(font);

        verticalLayout->addWidget(labelInput);

        inputField = new QLineEdit(centralWidget);
        inputField->setObjectName(QString::fromUtf8("inputField"));
        inputField->setFont(font);

        verticalLayout->addWidget(inputField);

        labelOutput = new QLabel(centralWidget);
        labelOutput->setObjectName(QString::fromUtf8("labelOutput"));
        labelOutput->setFont(font);

        verticalLayout->addWidget(labelOutput);

        outputField = new QLineEdit(centralWidget);
        outputField->setObjectName(QString::fromUtf8("outputField"));
        outputField->setFont(font);
        outputField->setReadOnly(true);

        verticalLayout->addWidget(outputField);

        encodeButton = new QPushButton(centralWidget);
        encodeButton->setObjectName(QString::fromUtf8("encodeButton"));
        encodeButton->setFont(font);

        verticalLayout->addWidget(encodeButton);

        decodeButton = new QPushButton(centralWidget);
        decodeButton->setObjectName(QString::fromUtf8("decodeButton"));
        decodeButton->setFont(font);

        verticalLayout->addWidget(decodeButton);

        copyButton = new QPushButton(centralWidget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setFont(font);

        verticalLayout->addWidget(copyButton);

        Base64App->setCentralWidget(centralWidget);

        retranslateUi(Base64App);

        QMetaObject::connectSlotsByName(Base64App);
    } // setupUi

    void retranslateUi(QMainWindow *Base64App)
    {
        Base64App->setWindowTitle(QCoreApplication::translate("Base64App", "Base64 Encoder / Decoder", nullptr));
        labelInput->setText(QCoreApplication::translate("Base64App", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\270\320\273\320\270 \320\264\320\265\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        labelOutput->setText(QCoreApplication::translate("Base64App", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        encodeButton->setText(QCoreApplication::translate("Base64App", "\320\227\320\260\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        decodeButton->setText(QCoreApplication::translate("Base64App", "\320\224\320\265\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        copyButton->setText(QCoreApplication::translate("Base64App", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Base64App: public Ui_Base64App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE64APP_H
