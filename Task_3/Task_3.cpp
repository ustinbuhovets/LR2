#include <iostream>

int main() {

    double b1, q, S;
    double n = 8.0;

    std::cout << "Введите значение первого члена геометрической прогрессии: ";
    std::cin >> b1;

    q = 1 / (n+1);
    S = b1 / (1-q);

    std::cout << "Сумма геометрической прогрессии: " << S << std::endl;

    return 0;
}
