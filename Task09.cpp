#include <iostream>
using namespace std;
int specialArray(int arr[], int size);
main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Special value: " << specialArray(arr, size);
}

int specialArray(int arr[], int size)
{
    int specialValue ;
    for (int i = 0; i <= size; i++)
    {
        specialValue = 0 ;
        for (int j = 0; j < size; j++)
        {
            if(i <= arr[j])
            {
                specialValue++ ;
            }
        }
        if(specialValue == i) return specialValue ;
                continue;
    }
    return -1 ;
}