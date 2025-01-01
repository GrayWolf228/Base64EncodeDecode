#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QClipboard>
#include <QString>
#include <string>
#include <openssl/bio.h>
#include <openssl/evp.h>
#include <openssl/buffer.h>

#include "base64app.h"

// Функция для кодирования base64
std::string base64_encode(const std::string &data) {
    BIO *bio, *b64;
    BUF_MEM *buffer;

    b64 = BIO_new(BIO_f_base64());
    bio = BIO_new(BIO_s_mem());
    bio = BIO_push(b64, bio);

    BIO_write(bio, data.c_str(), data.length());
    BIO_flush(bio);
    BIO_get_mem_ptr(bio, &buffer);

    std::string encoded(buffer->data, buffer->length);
    BIO_free_all(bio);

    return encoded;
}

// Функция для декодирования base64
std::string base64_decode(const std::string &encoded) {
    BIO *bio, *b64;
    char buffer[1024] = {0};

    b64 = BIO_new(BIO_f_base64());
    bio = BIO_new_mem_buf(encoded.c_str(), -1);
    bio = BIO_push(b64, bio);

    int decoded_length = BIO_read(bio, buffer, encoded.length());
    BIO_free_all(bio);

    return std::string(buffer, decoded_length);
}

// Основной виджет приложения
Base64App::Base64App() {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *labelInput = new QLabel("Введите текст для кодирования или декодирования:", this);
    layout->addWidget(labelInput);

    inputField = new QLineEdit(this);
    layout->addWidget(inputField);

    QLabel *labelOutput = new QLabel("Результат:", this);
    layout->addWidget(labelOutput);

    outputField = new QLineEdit(this);
    outputField->setReadOnly(true);
    layout->addWidget(outputField);

    QPushButton *encodeButton = new QPushButton("Закодировать", this);
    layout->addWidget(encodeButton);

    QPushButton *decodeButton = new QPushButton("Декодировать", this);
    layout->addWidget(decodeButton);

    QPushButton *copyButton = new QPushButton("Скопировать результат", this);
    layout->addWidget(copyButton);

    connect(encodeButton, &QPushButton::clicked, this, &Base64App::encodeText);
    connect(decodeButton, &QPushButton::clicked, this, &Base64App::decodeText);
    connect(copyButton, &QPushButton::clicked, this, &Base64App::copyToClipboard);
}

void Base64App::encodeText() {
    std::string inputText = inputField->text().toStdString();
    std::string encodedText = base64_encode(inputText);
    outputField->setText(QString::fromStdString(encodedText));
}

void Base64App::decodeText() {
    std::string inputText = inputField->text().toStdString();
    std::string decodedText = base64_decode(inputText);
    outputField->setText(QString::fromStdString(decodedText));
}

void Base64App::copyToClipboard() {
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(outputField->text());
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Base64App window;
    window.setWindowTitle("Base64 Encoder / Decoder");
    window.resize(400, 200);
    window.show();

    return app.exec();
}
