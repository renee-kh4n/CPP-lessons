#include <iostream>
#include <string>

using namespace std;

// A function that adds two integers
int addNumbers(int a, int b) {
    return a + b;
}

// display student info
void displayInfo(string name, int age, float height){
    cout << "\nHello, " << name << "! Nice to meet you." << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl << endl;
}

int main() {
    // Variable declarations using different data types
    int age, x, y;
    float height;
    char grade;
    string name;
    bool isStudent;

    // Getting user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in meters): ";
    cin >> height;

    

    cout << "Are you a student? (1 for Yes, 0 for No): ";
    cin >> isStudent;
    
    if (isStudent == 1){
        cout << "Enter your grade (A/B/C): ";
        cin >> grade;
    }

    // Using a function to add two numbers
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;

    int sum = addNumbers(x, y);

    // Displaying the output
    displayInfo(name, age, height);

    

    cout << "Student status: " << (isStudent ? "Yes" : "No") << endl ; // ternary operato: (condition) ? value_if_true : value_if_false;
    if (isStudent == 1){
        cout << "Grade: " << grade << endl ;
    }
    cout << endl;

    cout << "The sum of " << x << " and " << y << " is: " << sum << endl;

    return 0;
}


// endl : flush the buffer, take the new data in
// \n : new line, does not flush the buffer
// buffer : temporary memory 