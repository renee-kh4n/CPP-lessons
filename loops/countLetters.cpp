#include <iostream>

int main(){
    std::string word = "";
    char letter;
    int counter = 0;

    std::cout << "Enter a word: "; // output -> prints "Enter a word"

    std::cin >> word; // Hello

    std::cout << "Enter a letter: "; 

    std::cin >> letter; // a


    // word = "Hello"
    // string = array of characters

    // word = {'H', 'e', 'l', 'l', 'o'}
    //          0    1    2    3    4   // position of letters in variable word

    // word[0] = 'H' // index 0 or position 0
    // word[5] = does not exist, ERROR!! index out of bounds
    // word[2] = 'l'

    // start with 0 ; length = 5; increment at the end of each loop
    for(int i=0; i < word.length(); i++){ // 


        std::cout << word[i] << " == " << letter << " ? ";

        // if(word[i] == letter){ // word[0] = 'H' is it equal to letter = 'a' ?
        //     std::cout << "yes" << std::endl;
        //     counter++;
        // } else {
        //     std::cout << "no" << std::endl;
        // }

    }

    std::cout << "The number of " << letter << " in " << word << " is " << counter << std::endl << std::endl  << std::endl ;

  
    // convert a character to uppercase:  std::toupper(char)
    // convert a character to lowercase:  std::tolower(char)

    for (char &c : word) {
        c = std::toupper(c); // Convert each character to uppercase
    }

    std::cout << "uppercase:" << word; 

    return 0;

}



    // to convert int to string : std::to_string(counter)