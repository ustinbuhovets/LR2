#include <iostream>
#include <cmath>

int main() {

    double k, x, z, A, B, C, D, Y;

    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите z: ";
    std::cin >> z;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите D: ";
    std::cin >> D;

    A = log(x) - k;
    B = sqrt(z);
    Y = pow(D, 2) + pow(C, 2) / (0.75*A) + B;

    std::cout << "Y = " << Y << std::endl;

    return 0;
}
