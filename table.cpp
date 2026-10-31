#include <iostream>
using namespace std;

int main()
{

    int x, y;

    cout << "This is the multiplication table"<< endl;

    for(x = 1; x <= 12; x++)
    {
        for(y = 1; y <= 12; y++)
        {
            cout<< x << " x " << y <<  " = " <<  x*y << endl;

        }
        cout<<  endl;
    }

}