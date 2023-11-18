#include<iostream>
using namespace std ;
int rotations(string directions[] , int size) ;
main()
{
    int size ;
    cout << "Enter the length of the array: " ;
    cin >> size ;
    cout << "Enter the elements of the array (left or right): " << endl ;
    string directions[size] ;
    for(int i = 0 ; i < size ; i++) 
    {
        cin >> directions[i] ;
    }
    cout << "Number of full rotations: " << rotations(directions,size) ;
}

int rotations(string directions[] , int size) 
{
    int degrees = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        if(directions[i] == "right") degrees += 90 ;
        else degrees -= 90 ;
    }
    if(degrees < 0) return -degrees/360 ;
    else return degrees/360 ;
}
