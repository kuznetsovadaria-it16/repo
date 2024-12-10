#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "zagfileGen.h"
using namespace std;

int Mark(int& summ, int& questions) {
	int result = (summ * 100) / questions;
	if (result <= 100 && result >= 80) {
		return 5;
	}
	if (result < 80 && result >= 60) {
		return 4;
	}
	if (result < 60 && result >= 40) {
		return 3;
	}
	if (result < 40) {
		return 2;
	}
}
int Ball(int& number1, int& number2, int& summ) {
	summ += Proverka(number1, number2);
	return summ;
}
int Proverka(int& number1, int& number2) {
	int otvet = question(number1, number2);
	if (otvet == number1 * number2) {
		return 1;
	}
	else {
		return 0;
	}
}
int question(int& number1, int& number2) {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	Gen(number1, number2);
	int otvet;
	cout << "Пример: " << number1 << " x " << number2 << " = ";
	cin >> otvet;

	return otvet;
}
void Gen(int& number1, int& number2) {

	number1 = rand() % 9 + 2;
	number2 = rand() % 9 + 2;
}
