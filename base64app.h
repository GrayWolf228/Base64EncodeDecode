#ifndef BASE64APP_H
#define BASE64APP_H

#include <QWidget>
#include <QLineEdit>

class Base64App : public QWidget {
    Q_OBJECT

public:
    Base64App();

private slots:
    void encodeText();
    void decodeText();
    void copyToClipboard();

private:
    QLineEdit *inputField;
    QLineEdit *outputField;
};

#endif // BASE64APP_H
