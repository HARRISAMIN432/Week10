#include <iostream>
using namespace std;
int progressDays(int numberOfMiles[], int days);
main()
{
    int days;
    cout << "Enter the number of Saturdays: ";
    cin >> days;
    int numberOfMiles[days];
    for (int i = 1; i <= days; i++)
    {
        cout << "Enter miles run for Saturday " << i << ": ";
        cin >> numberOfMiles[i-1];
    }
    cout << "Total progress days: " << progressDays(numberOfMiles, days);
}

int progressDays(int numberOfMiles[], int days)
{
    int progressDays = 0;
    for (int i = 1; i < days; i++)
    {
        if(numberOfMiles[i] > numberOfMiles[i-1])
        progressDays++ ;
    }
    return progressDays ;
}