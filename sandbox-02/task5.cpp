#include <cstdint>
#include <iostream>

int times10(int x) {
    return (x << 3) + (x << 1);
}

int main() {
    int x = 5;
    std::cout << (x << 3) << '\n';

    std::uint8_t b = 200;
    b = (std::uint8_t)(b << 1);
    std::cout << (int)b << '\n';

    int neg = -16;
    std::cout << ((std::uint8_t)neg >> 2) << '\n';

    std::cout << times10(7) << ' ';
    std::cout << times10(25) << '\n';

    return 0;
}