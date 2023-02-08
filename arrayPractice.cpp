// Arrays

#include <iostream>
#include <string>

void printArray(int array[], int size);
bool contains(int array[], int size, int target);

int main(){

    // arrays are groups of data types that are individually addressable
    // arrays are immutable
    int numbers[5] = {3, 6, 9, 12, 15};
    std::string amIAnArray = "Maybe?";
    std::cout << "This string is: " << amIAnArray.length() << " characters long" << std::endl;
    amIAnArray.append(" I think so!\n");

    std::cout << amIAnArray;
    std::cout << "This string is now: " << amIAnArray.length() << " characters long" << std::endl; 
    std::cout << amIAnArray[5] << std::endl;
    // std::cout 
    printArray(numbers, 5);

    int target = 10;
    if (contains(numbers, 5, target)){
        std::cout << "Found the target! " << target << "\n";
    } else {
        std::cout << "404'd\n";
    }
}

bool contains(int array[], int size, int target){
    for (int i = 0; i < size; i++){
        if (array[i] == target){
            return true;    
        }
    }
    return false;
}

void printArray(int array[], int size){
    //for loop
    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    
    // while loop
    int index = 0;
    while (index < size){
        std::cout << "\n" << array[index] << " ";
        index++;
    }
    std::cout << "\n";
}