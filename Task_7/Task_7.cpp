#include <iostream>

double pow(double x, int n) {
    double result = x;
    for (int i = 1; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {

    double a, b, c, output;
    int N;

    std::cout << "Введите вещественное число a: ";
    std::cin >> a;
    std::cout << "Введите вещественное число b: ";
    std::cin >> b;
    std::cout << "Введите вещественное число c: ";
    std::cin >> c;
    std::cout << "Введите натуральное число N: ";
    std::cin >> N;
    
    switch (N)
    {
        case 2:
            output = b*c - pow(a, 2);
            break;
        case 3:
            output = a - b*c;
            break;
        case 7:
            output = pow(a, 2) + c;
            break;
        case 56:
            output = b*c;
            break;
        default:
            output = pow(a+b, 3);
            break;
    }

    std::cout << "при N = " << N << ": output = " << output << std::endl;

    return 0;
}
