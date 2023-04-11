#include<iostream>
#include<cmath>
using namespace std;

/* Problem1
void sign(int number)
{
	if (number > 0)
	{
		cout << "The number " << number << " is positive." << endl;
	}
	else if (number < 0)
	{
		cout << "The number " << number << " is negative. " << endl;
	}
	else 
	{
		cout << "The number " << number << " is zero." << endl;
	}
	
}



int main()
{
	int N;
	cin >> N;
    sign(N) ;
}
*/

/*Problem2
void response(double grade)
{
	if (grade >= 2.00 && grade <= 2.99)
	{
		cout << "Fail" << endl;
	}
	else if (grade >= 3.00 && grade <= 3.49)
	{
		cout << "Poor" << endl;
	}
	else if (grade >= 3.50 && grade <= 4.49)
	{
		cout << "Good" << endl;
	}
	else if (grade >= 4.50 && grade <= 5.49)
	{
		cout << "Very good" << endl;
	}
	else if (grade >= 5.50 && grade <= 6.00)
	{
		cout << "Excellent" << endl;
	}
}
int main()
{
	double grade;
	cin >> grade;
	response(grade);

}*/
/*Problem 3
void minimumNumber(int number1,int number2,int number3)
{
	int min = number1;
	
		if (number2<min)
		{
			min = number2;
			if (number3 < number2)
			{
				min = number3;
			}
		}
		else
		{
			if (number3< min)
			{
				min = number3;
			}
		}
		cout << min << endl;
}

int main()
{
	int N1, N2, N3;
	cin >> N1 >> N2 >> N3 ;
	minimumNumber(N1, N2, N3);
}*/
/*Problem 5
void areaRectangle(double width, double heigth)
{
	double area = width * heigth;
	cout << area << endl;
 }
int main()
{
	double width, heigth;
	cin >> width >> heigth;
	areaRectangle(width, heigth);
}*/
/* Problem6
void myPow(int numb, int power) 
{
	int result = 1;
	for (size_t i = 1; i <= power; i++)
	{
		result = result * numb;
	}
	cout << result << endl;
}
int main()
{
	int numb;
	int power;
	cin >> numb >> power;
	myPow(numb, power);
}*/


