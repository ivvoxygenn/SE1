#include <iostream>
using namespace std;
int main() {
    system("chcp 1251");
    int num1, num2;
    std::cout << "������� ������ �����: ";
    std::cin >> num1;
    std::cout << "������� ������ �����: ";
    std::cin >> num2;
    std::cout << "�������� �����: " << num1 - num2 << std::endl;
    return 0;
}
