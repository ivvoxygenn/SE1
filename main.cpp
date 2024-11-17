#include <iostream>
using namespace std;
int main() {
    system("chcp 1251");
    int num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Разность чисел: " << num1 - num2 << std::endl;
    return 0;
}
