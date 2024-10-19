#include <iostream>
#include <cmath>

int main() {

    double x, n, p, B, C, D, K, Q;

    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите D: ";
    std::cin >> D;
    std::cout << "Введите K: ";
    std::cin >> K;

    B = cos(x);
    C = p - n;
    Q = pow(B, 2) / (K*D) + B*pow(C, 3);

    std::cout << "Q = " << Q << std::endl;

    return 0;
}
