// gamePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


// framerate 
// screen refresh (clear screen)
// user controls


char const QUIT_KEY = 'q';




int main()
{
    std::cout << "Welcome to our game!\n";
    char userInput;



    do {
        std::cout << "Input next command: ";
        std::cin >> userInput;


    } while (userInput != QUIT_KEY);       
    
    std::cout << "Game Over!";
    
    // GetKeyState();
}









