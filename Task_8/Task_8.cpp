#include <iostream>


// Power function
double pow(double x, int n) {
    
    double result = 1;
    
    for (int i = 0; i < n; i++) {
        result *= x;
    }

    return result;
}


// Square root function with binary search
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


// Factorial function
/*
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}
*/


// Sine function using Taylor Series
double sin(double r) {
    int sign = -1, f = 2;
    double T = r, result = r;

    for (int i = 0; i < 10; i++) {
        T *= pow(r,2) / (f * (f+1));
        f += 2;
        result += sign * T;
        sign = -sign;
    }

    return result;
}


// Cosine function using Taylor Series
double cos(double r) {
    int sign = -1, f = 1;
    double T = 1, result = 1;

    for (int i = 0; i < 10; i++) {
        T *= pow(r,2) / (f * (f+1));
        f += 2;
        result += sign * T;
        sign = -sign;
    }

    return result;
}


// Arccosine function using cosine function
double acos(double x) {
    double start = 0, end = 3.1415, result;

    while (start <= end) {
        result = (start + end) / 2;
        if (cos(result) > x) start += 0.001;
        else end -= 0.001;
    }

    return result;
}


int main() {

    double x1, y1, x2, y2, x3, y3;
    double a, b, c;
    double h1, h2, h3;
    double m1, m2, m3;
    double l1, l2, l3;
    double ang_a, ang_a_deg, ang_b, ang_b_deg, ang_c, ang_c_deg;
    double r, R, L_r, L_R, S_r, S_R;

    double P, p, S_G, S_sin, S_h;

    // Input data
    std::cout << "Введите координаты x1 и y1 первой точки (через пробел): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты x2 и y2 второй точки (через пробел): ";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты x3 и y3 третьей точки (через пробел): ";
    std::cin >> x3 >> y3;

    // The sides of the triangle
    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    std::cout << "Стороны треугольника: \n";
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    // Looking for the angles of the triangle for using them in the next searchings
    ang_a = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2*b*c));
    ang_a_deg = 180 / 3.1415 * ang_a;
    ang_b = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2*a*c));
    ang_b_deg = 180 / 3.1415 * ang_b;
    ang_c = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2*a*b));
    ang_c_deg = 180 / 3.1415 * ang_c;

    // The heights of the triangle
    h1 = c * sin(ang_b); // falls on a
    h2 = c * sin(ang_a); // falls on b
    h3 = b * sin(ang_a); // falls on c

    std::cout << "Длины высот треугольника: " << std::endl;
    std::cout << "h1 = " << h1 << ", h2 = " << h2 << ", h3 = " << h3 << std::endl;

    // The medians of the triangle
    m1 = sqrt(2*pow(b, 2) + 2*pow(c, 2) - pow(a, 2)) / 2; // falls on a
    m2 = sqrt(2*pow(a, 2) + 2*pow(c, 2) - pow(b, 2)) / 2; // falls on b
    m3 = sqrt(2*pow(a, 2) + 2*pow(b, 2) - pow(c, 2)) / 2; // falls on c

    std::cout << "Длины медиан треугольника: " << std::endl;
    std::cout << "m1 = " << m1 << ", m2 = " << m2 << ", m3 = " << m3 << std::endl;

    // The bisectors of the triangle
    l1 = b*c*cos(ang_a / 2) / (b + c); // falls on a
    l2 = a*c*cos(ang_b / 2) / (a + c); // falls on b
    l3 = a*b*cos(ang_c / 2) / (a + b); // falls on c

    std::cout << "Длины биссектрис треугольника: " << std::endl;
    std::cout << "l1 = " << l1 << ", l2 = " << l2 << ", l3 = " << l3 << std::endl;

    // An output of the angles
    std::cout << "Величины углов треугольника: " << std::endl;
    std::cout << "A = " << ang_a << "rad = " << ang_a_deg << "deg, ";
    std::cout << "B = " << ang_b << "rad = " << ang_b_deg << "deg, ";  
    std::cout << "C = " << ang_c << "rad = " << ang_c_deg << "deg" << std::endl;  

    // The square of the triangle in three ways and the perimeter
    S_h = (a*h1) / 2;
    S_sin = a*b*sin(ang_c) / 2;
    P = a + b + c;
    p = P / 2;
    S_G = sqrt(p*(p - a)*(p - b)*(p - c));

    // The radiuses of circumscribed and inscribed circles of the triangle
    R = a / (2*sin(ang_a));
    r = S_G / p;

    std::cout << "Радиусы описанной и вписанной окружностей: " << std::endl;
    std::cout << "R = " << R << ", r = " << r << std::endl;

    // The lenghts and the squares of the circles
    L_r = 6.283 * r;
    L_R = 6.283 * R;
    S_r = 3.1415 * pow(r, 2);
    S_R = 3.1415 * pow(R, 2);

    std::cout << "Длина и площадь вписанной окружности: " << std::endl;
    std::cout << "l = " << L_r << ", Sr = " << S_r << std::endl;
    std::cout << "Длина и площадь описанной окружности: " << std::endl;
    std::cout << "L = " << L_R << ", SR = " << S_R << std::endl;

    // An output of the perimeter and square of the triangle
    std::cout << "Периметр треугольника P = " << P << std::endl;
    std::cout << "Площадь через формулу Герона: " << S_G << std::endl;
    std::cout << "Площадь через произведение высоты на основание: " << S_h << std::endl;
    std::cout << "Площадь через произведение сторон друг на друга и на синус угла между ними: " << S_sin << std::endl;


    return 0;
}