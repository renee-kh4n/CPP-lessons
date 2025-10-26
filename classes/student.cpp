#include <iostream>
#include <string>

class Student {
private:
    // Private attributes: only accessible inside the class
    std::string name;
    int age;
    double grade;

    // Private method
    std::string getRemarks() const {
        if (grade >= 90) return "Excellent";
        else if (grade >= 75) return "Good";
        else return "Needs Improvement";
    }

public:
    // Constructor
    Student(std::string n, int a, double g) {
        name = n;
        age = a;
        grade = g;
    }

    // Public method to display student info
    void displayInfo() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Grade: " << grade << "\n";
        std::cout << "Remarks: " << getRemarks() << "\n\n";
    }

    // Setter and getter for grade (example of encapsulation)
    void setGrade(double g) { // setter = sets value from outside the function 
        grade = g;            // always void
    }

    double getGrade() const { // getter = gets the value of the attribute from within the func
        return grade;         // function datatype depends on the attribute datatype
    }                         // no parameters

    // i want to modify the age from the outside: setter or a getter
    // setAge or getAge ?
    // datatype = return type
    // void for functions returning nothing

    void setAge(int a){
        age = a;
    }

    
    int getAge(){
        return age;
    }

    // int setAge(int a){ // return what you received, doesn't make sense
    //     age = a;
    //     return age; 
    // }

};

int main() {
    // Create Student object
    Student s1("Douglas", 12, 87.8);

    // Display their information
    s1.displayInfo();

    // Modify a grade using a setter
    s1.setGrade(97.8);

    // update age
    s1.setAge(15);

    std::cout << "After updating " << "Douglas's grade:\n";
    s1.displayInfo();

    // get the age: 
    std::cout << "Douglas's age: ";
    std::cout << s1.getAge() ;

    return 0;
}
