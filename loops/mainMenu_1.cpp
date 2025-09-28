#include <iostream>

int main(){
    char opt;

    do{

        std::cout << "Choose a pet: " << std::endl
            << "[a] Cat" << std::endl
            << "[b] Dog" << std::endl
            << "[c] Bird" << std::endl
            << "[x] EXIT" << std::endl << std::endl
            << "Enter the letter of your choice: " << std::endl;

            std::cin >> opt;

        switch(opt){
            case 'a':
                std::cout << "\033[36m~meow \033[0m" << std::endl;
                break;
            case 'b':
                std::cout << "\033[35m~arf \033[0m" << std::endl << std::endl;
                break;
            case 'c':
                std::cout << "\033[33m~tweet \033[0m" << std::endl << std::endl;
                break;
            case 'x':
                std::cout << "Program terminating . . ." << std::endl << std::endl;
                break;
            default:
                std::cout << "Invalid Choice!" << std::endl << std::endl;
        }
    }while(opt != 'x');


}