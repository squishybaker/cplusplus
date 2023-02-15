#include <iostream>
#include <string>

using namespace std;

int getNumberOfSides(string _shape, int sides);

int main()
{
    int numSides;
    string shape;

    cout << "Input a shape (Triangle, Square, or Hexagon): ";

    cin >> shape;

    // implement getNumberOfSides
    numSides = getNumberOfSides(shape, numSides);

    cout << "A " << shape << " has " << numSides << " sides. Now you know!\n";

    system("pause");
    return 0;
}

int getNumberOfSides(string _shape, int sides){
    if (_shape == "Triangle"){
        return 3;
    } else if (_shape == "Square"){
        return 4;
    } else if (_shape == "Hexagon"){
        return 6;
    }
    return 0;
}