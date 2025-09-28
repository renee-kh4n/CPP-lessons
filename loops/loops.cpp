#include <iostream>

int main() {

    std::cout << "WHILE LOOP:" << std::endl;

    int j = 10;
    while (j <= 5) {
        std::cout << j << " "; 
        j++;
    }

    std::cout << std::endl << std::endl;

    std::cout << "DO-WHILE LOOP:" << std::endl;

    int k = 10;
    do {
        std::cout << k << " "; 
        k++;
    } while (k <= 5);


    std::cout << std::endl << std::endl;

    //==============================================================================================

    std::cout << "FOR LOOP:" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << i << " "; 
    }

    std::cout << std::endl << std::endl;


    return 0;
}
