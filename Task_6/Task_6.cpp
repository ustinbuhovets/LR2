#include <iostream>
#include <cmath>

int main() {

    double x, n, m, A, D, K, Y;

    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Введите m: ";
    std::cin >> m;
    std::cout << "Введите K: ";
    std::cin >> K;

    A = abs(n + m);
    D = tan(x);
    Y = 1.29 + (K / A) + pow(D, 2);

    std::cout << "Y = " << Y << std::endl;

    return 0;
}
