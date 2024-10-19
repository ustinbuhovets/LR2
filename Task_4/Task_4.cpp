#include <iostream>
#include <iomanip>

int main() {
    double A, B, C, K;
    int X, Y;

    std::cout << std::setprecision(10);

    std::cout << "Введите целочисленные переменные X и Y: ";
    std::cin >> X >> Y;
    std::cout << "Введите вещественные переменные A, B, C: ";
    std::cin >> A >> B >> C;
    std::cout << "Введите значение K: ";
    std::cin >> K;

    if (X == Y) {
        X = 0;
        Y = 0;
    }
    else if (X < Y) {
        X = 0;
    }
    else Y = 0;

    if (A >= B && A >= C) A -= K;
    else if (B >= A && B >= C) B -= K;
    else if (C >= A && C >= B) C -= K;
    std::cout << X << " " << Y << " " <<  A << " " << B << " " << C << std::endl;

    return 0;
}
