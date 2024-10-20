#include <iostream>

int main() {

    int h1, m1, h2, m2, min1, min2;
    int res_min, res_h, res_m;

    std::cout << "Введите время начала решения задач (через пробел h1 m1): ";
    std::cin >> h1 >> m1;
    std::cout << "Введите время начала решения задач (через пробел h2 m2): ";
    std::cin >> h2 >> m2;

    min1 = h1*60 + m1;
    min2 = h2*60 + m2;

    if (min2 >= min1)
        res_min = min2 - min1;
    if (min2 < min1)
        res_min = 1440 - min1 + min2;

    res_h = res_min / 60;
    res_m = res_min % 60;

    if (res_h == 1 || res_h == 21)
        std::cout << "Студент батрачил " << res_h << " час " << res_m << " минут" << std::endl;
    else if (res_h == 0 || (res_h >= 5 && res_h <= 20))
        std::cout << "Студент батрачил " << res_h << " часов " << res_m << " минут" << std::endl;    
    else 
        std::cout << "Студент батрачил " << res_h << " часа " << res_m << " минут" << std::endl;    


    return 0;
}
