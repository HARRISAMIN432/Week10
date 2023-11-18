#include <iostream>
using namespace std;
bool canBeArranged(int arr[], int size);
int main()
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
    cout << "Can be arranged: " << canBeArranged(arr, size);
}

bool canBeArranged(int arr[], int size)
{
    int smallNumber = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                smallNumber = arr[i];
                arr[i] = arr[j];
                arr[j] = smallNumber;
            }
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        if(arr[i] == arr[i+1]) return false ;
        if (arr[i] + 1 != arr[i + 1])
            return false;
    }
    return true;
}
