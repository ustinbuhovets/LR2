#include <iostream>
#include <cmath>

int main() {
    double x, D, A, b, S;

    std::cout << "Введите x: ";
    std::cin >> x;   
    std::cout << "Введите D: ";
    std::cin >> D;  

    b = x + D;
    A = D * x / b;
    S = (pow(A, 2) + b * cos(x)) / (pow(D, 3) + (A + D -b));

    std::cout << "S = " << S << std::endl;

    return 0;
}
