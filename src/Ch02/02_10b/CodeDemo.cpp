// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float f_val = -1.223;
    uint32_t ui_val = f_val;

    std::cout << "float val = " << f_val << std::endl;
    std::cout << "uint val = " << ui_val << std::endl;
    std::cout << "convert to int val = " << static_cast<int32_t>(ui_val) << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
