#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int sumOfNumbers = 0;
	for (size_t i = 1; i <= num; i++)
	{
		int number;
		cin >> number;
		sumOfNumbers += number;
	}
	cout << sumOfNumbers << endl;
}