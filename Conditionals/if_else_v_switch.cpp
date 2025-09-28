#include <iostream>
#include <string>

// syntax (how the code should be written)
// std::cout << "..." ; output
// std::cin >> variable ; get input


// how do we run:
// g++ <filename.cpp> -o <shortname = executable> // compiling / check for errors
// .\shortname

int main()
{
    int num; // i want it to be an integer (numbers: int (-1), float (-1.5), double (-1.123456))

    // "Enter an integer" //cout = output (like print)
    std::cout << "Enter an integer: " ;

    // get input // c?? = input
    std::cin >> num; 

    // operations
    // + - * /
    // % modulo to check divisibily % 2, % 3 ... so on
    // == (float 1.0 and int 1, equal) or === (float 1.0 and int 1, not equal)
    // a < b ... and so on > <= >=
    
    
    std::cout << num << " is  " ;
    //if-else for range (more flexible conditions)
    if (num < 0  ){ // negative
        std::cout << "negative" ;
    }else if (num == 0){
         std::cout << "zero " ;
    }else{
        std::cout << "positive " ;
    }


   
 

    std::cout << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    // switch for constant values // one specific value at a time
    switch(num){ // it checks the data of the variable (int, char, string)
        case 1:
            std::cout << "Monday"; 
            break; // stop right here, end the switch statement
        case 2:
            std::cout << "Tuesday";
            break; 
        case 3:
            std::cout << "Wed";
            break; 
        case 4:
            std::cout << "Thu";
            break; 
        case 5:
            std::cout << "Fri";
            break; 
        case 6:
            std::cout << "Sat";
            break; 
        case 7:
            std::cout << "Sun";
            break; 
        default: // like an else / last option
            std::cout << "Number is not yet assigned a day!";
    }

  
    return 0;
}

// std::cout << to_integer('A'); // we can convert int to char and vice versa

// if-else for a flexible comparison / evaluation of conditions
    // evaluate in a large range (negative: -1000 ... -1)
    // evaluate a constant (if num = 1, then Monday) like a switch-case


// swtich-case checks if your variable equals a constant number
    // listing your options ( 1 = Mon ... 7 = Sunday)
    // you CANNOT evaluate for a range