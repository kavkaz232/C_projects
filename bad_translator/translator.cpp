#include <iostream>

using namespace std;

int main() {
    system("color F0");
    setlocale(0, "");
    char symbol;
    short word;
    char language;
    cout << "Добро пожаловать в мини переводчик)))\n";
    cout << "Выберите язык\n";
    cout << "[r] Russian\n";
    cout << "[e] English\n";

    cin >> language;
    switch (language)
    {
    case 'r':

        cout << "[w] Вывести список слов\n";
        cout << "Выберите действие: ";
        cin >> symbol;


        switch (symbol)
        {
        case 'w':
            cout << "[1] Соль\n";
            cout << "[2] Перец\n";
            cout << "[3] Лук\n";
            cout << "[4] Чеснок\n";
            cout << "[5] Морковка\n";
            cout << "[6] Помидор\n";
            cout << "[7] Чибаклан\n";
            cout << "[8] Сахар\n";
            cout << "[9] Баклажан\n";
            cout << "[10] Малина\n";
            cout << "[11] Арбуз\n";
            cout << "[12] Клубника\n";
            cout << "[13] Земляника\n";
            cout << "[14] Черника\n";
            cout << "[15] Брусника\n";
            cout << "[16] Яблоко\n";
            cout << "[17] Груша\n";
            cout << "[18] Варенье\n";
            cout << "[19] Сок\n";
            cout << "[20] Нож\n";
            cout << "Выберите интересующее вас слово и программа переведёт его для вас\n";
            cin >> word;
            switch (word)
            {
            case 1:
                cout << "[!]Salt";
                break;
            case 2:
                cout << "[!]pepper";
                break;
            case 3:
                cout << "[!]onion";
                break;
            case 4:
                cout << "[!]Garlic";
                break;
            case 5:
                cout << "[!]Carrot";
                break;
            case 6:
                cout << "[!]Tomato";
                break;
            case 7:
                cout << "[!]Chibaclan";
                break;
            case 8:
                cout << "[!]sugar";
                break;
            case 9:
                cout << "[!]Eggplant";
                break;
            case 10:
                cout << "[!]Raspberry";
                break;
            case 11:
                cout << "[!]Watermelon";
                break;
            case 12:
                cout << "[!]Strawberry";
                break;
            case 13:
                cout << "[!]strawberry";
                break;
            case 14:
                cout << "[!]Blueberries";
                break;
            case 15:
                cout << "[!]Lingonberry";
                break;
            case 16:
                cout << "[!]Apple";
                break;
            case 17:
                cout << "[!]Pear";
                break;
            case 18:
                cout << "[!]Jam";
                break;
            case 19:
                cout << "[!]juice";
                break;
            case 20:
                cout << "[!]knife";
                break;

            default:
                cout << "Так нельзя(((";
                break;

            }

        }
        break;
        {
        case 'e':

            cout << "[w] Output a list of words\n";
            cout << "Select an action: ";
            cin >> symbol;

            switch (symbol)
            {
            case 'w':
                cout << "[1] Salt\n";
                cout << "[2] pepper\n";
                cout << "[3] onion\n";
                cout << "[4] Garlic\n";
                cout << "[5] Carrot\n";
                cout << "[6] Tomato\n";
                cout << "[7] Chibaclan\n";
                cout << "[8] sugar\n";
                cout << "[9] Eggplant\n";
                cout << "[10] Raspberry\n";
                cout << "[11] Watermelon\n";
                cout << "[12] Strawberry\n";
                cout << "[13] strawberry\n";
                cout << "[14] Blueberries\n";
                cout << "[15] Lingonberry\n";
                cout << "[16] Apple\n";
                cout << "[17] Pear\n";
                cout << "[18] Jam\n";
                cout << "[19] juice\n";
                cout << "[20] knife\n";
                cout << "Select the word you are interested in and the program will translate it for you\n";
                cin >> word;
                switch (word)
                {
                case 1:
                    cout << "[!]Соль";
                    break;
                case 2:
                    cout << "[!]Перец";
                    break;
                case 3:
                    cout << "[!]Лук";
                    break;
                case 4:
                    cout << "[!]Чеснок";
                    break;
                case 5:
                    cout << "[!]Морковка";
                    break;
                case 6:
                    cout << "[!]Помидор";
                    break;
                case 7:
                    cout << "[!]чибаклан";
                    break;
                case 8:
                    cout << "[!]сахар";
                    break;
                case 9:
                    cout << "[!]Баклажан";
                    break;
                case 10:
                    cout << "[!]Малина";
                    break;
                case 11:
                    cout << "[!]Арбуз";
                    break;
                case 12:
                    cout << "[!]клубника";
                    break;
                case 13:
                    cout << "[!]земляника";
                    break;
                case 14:
                    cout << "[!]Черника";
                    break;
                case 15:
                    cout << "[!]брусника";
                    break;
                case 16:
                    cout << "[!]яблоко";
                    break;
                case 17:
                    cout << "[!]Груша";
                    break;
                case 18:
                    cout << "[!]Варенье";
                    break;
                case 19:
                    cout << "[!]сок";
                    break;
                case 20:
                    cout << "[!]нож";
                    break;

                default:
                    cout << "you can't do that(((\n";
                    break;
                }

                return 0;
            }
        }
    }
}