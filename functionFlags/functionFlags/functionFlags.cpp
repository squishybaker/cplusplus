// functionFlags.cpp

#include <iostream>

// You dont have to match the variable name

// Function Declarations /////////////////
void pokemonChecker();
bool isValidFlag(char myFlag);

// Main function
int main()
{
    char flag;
    // have user complete the loop at least once
    do {
        std::cout << "H - Help, | N - New | P - Pokemon\n";
        std::cin >> flag;
        } while (!isValidFlag(flag));

}

// Function Definitions //////////////////

bool isValidFlag(char myFlag) {
    //std::cout << "Here I am!\n";
    //std::cout << myFlag << "\n";
    switch (myFlag) {
        //Generally good practice to think about user interaction
    case 'H':
    case 'h':
        std::cout << "We all need help\n";
        return true;
    case 'N':
    case 'n':
        std::cout << "New file created\n";
        return true;
    case 'P':
    case 'p':
        pokemonChecker();
        return true;
    default:
        std::cout << "Invalid flag\n";
        return false;
    }
}


void pokemonChecker() {
    std::string pokemon;
    std::cout << "Input Pokemon: ";
    std::cin >> pokemon;
    if (pokemon == "Pickachu") {
        std::cout << "Electric Type\n";
    }
    else if (pokemon == "Vaporeon") {
        std::cout << "Water Type\n";
    }
    else if (pokemon == "Flareon") {
        std::cout << "Fire Type\n";
    }
    else
        std::cout << "Unknown\n";
}
