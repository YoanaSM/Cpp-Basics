#include<iostream>
using namespace std;
int main()
{
double moneyNeededForexc;
cin >>moneyNeededForexc;

double moneyLeft;
cin >>moneyLeft;
cin.ignore();

string action;
double sumActioned;
int spentCount = 0;
int daysCounter = 0;

while (moneyLeft < moneyNeededForexc && spentCount < 5)
{
getline(cin, action);
cin.ignore();
cin >> sumActioned;
cin.ignore();
daysCounter++;
if (action=="spend")
{
moneyLeft -= sumActioned;
spentCount++;
}
else if (action == "save")
{
moneyLeft += sumActioned;
spentCount = 0;
}
if (spentCount == 5)
{
cout << "You cant save the money." << endl;
cout << daysCounter << endl;
break;
}
}
if (moneyLeft == moneyNeededForexc)
{
cout << "You saved the money for " << daysCounter << "days." << endl;
}
}
