// doWhileNumberGuesser.cpp
// Write a C++ program that generates a random number using the following code:

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numberToGuess, numberGuessed, numberOfGuesses = 3;

    // initialize random number
    srand(time(NULL));

    for (int i = 0; i <= 10; i++) {

        numberToGuess = rand() % 10 + 1;

    

    // Prompt user for a number
    // Repeat until out of guesses or is correct
    // Get the number from the user
    // Check if number is correct (numberToGuess)
        // "You win! End program.
    // Otherwise "else" 
        // Check if higher or lower
        // Guess higher or lower
        // Reduce number of guesses

    std::cout << "The random number is " << numberToGuess << "\n";
    }
}