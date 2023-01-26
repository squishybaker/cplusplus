// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "*---Sum of Numbers using while loop---*" << endl;
   
//     int n, sum;
//     sum = 0;
//     cout << "\nEnter a number: ";
//     cin>>n;
//     while(n>0)
//     {
//         sum = sum + n;
//         n--;
//     }
//     cout << "The sum of n numbers are: " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "*---Calculating the Sum of n Numbers---*" << endl;
//     int n, sum;
//     sum = 0;
//     cout << "\nHow many times do you want to iterate the loop? ";
//     cin >> n;
//     cout << "Enter the values to calculate the sum: ";
//     int i=0;
//     while(i<n)
//     {
//         int number;
//         cin >> number;
//         sum += number;
//         i++;
//     }
//     cout << "\nThe sum of the " << n << " values are: " << sum;
//     cout << endl;
//     return 0;
// }

// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

// program to find the sum of positive numbers
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    do {
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number > 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}