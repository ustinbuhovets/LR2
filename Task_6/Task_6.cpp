#include <iostream>
#include <cmath>

int main() {

    double p, x, z, A, B, C, D, K, Y;

    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите z: ";
    std::cin >> z;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите D: ";
    std::cin >> D;
    std::cout << "Введите K: ";
    std::cin >> K;

    A = sin(x) - z;
    B = abs(p - x);
    Y = pow((A + B), 2) - K / (C*D);

    std::cout << "Y = " << Y << std::endl;

    return 0;
}
