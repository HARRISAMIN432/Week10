#include <iostream>
using namespace std;
void reverseWords(string word);
main()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    reverseWords(word);
}

void reverseWords(string word)
{
    int numberOfWords = 1, loopCounterForInnerLoop = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == ' ')
            numberOfWords++;
    }
    string reverseWords[numberOfWords];
    for (int i = 0; i < numberOfWords; i++)
    {
        if(i >= 1) loopCounterForInnerLoop++ ;
        for (int j = 0 + loopCounterForInnerLoop; word[j] != ' ' && word[j] != '\0'; j++)
        {
            reverseWords[i] += word[j];
            loopCounterForInnerLoop++;
        }
    }
    cout << "Reversed string: ";
    for (int i = numberOfWords - 1; i >= 0; i--)
    {
        cout << reverseWords[i];
        if (i > 0)
            cout << " ";
    }
}