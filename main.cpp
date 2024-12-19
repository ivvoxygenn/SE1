// Программа является учебной.
// Автор - Иванов Максим
// Группа - КЭ-217
//Дата - 19.12.2024

#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    std::cout << "Сумма чисел: " << sum << std::endl;
    std::cout << "Разность чисел: " << difference << std::endl;
    std::cout << "Произведение чисел: " << product << std::endl;
    return 0;
}
