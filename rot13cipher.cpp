#include "rot13cipher.h"

QString Rot13Cipher::apply(const QString &text)
{
    QString result;

    for (auto ch : text) {
        ushort uc = ch.unicode();
        if (uc >= 'a' && uc <= 'z') {
            ch = QChar((uc - 'a' + 13) % 26 + 'a');
        } else if (uc >= 'A' && uc <= 'Z') {
            ch = QChar((uc - 'A' + 13) % 26 + 'A');
        }
        result.append(ch);
    }

    return result;
}
