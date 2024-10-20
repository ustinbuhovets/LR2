#include <iostream>
#include <cmath>

int main() {

    double x, y, z, A, B, C, D, K, T;

    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "Введите z: ";
    std::cin >> z;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите D: ";
    std::cin >> D;
    std::cout << "Введите K: ";
    std::cin >> K;

    A = x - y;
    B = sqrt(z);
    T = cos(x) + pow(A, 2) / (K - C*D) - B;

    std::cout << "T = " << T << std::endl;

    return 0;
}
