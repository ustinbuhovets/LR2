// ax4 + bx3 + cx2 + bx + a = 0
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

int main() {

    double a, b, c, D, x1, x2, x3, x4, t1, t2;

    std::cout << "Введите коэффициенты уравнения четвертой степени ax^4 + bx^3 + cx^2 + bx + a = 0 (через пробел): ";
    std::cin >> a >> b >> c;

    // x*(bx^2 + cx + b) = 0
    if (a == 0 && b != 0) {
        x1 = 0;
        D = c*c - 4*b*b;
        if (D < 0) {
            std::cout << "Уравнение имеет единственный корень: 0 \n";
        } else if (D == 0) {
            x2 = (-c) / (2*b);
            std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";
        }

        return 0;
    } else if (a == 0 && b == 0 && c != 0) {
        std::cout << "Уравнение имеет единственный корень: 0 \n";       
        return 0; 
    } else if (a == 0 && b == 0 && c == 0) {
        std::cout << "Равенство справедливо при любом x \n";
        return 0;
    }


    // at^2 + bt + c = 0        t = (x + 1/x)
    D = b*b - 4*a*c;
    if (D < 0) {
        std::cout << "Уравнение не имеет корней \n";
    } else if (D == 0) {
        t1 = (-b) / (2*a);
        
        // x + 1/x = t   ==>  x^2 - tx + 1 = 0
        D = t1*t1 - 4;
        if (D < 0) {
            std::cout << "Уравнение не имеет корней \n";
        } else if (D == 0) {
            x1 = t1 / 2;
            std::cout << "Уравнение имеет единственный корень: " << x1 << "\n";
        } else {
            x1 = (t1 + sqrt(D)) / 2;
            x2 = (t1 - sqrt(D)) / 2;
            std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";
        }
    } else {
        t1 = (-b + sqrt(D)) / (2*a);
        t2 = (-b - sqrt(D)) / (2*a);

        //x^2 - t1x + 1 = 0
        D = t1*t1 - 4;
        if (D < 0) {
            D = t2*t2 - 4;
            if (D < 0) {
                std::cout << "Уравнение не имеет корней \n";
            } else if (D == 0) {
                x1 = t2 / 2;
                std::cout << "Уравнение имеет единственный корень: " << x1 << "\n";
            } else {
                x1 = (t2 + sqrt(D)) / 2;
                x2 = (t2 - sqrt(D)) / 2;
                std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";
            }
        } else if (D == 0) {
            x1 = t1 / 2;

            D = t2*t2 - 4;
            if (D < 0) {
                std::cout << "Уравнение имеет единственный корень: " << x1 << "\n";
            } else if (D == 0) {
                x2 = t2 / 2;
                std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";
            } else {
                x2 = (t2 + sqrt(D)) / 2;
                x3 = (t2 - sqrt(D)) / 2;
                std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << "\n";  
            }         
        } else {
            x1 = (t1 + sqrt(D)) / 2;
            x2 = (t1 - sqrt(D)) / 2;

            D = t2*t2 - 4;
            if (D < 0) {
                std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";
            } else if (D == 0) {
                x3 = t2 / 2;
                std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << "\n";  
            } else {
                x3 = (t2 + sqrt(D)) / 2;
                x4 = (t2 - sqrt(D)) / 2;
                std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << " " << x4 << "\n";  
            }  
        } 

    }


    return 0;
}
