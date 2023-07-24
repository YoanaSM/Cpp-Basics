#include<iostream>
using namespace std;
int main()
{
	double age;
	char sex;
	cin >> age >> sex;
	if (sex == 'm' && age >= 16)
	{
		cout << "Mr." << endl;
	}
	else if (sex == 'm' && age < 16)
	{
		cout << "Master" << endl;
	}
	else if (sex == 'f' && age >= 16)
	{
		cout << "Ms." << endl;
	}
	else if (sex == 'f' && age < 16 )
	{
		cout << "Miss" << endl;
	}
}