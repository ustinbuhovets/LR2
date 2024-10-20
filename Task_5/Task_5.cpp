#include <iostream>

int main() {
    double X, Y;
    double output;

    std::cout << "Введите X: "; std::cin >> X;
    std::cout << "Введите Y: "; std::cin >> Y;
    
    output = (X > Y) ? X : Y;

    std::cout << "Наибольшее число из " << X << " и " <<  Y << ": " << output << std::endl;

    return 0;
}
