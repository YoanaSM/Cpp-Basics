#include<iostream>
using namespace std;
int main ()
{
    int hour;
    string day;
    cin >> hour >> day;
    if(day == "Monday" || "Tuesday" || "Wednesday" || "Thursday" || "Friday"|| "Saturday")
    {  if( hour >=10 && hour <=18)
        {
            cout << "open" << endl;
        }
        else
            cout << "closed" << endl;
    }
    else if (day == "Sunday")
    {
        cout << "closed" << endl;
    }
}