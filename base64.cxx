#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QClipboard>
#include <QString>
#include <string>

#include "base64app.h"
#include "ui_base64app.h"

// Base64 encoding and decoding functions
static const std::string BASE64_CHARS =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"0123456789+/";

std::string base64_encode(const std::string &input) {
    std::string encoded;
    int val = 0, valb = -6;
    for (unsigned char c : input) {
        val = (val << 8) + c;
        valb += 8;
        while (valb >= 0) {
            encoded.push_back(BASE64_CHARS[(val >> valb) & 0x3F]);
            valb -= 6;
        }
    }
    if (valb > -6) {
        encoded.push_back(BASE64_CHARS[((val << 8) >> (valb + 8)) & 0x3F]);
    }
    while (encoded.size() % 4) {
        encoded.push_back('=');
    }
    return encoded;
}

std::string base64_decode(const std::string &input) {
    std::vector<int> decoding_table(256, -1);
    for (int i = 0; i < 64; i++) {
        decoding_table[BASE64_CHARS[i]] = i;
    }

    std::string decoded;
    int val = 0, valb = -8;
    for (unsigned char c : input) {
        if (decoding_table[c] == -1) break;
        val = (val << 6) + decoding_table[c];
        valb += 6;
        if (valb >= 0) {
            decoded.push_back(char((val >> valb) & 0xFF));
            valb -= 8;
        }
    }
    return decoded;
}

Base64App::Base64App(QWidget *parent)
: QMainWindow(parent), ui(new Ui::Base64App)
{
    ui->setupUi(this);

    connect(ui->encodeButton, &QPushButton::clicked, this, &Base64App::encodeText);
    connect(ui->decodeButton, &QPushButton::clicked, this, &Base64App::decodeText);
    connect(ui->copyButton, &QPushButton::clicked, this, &Base64App::copyToClipboard);
}

Base64App::~Base64App() {
    delete ui;
}

void Base64App::encodeText() {
    std::string inputText = ui->inputField->text().toStdString();
    std::string encodedText = base64_encode(inputText);
    ui->outputField->setText(QString::fromStdString(encodedText));
}

void Base64App::decodeText() {
    std::string inputText = ui->inputField->text().toStdString();
    std::string decodedText = base64_decode(inputText);
    ui->outputField->setText(QString::fromStdString(decodedText));
}

void Base64App::copyToClipboard() {
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(ui->outputField->text());
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Base64App window;
    window.setWindowTitle("Base64 Encoder / Decoder");
    window.resize(400, 200);
    window.show();

    return app.exec();
}
