#include "KeyStruct.h"

bool operator==(const FKeyStruct& Key0, const FKeyStruct& Key1) {
    return (Key0.Index0 == Key1.Index0) &&
        (Key0.Index1 == Key1.Index1);
}

int32 GetTypeHash(const FKeyStruct& Key) {
    return (Key.Index0 ^
        ((Key.Index1 << 16 & 0xffff0000) |
        (Key.Index1 >> 16 & 0x0000ffff)));
}