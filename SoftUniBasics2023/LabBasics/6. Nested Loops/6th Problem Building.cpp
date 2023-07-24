#include<iostream>
#include<cassert>
#include<string>
using namespace std;
int main()
{
	int floors;
	cin >> floors;
	int rooms;
	cin >> rooms;
	for (int i = floors; i >=1 ;i--)
	{
		
		for (int j=0; j <rooms; j++)
		{
			if (i%2==0 && floors != i)
			{
				cout << "O" << i << j << " " ;
				
			}
			if (i%2!=0 && floors!= i)
			{
				cout << "A" << i << j << " " ;
				
			}
			else if (i == floors)
			{
				cout << "L" << i << j << " ";
			}
		}
		cout << endl;
	
	}
	return 0;
}