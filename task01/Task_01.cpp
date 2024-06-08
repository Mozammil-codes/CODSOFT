#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // seed the random number generator
    int number = rand() % 100 + 1; // generate a random number between 1 and 100
    int guess = -1;
    int guessAmount = 0;

    while (number!= guess)
    {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess < number)
        {
            cout << "The number is too low." << endl;
        }
        else if (guess > number)
        {
            cout << "The number is too high." << endl;
        }
        else
        {
            cout << "You are correct! Congratulations!" << endl;
        }

        guessAmount++;
    }

    cout << "You have guessed " << guessAmount << " times." << endl;

    return 0;
}
