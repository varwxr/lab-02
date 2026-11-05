#include <iostream>

int next_pow2(int x) {
    int result = 1;

    while (result < x) {
        result <<= 1;
    }

    return result;
}

int main() {
    std::cout << next_pow2(5) << ' ';
    std::cout << next_pow2(64) << ' ';
    std::cout << next_pow2(100) << '\n';

    return 0;
}