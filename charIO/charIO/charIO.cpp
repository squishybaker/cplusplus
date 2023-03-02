// charIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char myChar;
    std::cout << "Type a thing: ";
    do {
        std::cin.get(myChar);
        if (isdigit(myChar)) {
            std::cout.put(myChar);
        }
        // std::cout.put('-');
    } while (myChar != '\n');
}