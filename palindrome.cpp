#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main()
{
    Stack palindrome;
    string word = "";
    string newWord;
    cout << "Enter a word and see if it is a palindome: \n";
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
        char letter = word[i];
        cout << letter << "\t";
        palindrome.push(letter);
    }
    
    cout<< endl;
    while (!palindrome.isEmpty())
    {
        newWord += palindrome.peek();
        palindrome.pop();
    }
    cout << endl;

    cout << "Original word:  " << word << endl;
    cout << "New word:  " << newWord << endl;
    if(newWord == word)
        cout << "Palindrome!\n";
    else
        cout << "Not a palindrome.\n";
    palindrome.display();
}
