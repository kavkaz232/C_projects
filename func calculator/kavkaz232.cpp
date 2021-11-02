// kavkaz232.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;
void errormessage() {
	cout << " чёт не так";
}

float mathH(float num1, char operation) {
	switch (operation)
	{
	case '1': return round(num1);
	case '2': return sqrt(num1);
	case '3': return cbrt(num1);
	case '4': return log(num1);
	default: return 0;
	}
	
}

float calcNumber(float num1, float num2, char operation) {
	if (operation == '/' && num2 == 0) return 0;
	switch (operation)
	{
	case '+': return num1 + num2;
	case '-': return num1 - num2;
	case '*': return num1 * num2;
	case '/': return num1 / num2;
	default: return 0;
	}
}

int main() {
	setlocale(0, "");
	cout << "\t\t\t\t[!]Калькулятор[!]\n\n\n";
	cout << "[!]Список операций:\n\n";
	cout << "[+]Сложение\n";
	cout << "[-]Вычитание\n";
	cout << "[*]Умножение\n";
	cout << "[/]Деление\n";
	cout << "[1]Округление числа\n";
	cout << "[2]Квадратный корень\n";
	cout << "[3]Кубический корень\n";
	cout << "[4]Натуральный Логарифм\n";
	cout << "\t[!]Выберите операцию:  ";
	char operation;
	cin >> operation;

	if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
		cout << "[*]Введите первое число: ";
		float num1;
		cin >> num1;

		cout << "[*]Введите второе число: ";
		float num2;
		cin >> num2;
		cout << "[*] Результат: " << calcNumber(num1, num2, operation) << endl;
	}
	else if (operation == '1'|| operation == '2' || operation == '3' || operation == '4') {
		cout << "[*]Введите первое число: ";
		float num1;
		cin >> num1;
		cout << "[*] Результат: " << mathH(num1, operation) << endl;
	}
	else {
		errormessage();
	}
	return 0;
}
	
	

	
