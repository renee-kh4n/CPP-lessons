#include <iostream>
#include <string>

void buildPyramid();
bool isEven(int num);
int computeTotalMinutes(int hours, int minutes);
float computePercent(float amount, int percent);


int main(){

    /* VARIABLES: ALWAYS PLACE AT THE TOP PART OF MAIN */

    // isEven
    int num_1, num_2; 
    
    // computeTotalMinutes
    int hours, minutes; 

    // compute percent
    float amount; 
    int percent;

    /* FUNCTION CALLS */

    // print a 3-level pyramid using '*', return nothing
    buildPyramid();

    // given an integer, return true or false
    isEven(num_1);
    isEven(num_2);

    // given hours & minutes, return the total time in minutes
    computeTotalMinutes(hours, minutes);

    // given an amount (number with fractional parts) and a percent in whole number, 
    // return the value that represents the given percent of the amount.
    computePercent(amount, percent);


    return 0;

}


    //  /* FUNCTION CALLS */

    // // isEven
    // std::cout << "Enter two integers: ";
    // std::cin >> num_1 >> num_2;
    // std::cout << num_1 << " is " << (isEven(num_1) ? "even" : "odd") << std::endl;
    // std::cout << num_2 << " is " << (isEven(num_2) ? "even" : "odd") << std::endl;

    // // computeTotalMinutes
    // std::cout << "\nEnter hours and minutes: ";
    // std::cin >> hours >> minutes;
    // int totalMinutes = computeTotalMinutes(hours, minutes);
    // std::cout << "Total time in minutes: " << totalMinutes << " minutes" << std::endl;

    // // computePercent
    // std::cout << "\nEnter amount and percent: ";
    // std::cin >> amount >> percent;
    // float percentValue = computePercent(amount, percent);
    // std::cout << percent << "% of " << amount << " is " << percentValue << std::endl;

    void buildPyramid(){
        std::cout << "  *  " << std::endl;
        std::cout << " * * " << std::endl;
        std::cout << "* * *" << std::endl;
    }

    bool isEven(int num){

        return num % 2 == 0;

    }



    int computeTotalMinutes(int hours, int minutes) {
        return (hours * 60) + minutes;
    }

    float computePercent(float amount, int percent){
        
        // return amount * (percent / 100); percent and 100 are both integers, thus result to '0'
        // OPTION 1: force float: return amount * ( (float)percent / 100); 
        return amount * (percent / 100.0); 
    }


    int countLetter(char letter, std::string word){

        int total = 0;

        for( int i = 0; i < word.length(); i++){
            total = total + (word[i] == letter ? 1 : 0);
        }

        return total;

    }