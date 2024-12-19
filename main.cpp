#include <iostream>

int main() {
    // Объявление переменных для чисел
    double num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    double sum = num1 + num2;
    std::cout << "Сумма чисел: " << sum << std::endl;
    return 0;
}
