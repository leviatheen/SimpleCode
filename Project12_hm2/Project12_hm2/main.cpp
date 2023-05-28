#include <iostream>
using namespace std;

//ДЗ. Напишите программу, проверяющую число, введенное с клавиатуры на четность. 

void main()
{
	int a;
	cout << "Please, enter number:\t";
	cin >> a;
	if(a%2==0)
	{
		cout << "It`s even!";
	}
	else
	{
		cout << "It`s not even!";
	}
}