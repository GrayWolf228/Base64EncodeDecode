#ifndef BASE64APP_H
#define BASE64APP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Base64App; }
QT_END_NAMESPACE

class Base64App : public QMainWindow
{
    Q_OBJECT

public:
    Base64App(QWidget *parent = nullptr);
    ~Base64App();

private slots:
    void encodeText();
    void decodeText();
    void copyToClipboard();

private:
    Ui::Base64App *ui;
};

#endif // BASE64APP_H
