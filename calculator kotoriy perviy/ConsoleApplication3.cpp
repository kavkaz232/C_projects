#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");

    //Калькулятор

    cout << "[0_0] Калькулятор " << endl << endl;
    cout << "[+] Сложение" << endl << endl;
    cout << "[-] Вычитание" << endl << endl;
    cout << "[*] Умножение" << endl << endl;
    cout << "[/] Деление" << endl << endl;
    cout << "[%] Деление с остатком" << endl << endl;
    cout << "[^] Округление Числа " << endl << endl;
    cout << "[&] Квадратный корень " << endl << endl;
    cout << "[|] Кубический корень " << endl << endl;
    cout << "Введите операцию: " << endl << endl;
    char operation;
    cin >> operation;
    double number1;
    double number2;
    int number3;
    int number4;
    if (operation == '+') {
        cout << "Введите первое число: ";
        cin >> number1;

        cout << "Введите второе число: ";
        cin >> number2;
        cout << "[0_0] Результат: " << number1 + number2 << endl;
    }
    else if (operation == '-') {
        cout << "Введите первое число: ";
        cin >> number1;

        cout << "Введите второе число: ";
        cin >> number2;
        cout << "[0_0] Результат: " << number1 - number2 << endl;
    }
    else if (operation == '*') {
        cout << "Введите первое число: ";
        cin >> number1;

        cout << "Введите второе число: ";
        cin >> number2;
        cout << "[0_0] Результат: " << number1 * number2 << endl;
    }
    else if (operation == '/') {
        cout << "Введите первое число: ";
        cin >> number1;

        cout << "Введите второе число: ";
        cin >> number2;
        cout << "[0_0] Результат: " << number1 / number2 << endl;
    }
    else if (operation == '%') {
        cout << "Введите первое число: ";
        cin >> number3;

        cout << "Введите второе число: ";
        cin >> number4;
        cout << "[0_0] Результат: " << number3 % number4 << endl;
    }
    else if (operation == '^') {
        cout << "Введите число: ";
        cin >> number1;
        cout << "[0_0] Результат: " << round(number1) << endl;
    }
    else if (operation == '&') {
        cout << "Введите число: ";
        cin >> number1;
        cout << "[0_0] Результат: " << sqrt(number1) << endl;
    }
    else if (operation == '|') {
        cout << "Введите число: ";
        cin >> number1;
        cout << "[0_0] Результат: " << cbrt(number1) << endl;
    }
    else {
        cout << "Вы ввели некорректное число ";
    }
    return 0;
}