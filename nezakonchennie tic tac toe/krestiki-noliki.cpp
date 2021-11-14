#include <iostream>

using namespace std;
int crosscolor;

int cell;
int cell1;
char cells[9] = { '-','-','-','-','-','-','-','-','-', };
int clear() {
    return system("cls");
}
int changeColortext() {
    return system("Color 01");
}
void ErrorMessage() {
    cout << "Вы ввели неккоректное число\n ";
}
void Rules() {
    cout << "[*]Крестики нолики Логическая игра между двумя противниками на квадратном поле\n";
    cout << "[*]Один из игроков играет крестиками второй - ноликами\n";
    cout << "[*]При игре с ботом Игрок управляет только крестиком либо ноликом\n";
    cout << "[*]Победа достигаеться при соединении диагональной, вертикальной либо косой линии на игровом поле\n";
}


void Settings() {
    cout << "[1]Выбрать цвет крестика \n";
    cout << "[2]Выбрать цвет Нолика \n";
    cout << "[3]Выбрать кто первый ходит \n";
    cout << "[4]Выбрать размер поля \n";
    cout << "[0] Назад \n";

    int j;
    cin >> j;
    switch (j) {
    case 1:
        cout << "[1] Цвет красный ";
        cout << "[2] Цвет синий ";
        cout << "[3] Цвет армяновый ";
        switch (crosscolor) {
        case 1:
            if (j == 1) {
             
            }
            break;

        }
        break;
    case 2:
        cout << "[1] Цвет красный ";
        cout << "[2] Цвет синий ";
        cout << "[3] Цвет армяновый ";
        break;
        
    case 3:

        break;
    case 4:

        break;
    case 0:

        break;
    default:
        ErrorMessage();
    }

}
void Startmenu() {
    clear();
    cout << "\t\t\t\t\t\tИгра крестики-нолики\n\n";

    cout << "Меню \n\n";
    cout << "[1]Начать игру \n";
    cout << "[2]Наcтройки \n";
    cout << "[3]Правила \n";
    cout << "[4]Бежать с позором \n";

    int Menu;
    cin >> Menu;
    switch (Menu) {

    case 1:
        if (Menu == 1) {
            clear();
            cout << "------------" << "\n" << endl;
            cout << "Номера клеток:" << endl;
            cout << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << " |" << endl;
            cout << "-" << 4 << "-" << '|' << "-" << 5 << "-" << '|' << "-" << 6 << "-" << " |" << endl;
            cout << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << " |" << "\n" << endl;


            cout << "Игровое поле (--- пусто):" << endl;
            cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
            cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
            cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;

            cout << "------------\n" << endl;



            for (int o = 0; o <= 9; ++o) {
                cout << "Введите номер клетки, куда ходить  X: ";
                cin >> cell;
                cells[cell - 1] = 'x';

                cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
                cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
                cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;



                cout << "Введите номер клетки, куда ходить 0: ";
                cin >> cell1;
                cells[cell1 - 1] = '0';

                cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
                cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
                cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;


            }
        }
        break;

    case 2:
        if (Menu == 2) {
            clear();
            Settings();
            break;
        }
    case 3:
        if (Menu == 3) {
            clear();
            Rules();
            break;
        }
    case 4:
        clear();
        cout << "Трусишка ";
        exit(133);   
        break;
    }

}

        int main() {      
            setlocale(0, "");
            while (true) {
                Startmenu();         
            }
            return 0;
        }