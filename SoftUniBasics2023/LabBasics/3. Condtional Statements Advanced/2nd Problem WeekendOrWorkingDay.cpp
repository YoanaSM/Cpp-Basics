#include<iostream>
#include <string>
using namespace std;
int main()
{
    string dayOfTheWeek;
	getline(cin, dayOfTheWeek);
	if (dayOfTheWeek == "Monday")
	{
		cout << "Working day" << endl;
	}
	else if (dayOfTheWeek == "Tuesday")
	{
		cout << "Working day" << endl;
	}
	else if (dayOfTheWeek== "Wednesday")
	{
		cout << "Working day" << endl;
	}
	else if (dayOfTheWeek=="Thursday")
	{
		cout << "Working day" << endl;
	}
	else if (dayOfTheWeek=="Friday")
	{
		cout << "Working day" << endl;
	}
	else if (dayOfTheWeek == "Saturday")
	{
		cout << "Weekend" << endl;
	}
	else if (dayOfTheWeek == "Sunday")
	{
		cout << "Weekend" << endl;
	}
	else 
	{
		cout << "Error" << endl;
	}
	return 0;
} 
