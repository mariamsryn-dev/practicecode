#include <iostream>
using namespace std;

int main() {
    int i;
    string word, reversed;
    cout << "Enter a word " << endl;
    cin >> word;

    for ( i = word.length() - 1; i >= 0; i--) 
    {
        reversed = reversed + word[i];
    }    
        if (word == reversed)
        {
            cout << word << " is a palindrome " << endl;
 
        }
        else
        {
            cout << word << " is not a palindrome "<< endl;

        }  

    
    cout << endl;
    return 0;


}