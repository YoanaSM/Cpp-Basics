#include<iostream>
#include<string>
using namespace std;
int main() 
{
	string destination;
	double minimalBudget;
	double totalIncome = 0;
	while (cin >> destination >> minimalBudget && destination != "End")
	{
		double income;
		while (cin >> income)
		{
			totalIncome += income;
			if (totalIncome >= minimalBudget)
			{
				cout << "Going to " << destination << "!" << endl;
				totalIncome = 0;
				break;
			}
		}
	}
	return 0;
}
