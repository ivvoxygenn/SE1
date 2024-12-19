// Программа является учебной.
// Автор - Иванов Максим КЭ-217.

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
    double quotient = 0;
    if (num2 != 0) {
        quotient = num1 / num2;
        std::cout << "Частное чисел: " << quotient << std::endl;
    }
    else {
        std::cout << "Ошибка: деление на ноль!" << std::endl;
    }

    std::cout << "Сумма чисел: " << sum << std::endl;
    std::cout << "Разность чисел: " << difference << std::endl;
    std::cout << "Произведение чисел: " << product << std::endl;

    return 0;
}
