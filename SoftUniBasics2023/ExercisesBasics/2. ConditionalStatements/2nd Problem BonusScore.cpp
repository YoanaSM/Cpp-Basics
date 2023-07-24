#include<iostream>
int main()
{
	int num;
	std::cin >> num;
	double bonusPoints = 0.0;
	double lastDigit = num % 10;
	if (num <= 100)
	{
		bonusPoints += 5;
	}
	else if (num > 1000)
	{
		bonusPoints += 0.1 * num;
	}
	else
	{
		bonusPoints += 0.2 * num;
	}

	if (num % 2 == 0)
	{
		bonusPoints += 1;
	}
	if (lastDigit == 5)
	{
		bonusPoints += 2;
	}
	double finalNumber = bonusPoints + num;
	std::cout << bonusPoints << std::endl;
	std::cout << finalNumber << std::endl;
	return 0;

}