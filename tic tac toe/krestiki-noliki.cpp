#include <iostream>
#include <Windows.h>

using namespace std;


char currentMove = 'x';
char winner;
char SecondFigure = 'O';
char player_figure = 'x';
char cells[9] = { '-','-','-','-','-','-','-','-','-', };
int cell = player_figure;
int cell1 = SecondFigure;

#define RED "\033[31m"
#define BLUE "\033[34m"
#define ARMYAN "\033[36m"
string crossColor;
string circleColor;

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
    cout << "[*]Победа достигается при соединении диагональной, вертикальной либо косой линии на игровом поле\n";
}

void switchTurn() {
    if (currentMove == 'x') {
        currentMove = 'O';
    }
    else {
        currentMove = 'x';
    }
}

void playerFigure() {
    int option;
    cin >> option;
    if (option == 1) {
        player_figure = 'x';
        SecondFigure = 'O';
        cout << "Теперь вы играете за x";
        Sleep(2000);
    }
    else if (option == 2) {
        player_figure = 'O';
        SecondFigure = 'x';
        cout << "Теперь вы играете за O";
        Sleep(2000);

    }
    else {
        ErrorMessage();
    }
}

bool WinConditionX() {
    if (cells[0] == cells[4] && cells[4] == cells[8] && cells[0] == 'x' ||
        cells[2] == cells[4] && cells[4] == cells[6] && cells[2] == 'x' ||
        cells[0] == cells[3] && cells[3] == cells[6] && cells[0] == 'x' ||
        cells[1] == cells[4] && cells[4] == cells[7] && cells[1] == 'x' ||
        cells[2] == cells[5] && cells[5] == cells[8] && cells[2] == 'x' ||
        cells[0] == cells[1] && cells[1] == cells[2] && cells[0] == 'x' ||
        cells[3] == cells[4] && cells[4] == cells[5] && cells[3] == 'x' ||
        cells[6] == cells[7] && cells[7] == cells[8] && cells[6] == 'x'
        ) {
        winner = 'x';
        if (player_figure == 'x') {
            cout << "Вы победили ";
        }
        else {
            cout << "Вы проиграли ";
        }
        exit(1);
        return true;
    }
    else if
        (cells[0] == cells[4] && cells[4] == cells[8] && cells[0] == 'O' ||
            cells[2] == cells[4] && cells[4] == cells[6] && cells[2] == 'O' ||
            cells[0] == cells[3] && cells[3] == cells[6] && cells[0] == 'O' ||
            cells[1] == cells[4] && cells[4] == cells[7] && cells[1] == 'O' ||
            cells[2] == cells[5] && cells[5] == cells[8] && cells[2] == 'O' ||
            cells[0] == cells[1] && cells[1] == cells[2] && cells[0] == 'O' ||
            cells[3] == cells[4] && cells[4] == cells[5] && cells[3] == 'O' ||
            cells[6] == cells[7] && cells[7] == cells[8] && cells[6] == 'O'
            ) {
        winner = 'O';
        if (player_figure == 'O') {
            cout << "Вы победили ";
        }      
        else {
            cout << "Вы проиграли ";
        }
        exit(1);
        return true;
    }
    return false;
}
//смена крестика и нолика не работает , потому что я дурачёк и не понял как её нормально сделат(((
void Settings() {
    cout << "[1]Выбрать цвет крестика \n";
    cout << "[2]Выбрать цвет Нолика \n";
    cout << "[3]Выбрать кто первый ходит \n";
    cout << "[0] Назад \n";

    int j, colorOption;
    cin >> j;
    switch (j) {
    case 1:
        cout << "[1] Цвет красный \n";
        cout << "[2] Цвет синий \n";
        cout << "[3] Цвет армяновый \n";
        cin >> colorOption;

        switch (colorOption) {
        case 1:
            crossColor = RED, 'x';
            cout << "Цвет крестика теперь красный ";
            Sleep(1000);
            break;


        case 2:
            crossColor = BLUE, 'x';
            cout << "Цвет крестика теперь синий ";
            Sleep(1000);
            break;
        
        case 3:
        crossColor = ARMYAN, 'x';
        cout << "Цвет крестика теперь чёткий ";
        Sleep(1000);
        break;
    }
        break;
    case 2:
        cout << "[1] Цвет красный ";
        cout << "[2] Цвет синий ";
        cout << "[3] Цвет армяновый ";
        cin >> colorOption;
        switch (colorOption) {
        case 1:
            circleColor = RED, 'O';
            cout << "Цвет нолика теперь красный ";
            Sleep(1000);
            break;


        case 2:
            circleColor = BLUE, 'O';
            cout << "Цвет нолика теперь синий ";
            Sleep(1000);
            break;

        case 3:
            circleColor = ARMYAN, 'O';
            cout << "Цвет нолика теперь чёткий ";
            Sleep(1000);
            break;
        }
        break;

    case 3:
        cout << "Выберите фигуру за которую хотите играть: \n";
        cout << "[1]Крестик \n";
        cout << "[2]Нолик \n";
        cout << "Ваш выбор: ";
        playerFigure();
        break;
    default:
        ErrorMessage();
        break;
    }

}
void ProverkaX() {
    if (player_figure == 1) {
        while (cells[cell - 1] == 'x' || cells[cell1 - 1] == 'O') {
            cout << "Введите номер клетки, куда ходить  X: ";
            cin >> cell;

            cells[cell - 1] = 'x';
            clear();
            cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
            cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
            cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;
            WinConditionX();
        }
    }
    else if (player_figure == 2) {
        while (cells[cell - 1] == 'x' || cells[cell1 - 1] == 'O') {

            cout << "Введите номер клетки, куда ходить 0: ";
            cin >> cell1;

            cells[cell1 - 1] = 'O';
            clear();
            cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
            cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
            cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;
            WinConditionX();
        }

    }
}

void draw() {
    for (cell = 0; cell <= 9; cell++) {
        for (cell1 = 0; cell1 <= 9; cell1++) {
            if (cells[cell - 1] == 'x') {
                cout << crossColor + cells[cell - 1] << " ";
            }
            else if (cells[cell1 - 1] == 'O') {
                cout << circleColor + cells[cell - 1] << " ";
            }
        }
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


            while (!WinConditionX()) {
                for (int o = 0; o <= 9; o++) {
                    void draw();
                    if (player_figure == 'x') {
                        cout << "Введите номер клетки, куда ходить  X: ";
                        cin >> cell;
                        while (cells[cell - 1] == 'x' || cells[cell - 1] == 'O') {
                            cout << "Введите номер клетки, куда ходить  X: ";
                            cin >> cell;
                        }
                        cells[cell - 1] = 'x';
                        clear();
                        cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
                        cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
                        cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;
                        WinConditionX();
                        switchTurn();



                        cout << "Введите номер клетки, куда ходить 0: ";
                        cin >> cell1;
                        while (cells[cell1 - 1] == 'x' || cells[cell1 - 1] == 'O') {
                            cout << "Введите номер клетки, куда ходить  O: ";
                            cin >> cell1;
                        }
                        cells[cell1 - 1] = 'O';
                        clear();
                        cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
                        cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
                        cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;
                        WinConditionX();
                        switchTurn();
                    }
                    else {
                        void draw();
                        cout << "Введите номер клетки, куда ходить 0: ";
                        cin >> cell1;
                        while (cells[cell1 - 1] == 'x' || cells[cell1 - 1] == 'O') {                  
                            cout << "Введите номер клетки, куда ходить  O: ";
                            cin >> cell;
                        }
                        cells[cell1 - 1] = 'O';
                        clear();
                        cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
                        cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
                        cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;
                        WinConditionX();
                        switchTurn();

                        cout << "Введите номер клетки, куда ходить  X: ";
                        cin >> cell;
                        while (cells[cell - 1] == 'x' || cells[cell - 1] == 'O') {
                            cout << "Введите номер клетки, куда ходить  X: ";
                            cin >> cell;
                        }
                        cells[cell - 1] = 'x';
                        clear();
                        cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << " |" << endl;
                        cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << " |" << endl;
                        cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << " |" << "\n" << endl;
                        WinConditionX();
                        switchTurn();
                    }


                }
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
            Sleep(8000);
            break;

        }
        else {
            ErrorMessage();
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