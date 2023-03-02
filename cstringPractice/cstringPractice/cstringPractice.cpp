// cstringPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
// string compare is a trinary test
// string compare looks at ascii values

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char myString[12];
    char yourString[] = "po-tay-toes";
    cout << "You say " << yourString << " \n";
    strcpy_s(myString, yourString);
    myString[5] = 'x';
    cout << "I say " << myString << " \n";
    cout << "My string is " << strlen(myString) << " characters long.\n";

    int differences = strcmp(myString, yourString);

    if (!differences) {
        cout << "Our strings are equal.\n";
    }
    else if (differences < 0) {
        cout << "The first different character in my string is smaller.\n";
    }
    else {
        cout << "The first different character in my string is larger.\n";
    }
}