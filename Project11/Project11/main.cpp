#include <iostream>
using namespace std;

void main()
{
	//1
	/*
	cout << (4 > 5) << endl;//0
	cout << (4 < 5) << endl;//1
	cout << (5 <= 5) << endl;//1
	cout << (5 < 5) << endl;//0
	cout << (4 >= 5) << endl;//0
	cout << (4 == 5) << endl;//0
	cout << (5 == 5) << endl;//1
	cout << (5 != 5) << endl;//0
	cout << (4 != 5) << endl;//1
	*/
	//2
	/*
	int a = 2;
	int b = 3;
	
	cout << (a == b) << endl; //0 - false
	a = 3;
	cout << (a == b) << endl; //1 - true
	a = 0;
	cout << (a < b) << endl; //1 - true
	a = 3;
	cout << !(a == b) << endl; //0 - false
	cout << !(a != b) << endl; //1 - true
	*/
	//3
	int a = 3;
	int b = 3;

	cout << ((a == b) && (5 < 4)) << endl;
	cout << ((a == b) && (5 > 4)) << endl;
	cout << ((a == b) && (5 > 4) && (1==1)) << endl;

	cout << ((a != b) || (1 < 0)) << endl;
}