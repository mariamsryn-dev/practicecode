#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<< "Enter a number to tell whether it is even or odd"<< endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout<< "This number is even "<< endl;
    }
    else 
    {
        cout << "This number is odd "<< endl;
    }
    return 0;

}
