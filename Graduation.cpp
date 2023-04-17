#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	string name;
	getline(cin, name);
	
	double totalGrade = 0.0;
	int fail = 0;
	for (int year = 1; year <=12; year++)
	{
	    double yearGrade;
	    cin >> yearGrade;
			if (yearGrade >= 4.00)
			{
				totalGrade += yearGrade;
			}
			else
			{
				fail++;
			}

			if (fail > 1)
			{   cout <<name << " has been excluded at "  << year-1 << " grade" << endl;
				break;
				
			}

			
	}
	if(fail==0)
		    {
			    cout << name << " graduated." << " Average grade: " <<fixed << setprecision(2)<< totalGrade / 12 << endl;
		    }
	return 0;
}