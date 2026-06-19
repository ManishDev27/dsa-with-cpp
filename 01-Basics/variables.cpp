/*
================================================================================
                            VARIABLES IN C++
================================================================================

THEORY:
A variable is a named container that stores data. It has a name, type, and value.

Key Points:
- Declaration: int age;           // Reserve memory
- Initialization: int age = 20;   // Assign initial value
- Scope: Global (outside main), Local (inside function/block)
- Naming Rules: Start with letter/underscore, no spaces, case-sensitive

================================================================================
*/

#include <iostream>
using namespace std;

// Global variable
int global_count = 100;

int main() {
    
    // ========== EXAMPLE 1: Basic Declaration & Initialization ==========
    cout << "\n========== EXAMPLE 1: Declaration & Initialization ==========" << endl;
    
    int age = 19;
    float height = 5.9f;
    char grade = 'A';
    bool is_student = true;
    
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (is_student ? "Yes" : "No") << endl;
    
    
    // ========== EXAMPLE 2: Multiple Variables ==========
    cout << "\n========== EXAMPLE 2: Multiple Variables ==========" << endl;
    
    int x = 10, y = 20, z = 30;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    
    
    // ========== EXAMPLE 3: Modifying Variables ==========
    cout << "\n========== EXAMPLE 3: Modifying Values ==========" << endl;
    
    int count = 5;
    cout << "Initial: " << count << endl;
    count = 10;
    cout << "After change: " << count << endl;
    count++;
    cout << "After increment: " << count << endl;
    
    
    // ========== EXAMPLE 4: Constants ==========
    cout << "\n========== EXAMPLE 4: Constants ==========" << endl;
    
    const int DAYS_IN_WEEK = 7;
    const float PI = 3.14159f;
    
    cout << "Days in week: " << DAYS_IN_WEEK << endl;
    cout << "PI value: " << PI << endl;
    // DAYS_IN_WEEK = 8;  // ERROR! Cannot change constant
    
    
    // ========== EXAMPLE 5: Variable Scope ==========
    cout << "\n========== EXAMPLE 5: Scope Example ==========" << endl;
    
    int local_var = 50;
    cout << "Local variable: " << local_var << endl;
    cout << "Global count: " << global_count << endl;
    
    {
        int block_var = 100;
        cout << "Block variable: " << block_var << endl;
    }
    // cout << block_var;  // ERROR! Out of scope
    
    
    // ========== EXAMPLE 6: User Input ==========
    cout << "\n========== EXAMPLE 6: Taking Input ==========" << endl;
    
    int user_age;
    cout << "Enter your age: ";
    cin >> user_age;
    cout << "You are " << user_age << " years old" << endl;
    
    
    // ========== EXAMPLE 7: Memory Size ==========
    cout << "\n========== EXAMPLE 7: Memory Usage ==========" << endl;
    
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    
    
    // ========== EXAMPLE 8: Static Variables ==========
    cout << "\n========== EXAMPLE 8: Static Variables ==========" << endl;
    
    {
        static int call_count = 0;
        call_count++;
        cout << "Block 1 executions: " << call_count << endl;
    }
    
    {
        static int call_count = 0;
        call_count++;
        cout << "Block 2 executions: " << call_count << endl;
    }
    
    
    // ========== EXAMPLE 9: Good Naming ==========
    cout << "\n========== EXAMPLE 9: Meaningful Names ==========" << endl;
    
    int student_marks = 95;
    float gpa = 8.5f;
    bool is_passed = true;
    
    cout << "Marks: " << student_marks << ", GPA: " << gpa << endl;
    cout << "Passed: " << (is_passed ? "Yes" : "No") << endl;
    
    
    // ========== EXAMPLE 10: Practical Use ==========
    cout << "\n========== EXAMPLE 10: Real-World Example ==========" << endl;
    
    int roll_number = 101;
    int department = 3;  // 1=CSE, 2=ECE, 3=ME
    float percentage = 85.5f;
    
    cout << "\n--- Student Information ---" << endl;
    cout << "Roll No: " << roll_number << endl;
    cout << "Department: " << department << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    
    return 0;
}

/*
================================================================================
COMMON MISTAKES:
================================================================================

1. Using uninitialized variables:
   ✗ int x;              // Contains random value
   ✓ int x = 0;          // Properly initialized

2. Declaring same variable twice:
   ✗ int age = 20;
     int age = 25;       // ERROR!

3. Using undefined variables:
   ✗ cout << height;     // Not declared before use

4. Forgetting const for constants:
   ✗ float PI = 3.14;    // Can be changed by mistake
   ✓ const float PI = 3.14;  // Protected

5. Variable name case sensitivity:
   int Age = 10;
   cout << age;          // ERROR! Different names

6. Going out of scope:
   {
       int x = 5;
   }
   cout << x;            // ERROR! x doesn't exist here

================================================================================
INTERVIEW NOTES:
================================================================================

Q: What's the difference between declaration and initialization?
A: Declaration allocates memory; initialization assigns a starting value.
   int x;        // Declaration only
   int x = 10;   // Declaration + Initialization

Q: What is scope?
A: The region where a variable can be accessed.
   Global = anywhere, Local = inside its block only

Q: Why initialize variables?
A: Uninitialized variables have garbage values, causing unpredictable behavior.

Q: Global vs Local?
A: Global variables exist throughout program, local only in their block.

================================================================================
PRACTICE QUESTIONS:
================================================================================

1. Declare variables for age, marks, and GPA. Take input and display.

2. Create constants for PI, GRAVITY, and use them in calculations.

3. Declare global and local variables with same name. Show scope difference.

4. Take two numbers, swap them, and display.

5. Calculate area of circle given radius (use const PI).

6. Take 5 subject marks, store in variables, calculate average.

7. Demonstrate static variable behavior with multiple block executions.

8. Create student record with roll number, age, marks.

9. Use sizeof() to show memory used by different variable types.

10. Take user input for length and width, calculate area and perimeter.

================================================================================
*/
