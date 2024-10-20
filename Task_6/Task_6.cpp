#include <iostream>
#include <cmath>

int main() {

    double x, h, p, A, B, C, D, K, Y;

    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите h: ";
    std::cin >> h;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите D: ";
    std::cin >> D;
    std::cout << "Введите K: ";
    std::cin >> K;

    A = x - p;
    B = log(h);
    Y = (0.78*B) + pow(A, 3) / (K*C*D);

    std::cout << "Y = " << Y << std::endl;

    return 0;
}
