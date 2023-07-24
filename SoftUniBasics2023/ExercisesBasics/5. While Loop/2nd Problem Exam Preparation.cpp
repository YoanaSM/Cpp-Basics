
#include<iostream>
using namespace std;
int main ()
{
    int numbadGrades;
cin >> numbadGrades;
cin.ignore();

string nameProblem;
int grade;

int badGrades = 0;
double totalResult = 0;
int numProblems = 0;
string lastProblem;

while ( badGrades < numbadGrades)
{
getline(cin, nameProblem);

if (nameProblem=="Enough")
{
cout << "Average score: " << fixed << setprecision(2) << double(totalResult )/ numProblems << endl;
cout << "Number of problems: " << numProblems << endl;
cout << "Last problem: " << lastProblem << endl;
break;

}
cin >> grade;

totalResult += grade;
numProblems++;

if (grade<=4)
{
badGrades++;
}

lastProblem = nameProblem;
cin.ignore();
}


if(badGrades == numbadGrades)
{
cout << "You need a break, " << badGrades << " poor grades."<< endl;

}

}