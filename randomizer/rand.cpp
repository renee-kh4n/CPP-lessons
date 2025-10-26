#include <iostream>
#include <cstdlib>

int main() {

    int n = 0;

    std::cout << "How many tests do you want to run? ";
    std::cin >> n;



    for(int i = 0; i < n ; i++){

        std::cout << "Test #" << (i+1) << std::endl;

        std::cout << rand() << std::endl << std::endl;
    }

    return 0;
}

// SAME SET EVERY TIME !!
// How many tests do you want to run? 3
// Test #1
// 41

// Test #2
// 18467

// Test #3
// 6334

// WHY ?
// > it is like you shuffle cards but always in the exact same way