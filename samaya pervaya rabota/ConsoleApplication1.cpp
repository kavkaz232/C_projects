﻿#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    int h = 8;
    int j = 9;
    int k = 10;
    short a1 = 1;
    short b1 = 2;
    short c1 = 3;
    short d1 = 4;
    short e1 = 5;
    short f1 = 6;
    short g1 = 7;
    short h1 = 8;
    short j1 = 9;
    short k1 = 10;
    long a2 = 1;
    long b2 = 12;
    long c2 = 13;
    long d2 = 14;
    long e2 = 15;
    long f2 = 16;
    long g2 = 17;
    long h2 = 18;
    long j2 = 19;
    long k2 = 100;
    char a3 = 1;
    char b3 = 2;
    char c3 = 'b';
    char d3 = 'g';
    char e3 = 8;
    char f3 = 'p';
    char g3 = 'v';
    char h3 = 0;
    char j3 = 'n';
    char k3 = 'x';
    float a4 = 10.1;
    float b4 = 10.132;
    float c4 = 11.1;
    float d4 = 12.13;
    float e4 = 1.152;
    float f4 = 10213.123;
    float g4 = 20.162;
    float h4 = 30.4351;
    float j4 = 40.3451;
    float k4 = 50.43521;
    double a5 = 13.3234;
    double b5 = 83.3234;
    double c5 = 73.3234;
    double d5 = 63.3546;
    double e5 = 53.327;
    double f5 = 23.3143;
    double g5 = 31.3436;
    double h5 = 35.6543;
    double j5 = 33.1234;
    double k5 = 23.7453;
    bool a6 = true;
    bool b6 = false;
    bool c6 = false;
    bool d6 = 1;
    bool e6 = true;
    bool f6 = 0;
    bool g6 = true;
    bool h6 = false;
    bool j6 = true;
    bool k6 = true;

    cout << "a = " << a << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "b = " << b << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "c = " << c << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "d = " << d << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "e = " << e << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "f = " << f << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "g = " << g << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "h = " << h << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "j = " << j << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "k = " << k << " | Тип данных: int | Размер: 4 байта" << endl;
    cout << "a1 = " << a1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "b1 = " << b1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "c1 = " << c1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "d1 = " << d1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "e1 = " << e1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "f1 = " << f1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "g1 = " << g1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "h1 = " << h1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "j1 = " << j1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "k1 = " << k1 << " | Тип данных: short | Размер: 2 байта" << endl;
    cout << "a2 = " << a2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "b2 = " << b2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "c2 = " << c2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "d2 = " << d2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "e2 = " << e2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "f2 = " << f2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "g2 = " << g2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "h2 = " << h2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "j2 = " << j2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "k2 = " << k2 << " | Тип данных: long | Размер: 4 байта" << endl;
    cout << "a3 = " << a3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "b3 = " << b3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "c3 = " << c3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "d3 = " << d3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "e3 = " << e3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "f3 = " << f3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "g3 = " << g3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "h3 = " << h3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "j3 = " << j3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "k3 = " << k3 << " | Тип данных: char | Размер: 1 байт" << endl;
    cout << "a4 = " << a4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "b4 = " << b4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "c4 = " << c4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "d4 = " << d4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "e4 = " << e4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "f4 = " << f4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "g4 = " << g4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "h4 = " << h4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "j4 = " << j4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "k4 = " << k4 << " | Тип данных: float | Размер: 4 байта" << endl;
    cout << "a5 = " << a5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "b5 = " << b5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "c5 = " << c5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "d5 = " << d5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "e5 = " << e5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "f5 = " << f5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "g5 = " << g5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "h5 = " << h5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "j5 = " << j5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "k5 = " << k5 << " | Тип данных: double | Размер: 8 байта" << endl;
    cout << "a6 = " << a6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "b6 = " << b6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "c6 = " << c6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "d6 = " << d6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "e6 = " << e6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "f6 = " << f6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "g6 = " << g6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "h6 = " << h6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "j6 = " << j6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    cout << "k6 = " << k6 << " | Тип данных: bool | Размер: 1 байт" << endl;
    return 0;
}