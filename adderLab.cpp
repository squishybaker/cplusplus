//Adder Lab
#include <iostream>

using namespace std;

int main() {
    // initialize variables
    double number = 0;
    double sum = 0;

    do {
        sum += number;
        // take input from the user
        cout << "Enter a positive number (Enter 0 to calculate total sum): ";
        cin >> number;
    }
    while (number > 0);
    // display the sum
    cout << "\nThe sum is " << sum << "\n";
    system("pause");
    return 0;
}