#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int leftSum = 0;
	int rightSum = 0;
	for (int i = 0; i < n; i++)
	{
		int number; cin >> number;
		leftSum += number;
	}
	for (size_t i = 0; i < n; i++)
	{
		int number; cin >> number;
		rightSum += number;
	}

	if (abs(leftSum - rightSum) == 0)
	{
		cout << "Yes, sum = " << leftSum  << endl;
	}
	else if(abs(leftSum- rightSum != 0))
	{
		cout << "No, diff = " << abs(leftSum - rightSum ) << endl;
	}return 0;

}