#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
   
    srand(static_cast<unsigned int>(time(0)));

    char playAgain;  

    do {
     
        int numberToGuess = rand() % 100 + 1;
        int userGuess = 0; 
        int attempts = 0;  

        cout << "**** Welcome to the Number Guessing Game! ****" << endl;
        cout << "I've picked a secret number between 1 and 100." << endl;
        cout << "Think you can guess it? Let's find out!" << endl;

       
        while (userGuess != numberToGuess) {
            cout << "\nEnter your guess: ";
            cin >> userGuess;
            attempts++;

            if (userGuess < numberToGuess) {
                cout << "Oops! Too low. Aim a bit higher!" << endl;
            } else if (userGuess > numberToGuess) {
                cout << "Whoa! That's too high. Try a smaller number." << endl;
            } else {
                cout << "Hooray! You've guessed the number " << numberToGuess << " correctly!" << endl;
                cout << "It took you " << attempts << " attempts. Well done!" << endl;
            }

           
            if (userGuess != numberToGuess) {
                if (attempts % 5 == 0) {
                    cout << "Don't give up! You're getting closer." << endl;
                }
            }
        }

        
        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing! Hope to see you again soon!" << endl;

    return 0;
}

