#include <iostream>
using namespace std;

void main() 
{
	/*
	bool isRain = false;
	if(isRain)
	{
		cout << "It's raining, we need an umbrella!";
	}
	else
	{
		cout << "It's not raining, we don't need an umbrella!";
	}
	*/


	/*
	if(утверждение или выражение (true, false))
	{
		действие 1;
	}

	*/

	int a;
	cout << "Enter number\t";
	cin >> a;

	if(a>5)
	{
		cout << "Your number is over than 5" << endl;
	}
	else if(a==5)
	{
		cout << "Your number is 5" << endl;
	}
	else
	{
		cout << "Your number is less than 5" << endl;
	}
}