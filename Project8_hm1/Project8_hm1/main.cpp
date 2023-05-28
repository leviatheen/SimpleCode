#include <iostream>
using namespace std;

void main()
{
	int a, b, c;
	cout << "Enter 1: ";
	cin >> a;
	cout << "Enter 2: ";
	cin >> b;
	cout << "Enter 3: ";
	cin >> c;
	int sum = a + b + c;
	int mul = a * b * c;
	int mean = sum / 3;
	cout << "Sum:\t" << sum << endl << "Mul:\t" << mul << endl << "Mean:\t" << mean;
}