#ifndef TEXTCRYPT_H
#define TEXTCRYPT_H

#include <QString>

class Rot13Cipher {
public:
    static QString apply(const QString &text);
};

#endif // TEXTCRYPT_H
