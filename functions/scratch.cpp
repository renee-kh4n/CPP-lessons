#include <iostream>

// input: two integers
// output: sum

int addition(int num_1, int num_2){  // parameter or parameter list 

    int sum = num_1 + num_2;

    return sum; 
    // returns the sum of two integers
}

int main(){
    // define variables for addition
    int apple, banana; // declaration
    int mango = 3, papaya = 4; // intialization

    // std::cout = display, console out  value 'inside machine << throw it out'
    //parameter is called argument  when the function is 'called / asked to run' in main
    std::cout << addition(apple, banana) << std::endl;  // returns a garbage value
     std::cout << addition(mango, papaya) << std::endl;


   
    // prompt: Enter 2 integers
    // get integer one, two
    // std:: cin  to place a  value inside our variables
    std::cout << "enter 2 integers: " ;
    std::cin >> apple; // take input for apple
    std::cin >> banana; // take input for banana

    std::cin >> apple >> banana; // for fewer lines
    
    // sum 
    std::cout << addition(apple, banana) << std::endl; 

    return 0;
}



//syntax = grammar