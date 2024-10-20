// ax4 + bx2 + c = 0
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

    std::cout << "Введите коэффициенты уравнения четвертой степени ax^4 + bx^2 + c = 0 (через пробел): ";
    std::cin >> a >> b >> c;

    // at^2 + bt + c = 0
    D = b*b - 4*a*c;
    if (D < 0) {
        std::cout << "У уравнения нет корней \n";
    } else if (D == 0) {
        t1 = (-b) / (2*a);
        if (t1 > 0) {
            x1 = sqrt(t1);
            x2 = sqrt(t2);
            std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";
        }
        else if (t1 == 0) {
            std::cout << " Уравнение имеет единственный корень: 0 \n";
        } else {
            std::cout << "У уравнения нет корней \n";
        }
    } else {
        t1 = (-b + sqrt(D)) / (2*a);
        t2 = (-b - sqrt(D)) / (2*a);

        if (t1 >= 0) {
            if (t1 > 0) {
                if (t2 > 0) {
                    x1 = sqrt(t1);
                    x2 = -sqrt(t1);
                    x3 = sqrt(t2);
                    x4 = -sqrt(t2);
                    std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << " " << x4 << "\n";
                } else if (t2 == 0) {
                    x1 = sqrt(t1);
                    x2 = -sqrt(t1);
                    x3 = 0;      
                    std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << "\n";          
                } else {
                    x1 = sqrt(t1);
                    x2 = -sqrt(t1);
                    std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << "\n";   
                }
            } else {
                x1 = 0;

                if (t2 > 0) {
                    x2 = sqrt(t2);
                    x3 = -sqrt(t2);
                    std::cout << "Корни уравнения: " << x1 << " " << x2 << " " << x3 << "\n";
                } else if (t2 == 0) {
                    x2 = 0;
                    std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";          
                } else {
                    std::cout << "Уравнение имеет единственный корень: 0 \n";
                }
            }
        } else if (t2 >= 0) {
            if (t2 > 0) {
                x1 = sqrt(t2);
                x2 = -sqrt(t2);
                std::cout << "Корни уравнения: " << x1 << " " << x2 << "\n";
            } else {
                x1 = 0;
                std::cout << "Уравнение имеет единственный корень: 0 \n";
            }
        }
    }


    return 0;
}
