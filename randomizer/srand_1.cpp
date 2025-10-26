#include <iostream>
#include <cstdlib>

int main() {

    int n = 0, seed = 0;

    std::cout << "How many tests do you want to run? ";
    std::cin >> n;

    
    std::cout << "Set a SEED:  ";
    std::cin >> seed;

    srand(seed);

    for(int i = 0; i < n ; i++){

        std::cout << "Test #" << (i+1) << std::endl;
        
        

        std::cout << rand() << std::endl << std::endl;
    }

    return 0;
}
