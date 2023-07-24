#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*string word;
    bool endofcycle = false;
    while (!endofcycle)
    {
        getline(cin, word);
        if (word == "Stop")
        {
            endofcycle = true;
        }
        else {
            cout << word << endl;
        }


    }*/

    string name;
    getline(cin, name);
    string password;
    getline(cin, password);
    string trypass;
    cin.ignore();
    bool isCorrect = false;
    while (!isCorrect)
    {
        getline(cin, trypass);
        if (password == trypass)
        {
            cout << "Welcome " << name << "!" << endl;
            break;

        }
        else if (trypass!=password)
        {
            isCorrect = false;
        }
    }
}