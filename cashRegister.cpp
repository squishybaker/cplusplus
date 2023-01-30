// Cash Register

/*
* Cash Register
* returns void
* float total: total amount
* int& dollars: max number of dollars
* int& q: max no. of quarters in cents
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
    int dol;
    int q;
    int dim;
    int n;
    int p;

    std::cout << "What is your total? ";
    std::cin >> till;
    
    cashRegister(till, dol, q, dim, n, p);


}


void cashRegister(int totalAmount, int& dollars, int& quarters, int& dimes, int& nickels, int& pennies){
    
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

    std::cout << dollars << " Dollars" << "\n";
    std::cout << quarters << " Quarters" << "\n";
    std::cout << dimes << " Dimes" << "\n";
    std::cout << nickels << " Nickels" << "\n";
    std::cout << pennies << " Pennies" << "\n";

}