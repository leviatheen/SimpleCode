#include <iostream>
using namespace std;

void main()
{
	int a, b, c;
	cout << "Enter 1 and 2 and 3:\t";
	cin >> a >> b >> c;
	int sum = a + b + c;
	int mul = a * b * c;
	int mean = sum / 3;
	cout << "Sum:\t" << sum << endl << "Mul:\t" << mul << endl << "Mean:\t" << mean;
}