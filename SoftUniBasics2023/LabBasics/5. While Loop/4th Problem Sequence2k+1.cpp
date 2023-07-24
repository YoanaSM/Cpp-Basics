#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n;)
    {
        cout << i << endl;
        i = i * 2 + 1;
    }
}