// Cash Register

/*
* Cash Register
* returns void
* int total: total amount
* int& dollars: max number of dollars
* int& q: max no. of quarters
* int& d: max no. of dimes
* int& n: max no. of nickels
* int& p: max no. of pennies
*/

#include <iostream>

void cashRegister(int totalAmount, int& dollars, int& quarters, int& dimes, int& nickels, int& pennies);

int main(){
    // should be responsible for getting the total from the user
    // dollar amount and change from till
    int till;
    // int _conversion;
    int _dollars;
    int _quarters;
    int _dimes;
    int _nickels;
    int _pennies;

    std::cout << "What is your total? ";
    std::cin >> till;
    
    cashRegister(till, _dollars, _quarters, _dimes, _nickels, _pennies);
}

void cashRegister(int totalAmount, int& dollars, int& quarters, int& dimes, int& nickels, int& pennies){
    
    // conversion = totalAmount * 10;
    // totalAmount = totalAmount * 10;

    dollars = totalAmount / 100;
    totalAmount = totalAmount % 100;

    quarters = totalAmount / 25;
    totalAmount = totalAmount % 25;

    dimes = totalAmount / 10;
    totalAmount = totalAmount % 10;

    nickels = totalAmount / 5;
    totalAmount = totalAmount % 5;

    pennies = totalAmount / 1;
    totalAmount = totalAmount % 1;

    std::cout << "The total equates to: \n";
    std::cout << dollars << " Dollars" << "\n";
    std::cout << quarters << " Quarters" << "\n";
    std::cout << dimes << " Dimes" << "\n";
    std::cout << nickels << " Nickels" << "\n";
    std::cout << pennies << " Pennies" << "\n";
}