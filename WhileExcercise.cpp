#include<iostream>
#include<string>
#include<cassert>
#include<iomanip>
using namespace std;
int main()
{  /* 1st problem; Library
	string wantedBook;
	getline(cin,wantedBook);
	//cin.ignore();
	string book;
	
	int numberBooks=0;
	while (book!=wantedBook && book != "No More Books")
	{   
		getline(cin, book);
		//cin.ignore();
		numberBooks++;
	}
	if (book!=wantedBook)
     {
		cout << "The book you search is not here!" << endl;
		 cout << "You checked " << numberBooks-1 << " books." << endl;// without the first one;
		 
     }
	else 
		{  
			cout << "You checked " << numberBooks-1 << " books and found it." << endl;
		}
		
    
	return 0;
	*/

	//2nd problem:Exam Preparation
	 
/*	int numbadGrades;
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
	*/
	//3rd problem:Vacation

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