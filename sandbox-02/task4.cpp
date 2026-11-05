#include <iostream>

bool bit_is_set(int value, int n) {
    return (value & (1 << n)) != 0;
}
int main() {
    int flags = 6;

    if ((flags & 4) == 4) {
        std::cout << "bit 2 is set\n";
    } else {
        std::cout << "bit 2 is clear\n";
    }
    
    std::cout << bit_is_set(6, 0) << ' ';
    std::cout << bit_is_set(6, 1) << ' ';
    std::cout << bit_is_set(6, 2) << '\n';

    return 0;
}