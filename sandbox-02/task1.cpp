#include <iostream>
#include <cstdint>

bool parity(std::uint8_t b) {
    int count = 0;

    while (b != 0) {
        count += (b & 1);
        b >>= 1;
    }

    return (count % 2) != 0;
}

int main() {
    std::cout << parity(0xA3) << '\n';
    std::cout << parity(0x07) << '\n';
    std::cout << parity(0xFF) << '\n';

    return 0;
}
