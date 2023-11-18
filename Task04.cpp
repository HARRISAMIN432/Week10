#include<iostream>
using namespace std ;
int calculateVolume(int arr[] , int numberOfBoxes) ;
main()
{
    int numberOfBoxes ;
    cout << "Enter the number of boxes: " ;
    cin >> numberOfBoxes ;
    int arr[numberOfBoxes*3] ;
    cout << "Enter the dimensions of the boxes (length, width, height): " << endl ;
    for(int i = 0 ; i < numberOfBoxes*3 ; i++)
        cin >> arr[i] ;
        cout << "Total volume of all boxes: " << calculateVolume(arr,numberOfBoxes) ;
}

int calculateVolume(int arr[] , int numberOfBoxes)
{
    int volume = 0 ;
    for(int i = 0 ; i < numberOfBoxes*3 ; i++)
    {
        volume += arr[i] * arr[i+1] * arr[i+2] ;
        i += 2 ;
    }
    return volume ;
}
