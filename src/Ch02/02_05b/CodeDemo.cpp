// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

// constexpr int maxLevel = 10;

constexpr int calculateExp(int level) {
    return level * level * 100;
}

int main(){
    
    constexpr int exp = calculateExp(11);
    std::cout << "Exp for lev 5: " << exp << std::endl;
    return 0;
}
