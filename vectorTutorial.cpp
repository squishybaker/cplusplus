// vector practice
// https://cplusplus.com/reference/vector/vector/

#include <iostream>
#include <vector>

int main(){
    std::vector<int> v1 = {1, 2, 3, 4};
    // add elements to the end of the vector
    v1.push_back(9);
    v1.push_back(9);
    // remove elements from the end of the vector
    v1.pop_back();
    // decrease the size of the vector to change space in memory
    v1.shrink_to_fit();
    // capactity is space in memory
    std::cout << v1.capacity() << std::endl;
    // size is the current number of elements in the vector
    std::cout << v1.size() << std::endl;

    // insert and erase elements
    v1.insert(v1.begin(), 3);
    std::cout << v1[0] << std::endl;
    v1.erase(v1.begin());

    //iterating through vectors
    for (int i = 0; i < v1.size(); i++){
        std::cout << v1[i] << std::endl;
    }

    v1.insert(v1.begin(), 10);

    for (auto j = v1.begin(); j != v1.end(); j++){
    std::cout << *j << std::endl;
    } 

}