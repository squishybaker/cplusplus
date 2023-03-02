// vowelCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 1. read a word from the user into a C string and reports the number of vowels in the word
// 2. Then read a whole line of text from the user into a string class variable and report the number of vowels in the whole line
// 3. For extra street cred try using a vector of characters and/or highlighting the vowels with an asterisk on either side or something like that.

#include <iostream>
#include <cstring>
#include <string>

int countVowels(char* str) {
    int count = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char string1[50];
    std::string string2;

    std::cout << "Enter a word and I shall count the vowels for thee!\n";
    std::cin.getline(string1, 50);
    int wordVowelCount = countVowels(string1);

    std::cout << "Now enter a phrase and I shall also count those vowels!\n";
    std::getline(std::cin, string2);
    int phraseVowelCount = countVowels(&string2[0]);

    std::cout << "There are " << wordVowelCount << " vowels in thine word of choice! Incredible!" << std::endl;
    std::cout << "There are " << phraseVowelCount << " vowels in the phrase! Astounding!" << std::endl;

    return 0;
}