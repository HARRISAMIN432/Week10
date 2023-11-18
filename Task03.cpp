#include<iostream>
using namespace std ;
bool isRepeatingCycle(int arr[] , int arrayLength , int lengthOfCycle) ;
main()
{
    int arrayLength , lengthOfCycle;
    cout << "Enter the length of the array: " ;
    cin >> arrayLength ;
    int arr[arrayLength] ;
    cout << "Enter the elements of the array: " << endl ;
    for(int i = 0 ; i < arrayLength ; i++)
    {
        cin >> arr[i] ;
    }
    cout << "Enter the length of the cycle: " ;
    cin >> lengthOfCycle ;
    cout << "Output: " << isRepeatingCycle(arr,arrayLength,lengthOfCycle) ;
}  

bool isRepeatingCycle(int arr[] , int arrayLength , int lengthOfCycle)
{
    if(lengthOfCycle > arrayLength) return true ;
    if(arr[0] == arr[lengthOfCycle] && arr[1] == arr[lengthOfCycle+1])
    return true ; 
    else return false ;
}