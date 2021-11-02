#include <iostream>
using namespace std;


int clear() {
    return system("cls");
}
int changeColortext() {
    return system("Color 01");
}
int changeColorConsole() {
    return system("Color 3F");
}
int getSizeInt() {
    cout << "Размер Выбранного типа данных: ";
    return sizeof(int);
}
bool getSizeBool() {
    cout << "Размер Выбранного типа данных: ";
    return sizeof(bool);
}
double getSizedouble() {
    cout << "Размер Выбранного типа данных: ";
    return sizeof(double);
}
float getSizefloat() {
    cout << "Размер Выбранного типа данных: ";
    return sizeof(float);
}
void getsizechar() {
    cout << "Размер Выбранного типа данных: " << sizeof(char);
}
void hellofunction() {
    cout << "Дарова, я функция";
}
void ShowMeTheKvadratDude() {
    int a = 0,
        b = 0;
    int size = 5;
    char texture = '%';
    while (a < size) {
        b = 0;
        while (b < size) {
            cout << texture;
            b++;
        }
        cout << "\n";
        a++;
    }
}

int main()
{
    setlocale(0, "");

    cout << "[!] \t\t\t\tПрограмма \n\n";
    cout << "[!] \t\t\t\tВыберите число от 1 до 10 \n\n";
    cout << "[!] [1]Очищение консоли \n";
    cout << "[!] [2]Изменение цвета текста \n";
    cout << "[!] [3]Изменение текста консоли \n";
    cout << "[!] [4]Размер типа данных int \n";
    cout << "[!] [5]Размер типа данных bool \n";
    cout << "[!] [6]Размер типа данных double\n";
    cout << "[!] [7]Размер типа данных float \n";
    cout << "[!] [8]Размер типа данных char \n";
    cout << "[!] [9]Вывод сообщения \n";
    cout << "[!] [10]Вывод квадрата \n\n\n";
    cout << "[!] : ";

    for (int i = 0; i < 12; i++) {
        cin >> i;
        if (i == 1) {
            clear();
        }
        else if (i == 2) {
            changeColortext();
        }
        else if (i == 3) {
            changeColorConsole();
        }
        else if (i == 4) {
            cout << getSizeInt() << endl;
        }
        else if (i == 5) {
            cout << getSizeBool() << endl;
        }
        else if (i == 6) {
            cout << getSizedouble() << endl;
        }
        else if (i == 7) {
            cout << getSizefloat() << endl;
        }
        else if (i == 8) {
            getsizechar();
        }
        else if (i == 9) {
            hellofunction();
        }
        else if (i == 10) {
            ShowMeTheKvadratDude();
        }
        else {
            cout << "так нельзя делат((( ";
        }
        return 0;
    }


}