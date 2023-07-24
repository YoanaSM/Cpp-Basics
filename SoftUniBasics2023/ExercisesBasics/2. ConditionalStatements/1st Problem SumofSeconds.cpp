#include <iostream>

int main()
{
    int firstCompetitor, secondCompetitor, thirdCompetitor;
    std::cin >> firstCompetitor >> secondCompetitor >>  thirdCompetitor;
    int totalTime = firstCompetitor + secondCompetitor + thirdCompetitor;
    
    int minutes = totalTime / 60;
    int seconds = totalTime % 60;
    if (seconds < 10)
    {
        std::cout << minutes << ":" << "0" << seconds << std::endl;
    }
    else
        std::cout << minutes << ":" << seconds << std::endl;

    return 0;
}
