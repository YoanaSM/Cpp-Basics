#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int MAX_NUMB = INT_MIN;
	int MIN_NUMB = INT_MAX;
	for (int i = 0; i < num; i++)
	{ 
		int numb; cin >> numb;
		if (numb>MAX_NUMB)
		{
			MAX_NUMB = numb;
		}
		if (numb < MIN_NUMB)
		{
			MIN_NUMB = numb;
		}
		
	}
	cout << "Max number: " << MAX_NUMB << endl;
	cout << "Min number: " << MIN_NUMB << endl;
	
}