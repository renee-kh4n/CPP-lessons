#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    int n = 0, seed = 0;

    std::cout << "How many tests do you want to run? ";
    std::cin >> n;

    
     srand(time(NULL)); // use current time to get a new "shuffle"

    for(int i = 0; i < n ; i++){

        std::cout << "Test #" << (i+1) << std::endl;
              
        std::cout << rand() << std::endl << std::endl;
    }

    return 0;
}
