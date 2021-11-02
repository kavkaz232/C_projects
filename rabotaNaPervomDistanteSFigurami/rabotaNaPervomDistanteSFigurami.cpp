#include <iostream>

using namespace std;

int main() {
    system("color F0");
    setlocale(0, "");
    cout << "[!] Программа \"Фигуры\"\n\n";
    cout << "[1] Линия\n";
    cout << "[2] Квадрат\n";
    cout << "[3] Прямоугольник\n\n";
    cout << "[!] Выберите Фигуру: ";
    short figure;
    cin >> figure;
    int a;
    a = 0;
    int b;
    if (figure == 1) {
        cout << "[!] Фигура \"Линия\" \n\n";
        cout << "[!] Выберите текстуру: ";
        char texture;
        cin >> texture;


        cout << "[!] Выберите размер4ик: ";
        short size;
        cin >> size;

        cout << "[^] Чисто вверх\n";
        cout << "[>] Чисто в линию\n";
        cout << "[!] Выберите Направление: ";
        char direction;
        cin >> direction;

        cout << "\n[!] Результат: \n\n";
        int result = 0;
        if (direction == '>') {
            while (result < size) {
                cout << texture << " ";
                result++;

            }
        }
        else if (direction == '^') {
            while (result < size) {
                cout << texture << "\n";
                result++;
            }
        }
        else cout << "так нельзя делат((( ";

    }
    //квадрат
    else if (figure == 2) {
        cout << "[!] Фигура \"Квадрат\" \n\n";
        cout << "[!] Выберите текстуру: ";
        char texture;
        cin >> texture;
        cout << "[!] Выберите размер4ик: ";
        short size;
        cin >> size;
        cout << "[v] Заполненный \n";
        cout << "[e]  Пустой \n";
        cout << "[!] Выберите Направление: ";
        char direction;
        cin >> direction;
        if (direction == 'v') {
            while (a < size) {
                b = 0;
                while (b < size) {
                    cout << texture;
                    b++;
                }
                cout << "\n";
                a++;
            }
            while (size <= 0) {
                cout << "Вы ввели отрицательное число либо 0 , так нельзя делат((( ";
                size++;
            }


        }

        else if (direction == 'e')
        {
            while (a < size) {
                b = 0;
                while (b < size) {

                    if (a == 0 || a == size - 1) {
                        cout << texture;
                        b++;
                    }
                    else if (b == 0 || b == size - 1) {
                        cout << texture;
                        b++;
                    }

                    else {
                        cout << " ";
                        b++;
                    }


                }

                cout << "\n";
                a++;
            }
            if (size <= 0) {
                cout << "Вы ввели отрицательное число либо 0 , так нельзя делат((( ";
                size++;
            }
        }

    }
    //прямоугольник
    else if (figure == 3) {
        cout << "[!] Фигура \"Прямоугольник\" \n\n";
        cout << "[!] Выберите текстуру: ";
        char texture;
        cin >> texture;
        cout << "[!] Выберите длину: ";
        short size;
        cin >> size;
        cout << "[!] Выберите ширину: ";
        short size1;
        cin >> size1;
        cout << "[v] Заполненный \n";
        cout << "[e]  Пустой \n";
        cout << "[!] Выберите Направление: ";
        char direction;
        cin >> direction;
        if (direction == 'v') {
            while (a < size) {
                b = 0;
                while (b < size1) {
                    cout << texture;
                    b++;
                }
                cout << "\n";
                a++;
            }
            while ((size <= 0) || size1 <= 0) {
                cout << "Вы ввели отрицательное число либо 0 , так нельзя делат((( ";
                size++;
            }


        }

        else if (direction == 'e')
        {
            while (a < size) {
                b = 0;
                while (b < size1) {

                    if (a == 0 || a == size - 1) {
                        cout << texture;
                        b++;
                    }
                    else if (b == 0 || b == size1 - 1) {
                        cout << texture;
                        b++;
                    }

                    else {
                        cout << " ";
                        b++;
                    }


                }

                cout << "\n";
                a++;
            }
            if ((size <= 0) || size1 <= 0) {
                cout << "Вы ввели отрицательное число либо 0 , так нельзя делат((( ";
                size++;
            }
        }
        return 0;
    }

}