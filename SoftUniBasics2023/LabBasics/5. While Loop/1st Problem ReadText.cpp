#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
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


    }

}