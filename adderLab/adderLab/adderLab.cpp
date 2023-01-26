// adder lab
#include <iostream>

int main() {
    // initialize buckets (variables)
    float number;
    float sum = 0;

    do {
        
        // take input from the user
        std::cout << "Enter a positive number (Enter 0 to calculate total sum): ";
        std::cin >> number;
        sum += number;

    } while (number > 0);
    // display the sum
    std::cout << "\nThe sum is " << sum << "\n";
    system("pause");
    return 0;
}