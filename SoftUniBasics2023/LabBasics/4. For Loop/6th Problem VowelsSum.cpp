#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	getline(cin, word);
	int sumVowels = 0;
	for (size_t i = 0; i < word.length(); i++)
	{
		if (word[i] == 'a')
		{
			sumVowels += 1;
		}
		else if (word[i]== 'e')
		{
			sumVowels += 2;
		}
		else if (word[i]=='i')
		{
			sumVowels += 3;
		}
		else if (word[i] == 'o')
		{
			sumVowels += 4;
		}
		else if (word[i] == 'u')
		{
			sumVowels += 5;
		}
	}
	cout << sumVowels << endl;
}