#include <iostream>

int max(int a, int b) {
    std::cout << "Non-template ";
    return b < a ? a : b;
}

template<typename T>
T max(T a, T b) {
    std::cout << "Templatized ";
    return b < a ? a : b;
}

int main() {
    std::cout << "max(7, 42): " << ::max(7, 42) << "\n";
    std::cout << "max(7.0, 42.0): " << ::max(7.0, 42.0) << "\n";
    std::cout << "max('a', 'b'): " << ::max('a', 'b') << "\n";
    std::cout << "max<>(7, 42): " << ::max<>(7, 42) << "\n";
    std::cout << "max<double>(7, 42): " << ::max(7, 42) << "\n";
    std::cout << "max('a', 42.7): " << ::max('a', 42.7) << "\n";

    return 0;
}
