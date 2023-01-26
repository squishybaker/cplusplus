#include <iostream>

using namespace std;

int main()
{
    int first_number, second_number, third_number;
    cout << "What is your first number?: ";
    cin >> first_number;
    cout << "What is your second number?: ";
    cin >> second_number;
    // multiplication with "*"
    int product = first_number * second_number;
    cout << "And a third number?: ";
    cin >> third_number;
    // addition with "+"
    cout << "The product of the first two numbers is " << product << "\n";
    cout << "The total value of the product plus the third number is " << product + third_number << "\n";
}