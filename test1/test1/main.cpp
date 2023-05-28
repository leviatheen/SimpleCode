#include <iostream>
using namespace std;

void main()
{
	string status_1 = Vlad();
	string status_2 = Liza(); 
	if(status_1 == "love's Liza" and status_2 == "love's Vlad")
	{
		cout << LizaWithVlad() << endl;
	}
}

string Vlad()
{
	string Age = "13";
	string sex = "male";
	string status = "love's Liza";
	return status;
}

string Liza()
{
	string Age = "13";
	string sex = "female";
	string status = "love's Vlad";
	return status;
}

string LizaWithVlad()
{
	string res = "It's love";
	return res;
}
