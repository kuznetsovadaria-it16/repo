#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "zagfileGen.h"
using namespace std;


int main() {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);

	int num1, num2, questions, summ =  0;

	srand(time(0));

	cout << "Введите кол-во примеров: ";
	cin >> questions;

	for (int i = 0; i < questions; i++) {

		Ball(num1, num2, summ);

	}

	cout << "Твоя оценка " << Mark(summ, questions) << endl;
	cout << "    /\\_/\\" << endl;
	cout << "   ( o.o )" << endl;
	cout << "    > ^ <" << endl;
	

}