#include<iostream>
#include<string>
using namespace std;
int main()
{
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
        cout << "You checked " << numberBooks-1 << " books." << endl;

    }
    else
    {
        cout << "You checked " << numberBooks-1 << " books and found it." << endl;
    }


    return 0;
}