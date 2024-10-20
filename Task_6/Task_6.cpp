#include <iostream>
#include <cmath>

int main() {

    double x, y, A, C, D, K, S;

    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите K: ";
    std::cin >> K;

    A = x + y;
    D = abs(C - A);
    S = 10.1 + (A / C) + (D / pow(K, 2));

    std::cout << "S = " << S << std::endl;

    return 0;
}
