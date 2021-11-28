#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool OutofGuesses = false;

    while (secretNum != guess && !OutofGuesses)
    {
        if(guessCount < guessLimit)
        {
            cout << "Enter Guess : ";
            cin >> guess;
            guessCount++;
        }else{
            OutofGuesses = true;
        }

    }

    if (OutofGuesses)
    {
        cout << "You Lose!";

    }
    else{
        cout << "You Win!";
    }

    return 0;
}

