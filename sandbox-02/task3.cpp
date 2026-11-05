#include <cstdint>
#include <iostream>

const std::uint8_t UP = 1u << 0, DOWN = 1u << 1, LEFT = 1u << 2, RIGHT = 1u << 3;
const std::uint8_t BTN_A = 1u << 4, BTN_B = 1u << 5;
void print_pad(std::uint8_t pad) {
    bool first = true;

    if (pad & UP) {
        if (!first) std::cout << ' ';
        std::cout << "UP";
        first = false;
    }

    if (pad & DOWN) {
        if (!first) std::cout << ' ';
        std::cout << "DOWN";
        first = false;
    }

    if (pad & LEFT) {
        if (!first) std::cout << ' ';
        std::cout << "LEFT";
        first = false;
    }

    if (pad & RIGHT) {
        if (!first) std::cout << ' ';
        std::cout << "RIGHT";
        first = false;
    }

    if (pad & BTN_A) {
        if (!first) std::cout << ' ';
        std::cout << "A";
        first = false;
    }

    if (pad & BTN_B) {
        if (!first) std::cout << ' ';
        std::cout << "B";
    }

    std::cout << '\n';
}

int main() {
    std::uint8_t pad = 0;

    pad |= UP;
    pad |= BTN_A;
    pad |= RIGHT;
    pad &= (std::uint8_t)~UP;

    pad ^= LEFT;
    pad ^= LEFT;
    pad ^= DOWN;

    std::cout << (int)pad << ":";

    std::uint8_t buttons[] = {UP, DOWN, LEFT, RIGHT, BTN_A, BTN_B};

    for (int i = 0; i < 6; ++i) {
        std::cout << ' ' << ((pad & buttons[i]) != 0);
    }

    std::cout << '\n';

    print_pad(0x19);
    print_pad(0x22);

    return 0;
}