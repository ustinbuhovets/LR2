#include <iostream>

int main() {
    double X, Y, output;

    std::cout << "Введите X: "; std::cin >> X;
    std::cout << "Введите Y: "; std::cin >> Y;
    
    if (X >= Y) output = X;
    else output = Y;

    std::cout << "Наибольшее число из " << X << " и " <<  Y << ": " << output << std::endl;

    return 0;
}
