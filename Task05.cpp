#include<iostream>
using namespace std ;
void ascendingOrder(int weights[]) ;
main()
{
    int weights[10] ;
    cout << "Enter the weights of the 10 packages: " << endl;
    for(int i = 0 ; i < 10 ; i++)
        cin >> weights[i] ;
    ascendingOrder(weights) ;
}

void ascendingOrder(int weights[])
{
    int smallNumber ;
    for(int i = 0 ; i < 9 ; i++) 
    {
        for(int j = i + 1 ; j < 10 ; j++ )
        {
            if(weights[i] > weights[j])
            {
                smallNumber = weights[i] ;
                weights[i] = weights[j] ;
                weights[j] = smallNumber ;
            }
        }
    }
    cout << "Sorted array in ascending order: " ;
    cout << "[" ;
    for(int i = 0 ; i < 10 ; i++)
    {
        cout << weights[i] ;
        if(i != 9) cout << ", " ; 
    }
    cout << "]" ;
}