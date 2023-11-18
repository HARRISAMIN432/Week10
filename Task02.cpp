#include<iostream>
using namespace std ;
int countCharacters(string words[] , int numberOfWords , char enterLetter) ;

main()
{
    int numberOfWords , count = 0;
    char enterLetter ;
    string singleString ;
    cout << "Enter how many words you want to enter: " ;
    cin >> numberOfWords ;
    string words[numberOfWords] ;
    for(int i = 0 ; i < numberOfWords ; i++) 
    {
        cout << "Enter word " << i+1 << ": " ;
        cin >> words[i] ; 
    }
    cout << "Enter the letter you want to count: " ;
    cin >> enterLetter ;
    cout << enterLetter << " shows up " << countCharacters(words , numberOfWords , enterLetter) << " times in the data.";
}

int countCharacters(string words[] , int numberOfWords , char enterLetter)
{
    int count = 0 ;
    string singleString ;
for(int i = 0 ; i < numberOfWords ; i++)
    {
        singleString = words[i] ;
        for(int j = 0 ; singleString[j] != '\0' ; j++) 
        {
            if(enterLetter == singleString[j]) 
            count++ ;
        }
    } 
    return count ;
}