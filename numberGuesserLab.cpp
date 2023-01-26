// numberguesser

#include <iostream>
#include <stdlib.h>
#include <time.h>

void promptTheUser() {
std::cout << "Guess a number between 1 and 10: ";
}

int main(){
    int numberToGuess, numberGuessed, numberOfGuesses = 3;
    // initialize random number
    srand(time(NULL));
    numberToGuess = rand() % 10 + 1;

    while (numberOfGuesses > 0){
      promptTheUser();
      std::cin >> numberGuessed;
      numberOfGuesses--;
      if (numberGuessed == numberToGuess){
        std::cout << "You win!";
        return 0;
      } else if (numberGuessed > numberToGuess){
        std::cout << "You guessed too high!\n";
      } else if (numberGuessed < numberToGuess){
        std::cout << "You guessed too low!\n";
      }
    }

    if (numberOfGuesses == 0){
      std::cout << "You ran out of tries. Better luck next time.\n";
      std::cout << "The random number was " << numberToGuess << "\n";
      return 0;
    }
}

// else if guess higher than 10? lower than 0?