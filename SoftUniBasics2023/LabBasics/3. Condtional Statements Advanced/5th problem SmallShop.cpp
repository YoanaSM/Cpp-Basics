#include <iostream>
#include<string>
using namespace std;
int main()
{
	string product;
	string city;
	double quantity;
	cin >> product >> city >> quantity;
	if (product == "coffee")
	{
		if (city == "Sofia")
		{
			cout << quantity * 0.50 << endl;
		}
		else if (city == "Varna")
		{
			cout << quantity * 0.45 << endl;
		}
		else
			cout << quantity * 0.40 << endl;

	}
	else if (product == "water")
	{
		if (city == "Sofia")
		{
			cout << quantity * 0.80 << endl;
		}
		else if (city == "Varna")
		{
			cout << quantity * 0.70 << endl;
		}
		else
			cout << quantity * 0.70 << endl;

	}
	else if (product == "beer")
	{
		if (city == "Sofia")
		{
			cout << quantity * 1.20 << endl;
		}
		else if (city == "Varna")
		{
			cout << quantity * 1.10 << endl;
		}
		else
			cout << quantity * 1.15 << endl;

	}
	else if (product == "sweets")
	{
		if (city == "Sofia")
		{
			cout << quantity * 1.45 << endl;
		}
		else if (city == "Varna")
		{
			cout << quantity * 1.35 << endl;
		}
		else
			cout << quantity * 1.30 << endl;

	}
	else if (product == "peanuts")
	{
		if (city == "Sofia")
		{
			cout << quantity * 1.60 << endl;
		}
		else if (city == "Varna")
		{
			cout << quantity * 1.55 << endl;
		}
		else
			cout << quantity * 1.50 << endl;

	}
	
}