#include <iostream>
using namespace std;

/*
 * VARIABLES IN C++
 * - A variable is a named storage location that holds a value
 * - Naming conventions: camelCase or snake_case
 * - Must be declared before use
 */

int main() {
    // Integer variables
    int age = 17;
    int year = 2026;
    
    // Floating point variables
    float height = 5.9f;
    double weight = 70.0;
    
    // Character variables
    char grade = 'A';
    
    // Boolean variables (true = 1, false = 0)
    bool isPassed = true;
    
    // String variable
    string name = "Manish";
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    
    // Variable scope
    {
        int localVar = 100;  // Local to this block
        cout << "Local Variable: " << localVar << endl;
    }
    // cout << localVar << endl;  // Error: localVar not accessible here
    
    return 0;
}

/*
 * PRACTICE:
 * 1. Create variables to store your student details (name, roll no, CGPA)
 * 2. Print them in a formatted way
 * 3. Experiment with different data types
 */