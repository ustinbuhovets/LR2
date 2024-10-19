#include <iostream>

int main() {
    double x;
    double y, z, w;
    double answer1, answer2;

    std::cout << "Введите x: ";
    std::cin >> x;

    y = x*x;
    z = x*(23*y + 32);
    w = 69*y + 8;
    answer1 = z + w;
    answer2 = w - z;

    std::cout << "23х^3 + 69x^2 + 32x + 8 = " << answer1 << std::endl;
    std::cout << "-23х^3 + 69x^2 - 32x + 8 = " << answer2 << std::endl;

    return 0;
}
