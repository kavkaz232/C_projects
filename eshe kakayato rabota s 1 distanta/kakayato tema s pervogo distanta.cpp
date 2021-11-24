#include <iostream>

int main()
{
    setlocale(0, "");
    int n;
    std::cout << "Введите число от 1 до 4\n";
    std::cin >> n;
    if (n == 1) {
        std::cout << "Сейчас лето))";
    }
    else if (n == 2) {
        std::cout << "Сейчас осень, следует одеться тепло и взять с собой зонт";
    }
    else if (n == 3) {
        std::cout << "Сейчас зима, холода";
    }
    else if (n == 4) {
        std::cout << "Сейчас Весна";
    }
    else
        std::cout << "Надо ввести число от 1 до 4 бро((";
    return 0;
}