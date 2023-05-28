#include <iostream>
#include <math.h>
using namespace std;


void main()
{
	system("chcp 1251");//не работает( ф-ция отвечает за вывод 1251 кодировки
	setlocale(LC_ALL, "RU");//не работает
	cout << "Привет!";
}



