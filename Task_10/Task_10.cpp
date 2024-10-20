#include <iostream>


// Square root
long double sqrt(long double n) {

    if (n == 1) {
        return 1;
    }

    long double start, end;
    start = (n > 1) ? 0 : n;
    end = (n > 1) ? n : 1;
    long double mid = (start + end) / 2;

    for (int i = 0; i < 30; i++) {     
        mid = (start + end)/2;

        if (mid*mid < n) start = mid;
        else end = mid;
    }

    return mid;
}


// Round func
long double round(long double n) {

    long double value = (long long int)(n*1000000 + .5);

    return (long double)value / 1000000;
}

int main() {

    long double x1, y1, x2, y2, r, R, S;

    std::cout << "Введите координаты центра первого круга (через пробел): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите длину радиуса первого круга: ";
    std::cin >> r;
    std::cout << "Введите координаты центра второго круга (через пробел): ";
    std::cin >> x2 >> y2;
    std::cout << "Введите длину радиуса второго круга: ";
    std::cin >> R;

    S = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    S = round(S);

    if (S > r + R)
        std::cout << "Ни одно из условий не выполнено" << std::endl;
    else if (S + r < R)
        std::cout << "Да" << std::endl;
    else if (S + R < r)
        std::cout << "Да, но справедливо обратное для двух фигур" << std::endl;
    else
        std::cout << "Фигуры пересекаются" << std::endl;


    return 0;
}
