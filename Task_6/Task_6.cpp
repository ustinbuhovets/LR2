#include <iostream>
#include <cmath>

int main() {
    double x, p, A, B, C, D, K, Y;

    std::cout << "Введите x: ";
    std::cin >> x;   
    std::cout << "Введите p: ";
    std::cin >> p;        
    std::cout << "Введите C: ";
    std::cin >> C;   
    std::cout << "Введите D: ";
    std::cin >> D;  
    std::cout << "Введите K: ";
    std::cin >> K; 

    A = x + sin(p);
    B = exp(K);

    Y = 1 + pow(K, 2) / (2*A*B) - B + D*C;

    std::cout << "Y = " << Y << std::endl;

    return 0;
}