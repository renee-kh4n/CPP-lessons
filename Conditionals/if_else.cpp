#include <iostream>

//return true or false (defines the return_type)
// given a number / input  (parameter)
// check if it is even or odd (description)

bool isEven(int num){ // 5
    
    return num % 2 == 0; // 5 % 2 ? 1 // false because 1 != 0 
                        // return false asap, no need to store to variables
    
} 

int main()
{
    int num;
    std::string abcd; 
     
    std::cout << "Enter a number: "; // called a prompt
    
    std::cin >> num; 
    
    std::cout << "You entered " << num << std::endl ; 
    
    bool abc = isEven(num); // calling isEven function
    
    // if else version
    if (abc == 0){
        abcd = "odd.";
    }else{
        abcd = "even.";
    }
    
    std::cout << "The number you entered is " << abcd << std::endl;
    
    
    // ternary operator
    // store in a variable = (condition) ? true : false;
    std::cout << "Ternary operator result:  "  ; 
    std::cout << ((num % 2 == 0) ? "even" : "odd");

    return 0;
}