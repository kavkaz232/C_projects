#include <iostream>
#include <Windows.h>
#include <string>

#define in std::cin
#define out std::cout
#define clear system("cls")
#define change_bg system("color 02")

int numberOfQuestions = 5;
int amountOfAttempts = 3;
bool helpOfAFriend = false;

std::string questions[15] = { "Где находится Кавказ? ",
                             "Кто такой Наполеон?",
                             "Как по буржуйски будет <Повелитель преисподней>?",
                             "Какую фразу сказал Юлий цезарь при переходе через реку Рубикон ",
                             "Как появилось мёртвое море?",
                             "Как написать ноль римскими цифрами?",
                             "Почему 11 не произносится как восемнадцать?",
                             "Какой шанс нападения на тебя акулы в воде?",
                             "Как узнать который сейчас час?",
                             "Что такое зеркало?",
                             "Кто такой S1mple?",
                             "Что такое Теоцентризм?",
                             "Кто такой Эмануэль Кант",
                             "Что такое нейронная сеть",
                             "Кто такой крыса?" };

int previousQuestions[15];

void error() {
    clear;
    out << "Так нельзя делат(((";
    Sleep(1500);
}

void success(std::string option, std::string status) {
    clear;
    out << option << " теперь " << status;
    Sleep(1500);
}
// Да, я крыса сделал через костыль, ну а кому сейчас легко
bool helpOfAFriendOn(int question) {
    if (helpOfAFriend == true) {
        int answerWithHelp;
        switch (question)
        {
        case 0:
            out << "[3]В России\n";
            out << "[4]Я чё знаю я с украины\n";
            in >> answerWithHelp;
            if (answerWithHelp == 3) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 1:
            out << "[1]Торт\n";
            out << "[2]Император французов\n";
            in >> answerWithHelp;
            if (answerWithHelp == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 2:
            out << "[1]Povelitel Preispodney\n";
            out << "[2]lord of the underworld\n";
            in >> answerWithHelp;
            if (answerWithHelp == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 3:
            out << "[1]Жребий брошен\n";
            out << "[2]Монета уплачена\n";
            in >> answerWithHelp;
            if (answerWithHelp == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 4:
            out << "[1]Я убил\n";
            out << "[4]В результате тектонического процесса на месте раскола Евразии и Африки\n";
            in >> answerWithHelp;
            if (answerWithHelp == 4) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 5:
            out << "[1]0\n";
            out << "[2]NOL'\n";
            in >> answerWithHelp;
            if (answerWithHelp == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 6:
            out << "[1]11 не 18\n";
            out << "[3]разные числа\n";
            in >> answerWithHelp;
            if (answerWithHelp == 3) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 7:
            out << "[1]больше , чем шанс нападения обезьяны под водой\n";
            out << "[2]5 %\n";
            in >> answerWithHelp;
            if (answerWithHelp == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 8:
            out << "[1]Посмотреть на часы\n";
            out << "[3]Стать богом и самому создать время\n";
            in >> answerWithHelp;
            if (answerWithHelp == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 9:
            out << "[1]Штука, которая создаёт теневого клона\n";
            out << "[3]Гладкая поверхность, предназначенная для отражения света.\n";
            in >> answerWithHelp;
            if (answerWithHelp == 3) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 10:
            out << "[3]Кс'ер\n";
            out << "[4]Философ и учитель математических наук в Городе Марсшалат\n";
            in >> answerWithHelp;
            if (answerWithHelp == 3) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 11:
            out << "[3]Возвышение бога\n";
            out << "[4]Одна из основных крупных частей суши, омываемая океанами и морями\n";
            in >> answerWithHelp;
            if (answerWithHelp == 3) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 12:
            out << "[2]Философ\n";
            out << "[3]Профессиональный игрок в шашки го\n";
            in >> answerWithHelp;
            if (answerWithHelp == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 13:
            out << "[1]Попытка с помощью математических моделей воспроизвести работу человеческого мозга\n";
            out << "[4]Модель представленная в виде 24000 киллограмм перооксида натрия вступающего в реакцию с серной кислотой \n";
            in >> answerWithHelp;
            if (answerWithHelp == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 14:
            out << "[1]rat\n";
            out << "[2]Чел, который постоянно кидает всех и вся\n";
            in >> answerWithHelp;
            if (answerWithHelp == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        default:
            break;
        }
    }
}
// основные ответы без помощи друга
bool answers(int question) {
    int answer;

    switch (question)
    {
    case 0:
        out << "[1]Справа\n";
        out << "[2]В Польше\n";
        out << "[3]В России\n";
        out << "[4]Я чё знаю я с украины\n";
        in >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 1:
        out << "[1]Торт\n";
        out << "[2]Император французов\n";
        out << "[3]Друг из дискорда\n";
        out << "[4]Я чо историк?\n";
        in >> answer;
        if (answer == 2) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 2:
        out << "[1]Povelitel Preispodney\n";
        out << "[2]lord of the underworld\n";
        out << "[3]Bananas Destructor\n";
        out << "[4]kavkaz232\n";
        in >> answer;
        if (answer == 2) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 3:
        out << "[1]Жребий брошен\n";
        out << "[2]Монета уплачена\n";
        out << "[3]Кавказ нерушим\n";
        out << "[4]Отдайте сыру\n";
        in >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 4:
        out << "[1]Я убил\n";
        out << "[2]В результате уничтожения метрополиса Джокером\n";
        out << "[3]В результате фида на миду сфом 25 раз подряд\n";
        out << "[4]В результате тектонического процесса на месте раскола Евразии и Африки\n";
        in >> answer;
        if (answer == 4) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 5:
        out << "[1]0\n";
        out << "[2]NOL'\n";
        out << "[3]1\n";
        out << "[4]X|X\n";
        in >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 6:
        out << "[1]11 не 18\n";
        out << "[2]18 не 11\n";
        out << "[3]разные числа\n";
        out << "[4]ачо??\n";
        in >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 7:
        out << "[1]больше , чем шанс нападения обезьяны под водой\n";
        out << "[2]5 %\n";
        out << "[3]Крэкер\n";
        out << "[4]0 %\n";
        in >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 8:
        out << "[1]Посмотреть на часы\n";
        out << "[2]Помолиться богу\n";
        out << "[3]Стать богом и самому создать время\n";
        out << "[4]Начать катку в кс и смотреть вверх на таймер\n";
        in >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 9:
        out << "[1]Штука, которая создаёт теневого клона\n";
        out << "[2]Штука, в которой постоянно ходит какой-то чел и повторяет твои действия\n";
        out << "[3]Гладкая поверхность, предназначенная для отражения света.\n";
        out << "[4]Стол для пинг понга\n";
        in >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 10:
        out << "[1]Буржуй\n";
        out << "[2]Дотер\n";
        out << "[3]Кс'ер\n";
        out << "[4]Философ и учитель математических наук в Городе Марсшалат\n";
        in >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 11:
        out << "[1]Тео типо нео а центр типо в центре\n";
        out << "[2]Чёт на умном\n";
        out << "[3]Возвышение бога\n";
        out << "[4]Одна из основных крупных частей суши, омываемая океанами и морями\n";
        in >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 12:
        out << "[1]Кант в России придумали ( загугли откуда кант )\n";
        out << "[2]Философ\n";
        out << "[3]Профессиональный игрок в шашки го\n";
        out << "[4]Матерное слово\n";
        in >> answer;
        if (answer == 2) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 13:
        out << "[1]Попытка с помощью математических моделей воспроизвести работу человеческого мозга\n";
        out << "[2]Сеть для ловли рыбы , преимущественно карася\n";
        out << "[3]Сеть Предназначенная для спама смайликов в ВК и работающая по принципу <вижу - спамлю> \n";
        out << "[4]Модель представленная в виде 24000 киллограмм перооксида натрия вступающего в реакцию с серной кислотой \n";
        in >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 14:
        out << "[1]rat\n";
        out << "[2]Чел, который постоянно кидает всех и вся\n";
        out << "[3]ratin\n";
        out << "[4]Животное\n";
        in >> answer;
        if (answer == 2) {
            return true;
        }
        else {
            return false;
        }
        break;
    default:
        break;
    }
}

void addUsedQuestion(int question) {
    for (int i = 0; i < 15; i++) {
        if (previousQuestions[i] == NULL) {
            previousQuestions[i] = question;
            return;
        }
    }
}
//рандом крч работает по узбекски немного, он то нормально выводит, но фиг знает как , я не understand как это решить поэтому оставил как есть

int randomizeQuestion() {
    int question = rand() % 15;
    for (int i = 0; i < 15; i++) {
        if (previousQuestions[i] == question ) {
            question = rand() % 15;
            i = 0; 
        }
    }

    addUsedQuestion(question);

    return question;
}

//логика 
void play() {
    clear;

    int totalQuestions = numberOfQuestions;
    if (helpOfAFriend == false) {
        while (amountOfAttempts >= 0 && numberOfQuestions > 0) {
            int currentQuestion = randomizeQuestion();
        start:
            clear;
            out << "Осталось попыток: " << amountOfAttempts << "\n";
            out << "Вопрос " << totalQuestions - numberOfQuestions + 1 << "/" << totalQuestions << "\n";
            out << questions[currentQuestion] << "\n";
            if (answers(currentQuestion)) {

                numberOfQuestions--;
             
            }
            else {
                amountOfAttempts--;
                if (amountOfAttempts < 0) {
                    break;
                }
                goto start;
            }
        }
    }
    else if (helpOfAFriend == true) {
        while (amountOfAttempts >= 0 && numberOfQuestions > 0) {
            int currentQuestion = randomizeQuestion();
        start1:
            clear;
            out << "Осталось попыток: " << amountOfAttempts << "\n";
            out << "Вопрос " << totalQuestions - numberOfQuestions + 1<< "/" << totalQuestions << "\n";
            out << questions[currentQuestion] << "\n";
            if (helpOfAFriendOn(currentQuestion)) {
                numberOfQuestions--;
             
            }
            else {
                amountOfAttempts--;
                if (amountOfAttempts < 0) {
                    break;
                }
                goto start1;
            }
        }
    }


    clear;
    if (amountOfAttempts < 0) {
        out << "Ты проиграл";
    }
    else  {
            out << "Ты победил";      
    }
    exit(1);
}
// настройки 
void settings() {
    clear;

    int option, questionsAmount, attemptsAmount;
    char on;

    out << "[1] Количество вопросов\n";
    out << "[2] Количество попыток\n";
    out << "[3] Помощь друга\n";
    out << "[0] Назад\n";
    in >> option;
    switch (option)
    {
    case 1:
        clear;
        out << "5, 10, 15? -> ";
        in >> questionsAmount;
        if (questionsAmount != 5 && questionsAmount != 10 && questionsAmount != 15) {
            error();
            settings();
        }
        else {
            numberOfQuestions = questionsAmount;
            success("Количество вопросов", std::to_string(numberOfQuestions));
            settings();
        }
        break;
    case 2:
        clear;
        out << "Введите желаемое количество попыток -> ";
        in >> attemptsAmount;
        amountOfAttempts = attemptsAmount;
        success("Количество попыток", std::to_string(amountOfAttempts));
        settings();
        break;
    case 3:
        clear;
        out << "[y] Вкл\n";
        out << "[n] Выкл\n";
        in >> on;
        switch (on)
        {
        case 'y':
            helpOfAFriend = true;
            success("Помощь друга", "включена");
            settings();
            break;
        case 'n':
            helpOfAFriend = false;
            success("Помощь друга", "выключена");
            settings();
            break;
        default:
            error();
            settings();
            break;
        }
        break;
    case 0:
        break;
    default:
        error();
        settings();
        break;
    }
}
// правила
void rules() {
    clear;

    int back;

    out << "Есть вопрос, есть 4 варика ответить\n";
    out << "Выбираешь верный - идешь дальше, ошибаешься - теряешь попытку\n";
    out << "Кончились попытки - игра закончена\n\n";
    out << "[0] Назад\n";
    in >> back;
    if (back == 0) {
        return;
    }
    else {
        error();
        rules();
    }
}

void exit() {
    exit(1);
}

void changeMenu(int option) {
    switch (option)
    {
    case 1:
        play();
        break;
    case 2:
        settings();
        break;
    case 3:
        rules();
        break;
    case 4:
        exit();
        break;
    default:
        error();
        break;
    }
}

void mainMenu() {
    clear;

    int option;

    out << "[1] Играть\n";
    out << "[2] Настройки\n";
    out << "[3] Правила\n";
    out << "[4] Выход\n";
    in >> option;
    changeMenu(option);
}

int main()
{
    setlocale(0, "");

    change_bg;

    while (true) {
        mainMenu();
    }

    return 0;
}
