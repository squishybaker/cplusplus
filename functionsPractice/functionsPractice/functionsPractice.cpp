// functionsPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

void promptTheUser() {
    std::cout << "Give me a number and an exponent: " << std::endl;
}

int pow(int n, int p) {
    if (p == 0) {
        return 1;
    }
    int result = n;
    for (int i = 1; i < p; i++) {
        result *= n;
    }
    return result;
}

int main()
{
    int number, exponent;

    promptTheUser();

    do {
        std::cin >> number >> exponent;
        std::cout << " " << pow(number, exponent) << "\n";
    } while (number != 0 && exponent != 0);
    return 0;
}
