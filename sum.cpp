#include <iostream>
using namespace std;

int main()
{
    int sum, n, t;
    sum = 0;
    cout<< "Please enter a number: " <<endl;
    cin >> n ;

    while (n > 0)
    {
       t = n % 10;
       sum = sum + t;
       n = n / 10;

    }
    cout << sum << endl;

}