#include<iostream>
#include<cmath>
int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << pow(2,i)<< std::endl;
        }
    }
}