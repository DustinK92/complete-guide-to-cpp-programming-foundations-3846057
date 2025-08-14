// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// c style enum
enum asset_type {
    texture, 
    sound, 
    animation, 
    script
};

enum class asset_type_c1 {
    sound,
    texture,
    script
};

enum class asset_type_c2 {
    script,
    sound,
    texture
};

int main(){
    int sound = 10;
    int asset_value;
    // asset_type_c2 asset_value2;
    int asset_value2;

    // asset_value = sound;
    asset_value = (int)asset_type_c1::sound;
    // asset_value2 = asset_type_c2::sound;
    asset_value2 = (int)asset_type_c2::sound;

    std::cout << "asset_value = " << asset_value << std::endl;
    std::cout << "asset_value2 = " << asset_value2 << std::endl;
    // std::cout << "asset val2 = " << asset_value2 << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
