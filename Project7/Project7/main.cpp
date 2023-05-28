#include <iostream>
using namespace std;

void main()
{
	int Var, Var1;
	/*cout << "Enter your number 1:\t";
	cin >> Var;
	cout << "Enter your number 2:\t";
	cin >> Var1;*/

	cout << "Enter your numbers by 1 and 2:\t";
	cin >> Var >> Var1;

	int res = int(Var) + int(Var1);
	cout << "You sum of numbers:\t" << res;


}