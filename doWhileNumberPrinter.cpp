#include <iostream>

using namespace std;

int main()
{
    int number;
    int counter;

    cout << "Number: ";
    cin >> number;

    counter = number;
    do 
    {
        cout << number << " ";
        counter -= 1;
    } while (counter > 0);
    cout << " \n";
    system("pause");
    return 0;
}






