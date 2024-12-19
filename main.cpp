// Программа является учебной. Иванов КЭ-217

#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    double sum = num1 + num2;
    double difference = num1 - num2;
    std::cout << "Сумма чисел: " << sum << std::endl;
    std::cout << "Разность чисел: " << difference << std::endl;
    return 0;
}
