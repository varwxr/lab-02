#include <cstdint>
#include <iostream>

std::uint32_t pack(int r, int g, int b) {
    return ((std::uint32_t)r << 16) |
           ((std::uint32_t)g << 8) |
           (std::uint32_t)b;
}

int main() {
    std::uint32_t orange = 0xFF8800;

    int r = (orange >> 16) & 0xFF;
    int g = (orange >> 8) & 0xFF;
    int b = orange & 0xFF;

    std::cout << r << ' ' << g << ' ' << b << '\n';

    std::uint16_t rgb565 =
    (std::uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));

    std::cout << std::hex << rgb565 << '\n';
    std::cout << std::hex << pack(255, 136, 0) << '\n';
    std::cout << std::hex << pack(0, 128, 255) << '\n';

    return 0;
}