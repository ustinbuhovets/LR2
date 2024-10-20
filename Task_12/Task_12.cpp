// x3 + px + q = 0
#include <iostream>


// Square root function
double sqrt(double n) {

    if (n == 1) {
        return 1;
    }

    double start, end;
    start = (n > 1) ? 0 : n;
    end = (n > 1) ? n : 1;
    double mid = (start + end) / 2;

    for (int i = 0; i < 30; i++) {     
        mid = (start + end)/2;

        if (mid*mid < n) start = mid;
        else end = mid;
    }

    return mid;
}


// cosine function
double cos(double x) {

    double result = 0, T = 1;
    int sign = 1, n = 1;

    while (x > 3.14) {
        x -= 3.14;
    }
    while (x < 0) {
        x += 3.14;
    }

    for (int i = 0; i < 20; i++) {
        result += sign*T;
        sign *= -1;
        T *= (x*x) / (n*(n+1));
        n += 2;
    }
    
    return result;
}


// arccosine function
double acos(double x) {

    double start = 0, end = 3.14159, result;

    do {
        result = (start + end) / 2;
        if (cos(result) > x) {
            start = result;
        } else if (cos(result) < x) {
            end = result;
        }

    } while (cos(result) < (x - 0.0001) && cos(result) > (x - 0.0001));

    return result;
}


int main() {


    double p, q, x1, x2, x3, Q;

    std::cout << "Введите корни кубического уравнения вида x^3 + px + q = 0 (через пробел): ";
    std::cin >> p >> q;

    if (q == 0) {
        x1 = 0;
        if (p < 0) {
            x2 = sqrt(p);
            x3 = -sqrt(p);
            std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << "\n";
        } else {
            std::cout << "Уравнение имеет единственный корень: 0 \n";
        }
        return 0;
    }

    Q = 4*p*p*p + 27*q*q;
    if (Q < 0) {
        x1 = 2 * sqrt((-p)/3) * cos((1/3)*acos((3*q)/(2*p)*sqrt((-3)/p)));
        x2 = 2 * sqrt((-p)/3) * cos((1/3)*acos((3*q)/(2*p)*sqrt((-3)/p)) - 2*3.14159/3);
        x1 = 2 * sqrt((-p)/3) * cos((1/3)*acos((3*q)/(2*p)*sqrt((-3)/p)) - 4*3.14159/3);
        std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << "\n";
    } else if (Q == 0) {
        double abs_q;
        abs_q = (q < 0) ? -q : q; 

        x1 = (-2) * (abs_q/q) * sqrt((-p)/3) * cos((1/3)*acos(((-3)*abs_q)/(2*p)*sqrt((-3)/p)));
        std::cout << "Уравнение имеет единственный корень: " << x1 << "\n";
    } else {
        std::cout << "Уравнение не имеет корней\n";
    }

    return 0;
}