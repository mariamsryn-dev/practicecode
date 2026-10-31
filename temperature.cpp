#include <iostream>
using namespace std;

int main() {
    char  T;
    double temp, n;
    
    cout<< "Enter the temperature type you want converted" << endl;
    cin >> n;

    cout << "Enter either (F) for farentheit or (C) to b coverted to celsius" << endl;
    cin >> T;

    if ( T == 'F')
    {
        temp = (n * 9/5) + 32;
        cout << "The temperature is now "<< temp << endl;

    }
    else if( T == 'C') 
    {
        temp = (n * 5/9) - 32 ;
        cout << "The temperature is now "<< temp << endl;

    }
    else 
    {
        cout << "PLease enter F or C make sure its also capital" << endl;
    }

    return 0;

}