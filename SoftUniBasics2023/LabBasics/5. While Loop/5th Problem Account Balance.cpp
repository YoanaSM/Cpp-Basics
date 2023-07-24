#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

double income;
double totalMoney = 0;
bool isValid = true;
while(isValid && std :: cin >> income)
{
if (income >= 0)
{
std ::cout << "Increase: " << std ::fixed <<std :: setprecision(2) << income << std ::endl;
totalMoney += income;

}
else
{
std ::cout << "Invalid operation!" << std :: endl;
isValid = false;
}

//std::cin.ignore();
std :: string nextInput;
std ::getline (std ::cin, nextInput);
//std ::cin.ignore();
if (nextInput == "NoMoreMoney") {
break;
}
else
{
continue;
}
}

std :: cout << "Total: " <<std :: fixed <<std :: setprecision(2) << totalMoney;
return 0;
}
