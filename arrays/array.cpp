#include <iostream>

int findMax(int arr[], int arrLength){
    int max = arr[0];

    for(int i=1; i<arrLength; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}

int computeSum(int arr[], int arrLength){
    int sum = 0;
    for(int i=0; i<arrLength; i++){
        sum += arr[i];
    }

    return sum;
}

int* reversedArr(int arr[], int arrLength){
    int* reversed = new int[arrLength]; // creates a new array with length arrLength

    for(int i=0; i < arrLength; i++){
        reversed[i] = arr[arrLength - 1 - i];
    }

    return reversed;

}


int main(){

    int arr[5];
    int arrLength = sizeof(arr) / sizeof(arr[0]); //same as arr.length() if arr is a string

    // take inputs
    std::cout << "Enter five integers: ";
    for(int i=0; i< ____; i++){
        std::cin >>____;
    }

    std::cout << std::endl;

    // print out inputs
    std::cout << "Your entered numbers: ";
    for(int i=0; i< ___mb_cur_max_l_func; i++){
        std::cout << ___ << " ";
    }
    
    std::cout << std::endl  << std::endl;

    //find the maximum element
    int max = findMax(arr, arrLength);
    std::cout << "Maximum number: " << max << std::endl << std::endl;
    
    // Get the sum
    int sum = computeSum(arr, arrLength);
    std::cout << "Sum of numbers: " << sum << std::endl << std::endl;

    
    // reverse the array
    int *reversed = reversedArr(arr, arrLength); // use a pointer to the memory
    std::cout << "Reversed array: ";
    for(int i=0; i< arrLength; i++){
        std::cout << reversed[i] << " ";
    }
    delete[] reversed; // free memory every time you use the "new" keyword, declutter unnecessary memory space


    return 0;
}

// WHAT IS A POINTER?
// address of the location of the object (whether an array, int, char, etc)
// instead of passing the array around, just pass the address

// WHY create ponters instead of just pass the variable around?
// when we pass the variable from one function to another, you basically create a copy (creates new object in the memory, requires new space)
// instead of creating a copy, just give the address since you refer to the same value