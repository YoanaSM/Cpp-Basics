#include<iostream>
using namespace std;
int main ()
{
int firstNumber;
cin >> firstNumber;
int nums = 0;
int number;
bool isMoreorEqual = false;
while(!isMoreorEqual)
{
if (nums < firstNumber)
{
cin >> number;
nums += number;
}
else
{
isMoreorEqual = true;
break;
}

}
cout << nums;


}
