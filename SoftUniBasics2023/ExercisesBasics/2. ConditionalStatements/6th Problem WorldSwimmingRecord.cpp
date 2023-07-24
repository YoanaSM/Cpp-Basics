#include<iostream>
#include <iomanip>
int main()
{
	double recordTobeImproved;
	double metres;
	double timeForOnemetre;
	std::cin >> recordTobeImproved >> metres >> timeForOnemetre;
	double hisRecordWithoutResistance = metres * timeForOnemetre;
	double timesSlowed = floor(metres / 15);
    double slowedByResistance = timesSlowed * 12.5;
	double hisRecord = hisRecordWithoutResistance + slowedByResistance;
	double remainder = abs(recordTobeImproved - hisRecord);
	std::cout.setf(std::ios::fixed);
	if (hisRecord < recordTobeImproved)
	{
		std::cout << "Yes, he succeeded! The new world record is " << std :: setprecision(2) << hisRecord << " seconds." << std::endl;
	}
	else
	{
		std::cout << "No, he failed! He was " << std :: setprecision(2) <<remainder << " seconds slower." << std::endl;
	}
	return 0;
}