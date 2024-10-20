#include <iostream>

int main() {

    long long int a, b, a0, b0, result;
    std::cout << "Введите два целых числа a и b: ";
    std::cin >> a >> b;
    a0 = a; b0 = b;

    result = a + b;
    std::cout << "a = " << a << ", b = " << b << ", a + b = " << result << "\n";
    while (a && b) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
        result = a + b;

        std::cout << "a = " << a << ", b = " << b << ", a + b = " << result << "\n";
    }

    std::cout << "НОД чисел " << a0 << " и " << b0 << ": " << result << '\n';

    return 0;
}
