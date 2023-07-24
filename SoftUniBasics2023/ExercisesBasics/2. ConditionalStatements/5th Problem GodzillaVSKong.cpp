#include<iostream>
#include<iomanip>
int main()
{
	double budget;
	int extras;
	double clothingPrice;
	std::cin >> budget >> extras >> clothingPrice;
	double decoration = 0.10 * budget;
	double clothingTotal = extras * clothingPrice;
	if (extras > 150)
	{
		clothingTotal -= 0.10 * clothingTotal;
	}
	double expenses = decoration + clothingTotal;
	double remainder = abs(budget - expenses);
	std::cout.setf(std::ios::fixed);
	if (budget >= expenses)
	{
		std::cout << "Action!" << std::endl;
		std::cout << "Wingard starts filming with " << std :: setprecision(2)<< remainder << " leva left." << std::endl;
	}
	else
	{
		std::cout << "Not enough money!" << std::endl;
		std::cout << "Wingard needs " << std::setprecision(2) << remainder << " leva more." << std::endl;
	}
}