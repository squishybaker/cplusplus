// switchPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://www.w3schools.com/cpp/cpp_switch.asp

#include <iostream>

int main()
{
    char grade;

    std::cout << "What's your letter grade?: ";
    std::cin >> grade;

    switch (grade) 
    {
    case 'A':
        std::cout << "G'job!\n";
        break;
    case 'B':
        std::cout << "Alright\n";
        break;
    case 'C':
        std::cout << "M'kay\n";
        break;
    case 'D':
        std::cout << "Gettin' iffy\n";
        break;
    case 'F':
        std::cout << "Ai yah!\n";
        break;
    default:
        std::cout << "I guess we will just walk off into the abyss.";
    }
    system("pause");
    // continue -> jump to the next iteration of the loop
}