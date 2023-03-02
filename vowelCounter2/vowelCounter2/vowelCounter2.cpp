// vowelCounter2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main() {
    char str[50];
    int vowels = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            ++vowels;
        }
    }

    cout << "Vowels: " << vowels << endl;
    return 0;
}