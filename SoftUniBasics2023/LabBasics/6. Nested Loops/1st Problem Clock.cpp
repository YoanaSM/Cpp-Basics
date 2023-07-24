#include<iostream>
#include<climits>
#include<cassert>
using namespace std;
int main()
{ 
	int start;
	cin >> start;
	assert(start >= 1 && start <= 999);
	int end;
	cin >> end;
	assert(end > start && end <= 1000);
	int magicNumber;
	cin >> magicNumber;
	assert(magicNumber >= 1 && magicNumber <= 10000); 
	int combinations = 0;
	int i = 0;
	int j = 0;
	for (size_t i = start; i < end; i++)
	{
		for (size_t j = start; j < end; j++)
		{
			combinations++;
			
		}
	}if ((i + j) == magicNumber)
			{
				cout << "Combination N: " << i + j << "(" << i << "+" << j << "=" << magicNumber << ")" << endl;
			}
			else
				cout << combinations << " combinations - neither equals " << magicNumber << endl;
	 
}
