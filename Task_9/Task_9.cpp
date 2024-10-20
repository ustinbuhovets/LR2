#include <iostream>
#include <cmath>


// Euler's Totient function
double phi(int x) {
    
    double result = x;

    for (int p = 2; p*p <= x; p++) {
        if (x % p == 0) {
            while (x % p == 0) 
                x /= p;
            result *= (1.0 - (1.0 / float(p)));
        }
    }

    if (x > 1)
        result -= result / x;

    return int(result);
}

int main() {

    double a = rand()%100 + 1, c = rand()%100 + 1, x, z, y;
    int choice;

    std::cout << "Выберите аргумент функции (введите целое число): 1 - 2x, 2 - x^3, 3 - x/3. " << std::endl << "Выбор: ";
    std::cin >> choice;
    std::cout << "Введите z: ";
    std::cin >> z;

    x = (z >= 0) ? (2*z + 1) : (log(z*z - z));

    if (z >= 0) 
        std::cout << "z >= 0 ==> x = 2z + 1 = " << x << std::endl;
    else
        std::cout << "z < 0 ==> x = ln(z^2 - z) = " << x << std::endl;

    switch (choice) {
        
        case 1:
            x *= 2;
            std::cout << "При аргументе функции 2x = " << x << ", значение функции ";
            break;
        case 2:
            x = pow(x, 3);
            std::cout << "При аргументе функции x^3 = " << x << ", значение функции ";
            break;
        case 3:
            x /= 3;
            std::cout << "При аргументе функции x/3 = " << x << ", значение функции ";
            break;
        default:
            std::cout << "При аргументе функции x = " << x << ", значение функции ";
    }
    
    y = pow(sin(phi(x)), 2) + a*pow(cos(pow(x, 3)), 5) + c*log(pow(x, 0.4));


    std::cout << "y = sin^2(phi(x)) + a*cos^5(x^3) + c*ln(x^(2/5)) = " << y << std::endl;
    

    return 0;
}
