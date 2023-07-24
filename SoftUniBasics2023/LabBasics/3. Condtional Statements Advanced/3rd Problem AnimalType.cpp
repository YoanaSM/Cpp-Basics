#include<iostream>
#include<string>
using namespace std;
int main() 
{

	{
		string animal;
		getline(cin, animal);
		if (animal == "dog")
		{
			cout << "mammal" << endl;
		}
		else if (animal == "snake")
		{
			cout << "reptile" << endl;
		}
		else if (animal == "crocodile")
		{
			cout << "reptile" << endl;
		}
		else if (animal == "tortoise")
		{
			cout << "reptile" << endl;
		}
		
		else
		{
			cout << "unknown" << endl;
		}
		return 0;
	}

}