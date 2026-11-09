#include <iostream> 
#include <random> 

using namespace std;

int getRandomNumber(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(min, max);
    return distrib(gen);
} 

int main() {
    int secretNumber = getRandomNumber(1, 100);
    int num;
    int max = 5;
    int r;

    cout << "You have 5 attempts to get the answer think wisely and good luck" << endl;
    for( r = 1; r <= max; r++)
    {
        
        cout << "Attempt "<< r << " of " << max << endl;
    
        cout << "Enter your guess (1-100): "; 
        
        // Check input safely and handle terminal stream errors
        if (!(cin >> num)) {
            if (cin.eof()) {
                cout << "\nInput closed. Exiting game." << endl;
                break;
            }
            cout << "Invalid input! Please enter a valid number.\n" << endl;
            cin.clear(); 
            cin.ignore(10000, '\n');
            continue; 
        }

        int distance = abs(num - secretNumber);
        if (num < secretNumber) {
            cout << "Your guess is low, try again.\n" << endl;
        }
        else if (distance <= 5 && num < secretNumber)
        {
            cout << "Your guess is low, but you're very close! Try again.\n" << endl;
        }
        else if (distance <= 5 && num > secretNumber)
        {
            cout << "Your guess is high, but you're very close! Try again.\n" << endl;
        }
        else if (num > secretNumber) {
            cout << "Your guess is high, try again.\n" << endl;
        }
        else {
            cout << "You guessed the number correctly! You win!\n" << endl;
            break; 
        }
    } 
    if (r == max) {
            cout << "\nGame Over! You ran out of tries. The secret number was: " << secretNumber << endl;
        }

    return 0;
}