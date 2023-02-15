#include <iostream>

using namespace std;

void doubleThis(int& x);

int main()
{
    int num;

    cout << "Input number: ";

    cin >> num;

    // implement doubleThis as a Call By Reference function
    doubleThis(num);

    cout << "x2=" << num << "\n";

    system("pause");
    return 0;
}

void doubleThis(int& x){
    x = x * 2;
}