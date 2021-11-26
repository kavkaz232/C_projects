#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;
int arrInt[10] = {1,20,21,22,23,24,25,26,27,28};
bool arrBool[10] = {true,false,true,1,0,0,1,1,0,1};
char arrChar[10] = { '2' ,'z','4','7','9','f','5','3','8','1' };
string arrString[10] = { "kavkaz232","gggg","fff","sss","11213","5578","3382","88f2","7734psh","ff15" };
short arrShort[10] = {234,242,54,6,8,2,5,7,5465,475};
long arrLong[10] = {543,6345,876,987,2345,876,467,2314,6534,87};
double arrdouble[10] = {54.2,33.5,42.5,56,54.3,78.2,89.1,22.3,11.2,89.21};
float arrfloat[10] = {23.6,213.64,235.87,1345.8,124.87,12.8,13.67,1234.7,342.7,2347.6};
int option;
void clear() {
	system("cls");
}
void intmass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {
		
		cout  << arrInt[i] << "\n";
	}
}
void boolmass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {
	
		cout  << arrBool[i] << "\n";
	}

}
void charmass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {

		cout << arrChar[i] << "\n";
	}
	
}
void stringmass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {
		cout << arrString[i] << "\n";
	}
	
}
void shortmass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {

		cout << arrShort[i] << "\n";
	}
	
}
void longmass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {
		cout  << arrLong[i] << "\n";
	}

}
void doublemass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {

		cout << arrdouble[i] << "\n";
	}
}
void floatmass() {
	cout << "Содержимое массива: \n";
	for (int i = 0; i < 10; i++) {
		cout << arrfloat[i] << "\n";
	}
}

void Mainmenu() {
	cout << "Выберите номер массива, содержимое которого вы хотите увидеть: ";
	cout << "[1] int массив \n";
	cout << "[2] bool массив \n";
	cout << "[3] char массив \n";
	cout << "[4] string массив \n";
	cout << "[5] short массив \n";
	cout << "[6] long массив \n";
	cout << "[7] double массив \n";
	cout << "[8] float массив \n";
	cin >> option;
	switch (option) {
	case 1:
		clear();
		intmass();
		break;
		
	case 2:
		clear();
		boolmass();
		break;

	case 3:
		clear();
		charmass();
		break;

	case 4:
		clear();
		stringmass();
		break;

	case 5:
		clear();
		shortmass();
		break;

	case 6:
		clear();
		longmass();
		break;

	case 7:
		clear();
		doublemass();
		break;

	case 8:
		clear();
		floatmass();
		break;
	}
}


int main() {
	setlocale(0, "");
	Mainmenu();
	return 0;
}

