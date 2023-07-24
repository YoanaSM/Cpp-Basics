#include<iostream>
int main()
{
	int hours, minutes;
	std::cin >> hours >> minutes;
	int totalMinutesplus15 = hours * 60 + minutes + 15;
	int totalHours = totalMinutesplus15 / 60;
	int totalMinutes = totalMinutesplus15 % 60;
	if (totalMinutes < 10 && totalHours != 24)
	{
		std::cout << totalHours << ":0" << totalMinutes << std::endl;
	}
	else if (totalHours == 24 && totalMinutes < 10)
	{
		std::cout << "0:0" << totalMinutes << std::endl;
	}
	else if (totalHours == 24 && totalMinutes > 10)
	{
		std::cout << "0:" << totalMinutes << std::endl;
	}
	else
		std::cout << totalHours << ":" << totalMinutes << std::endl;
	return 0;
}