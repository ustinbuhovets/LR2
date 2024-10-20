#include <iostream>
#include <cmath>

int main() {

    double d, x, A, B, C, K, Y;

    std::cout << "Введите d: ";
    std::cin >> d;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите K: ";
    std::cin >> K;

    A = log10(x);
    B = x + exp(d);
    Y = (A + B) - pow(C, 2) / K;

    std::cout << "Y = " << Y << std::endl;

    return 0;
}
