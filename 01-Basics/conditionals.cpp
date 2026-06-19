/*
================================================================================
                        CONDITIONALS IN C++
================================================================================

THEORY:
Conditionals allow you to make decisions in code. Execute different code based
on different conditions.

Main Types:
1. if statement: Execute code if condition is true
2. if-else: Execute one block if true, another if false
3. if-else if-else: Check multiple conditions
4. switch: Choose from multiple options based on value

Syntax:
if (condition) {
    // Execute if condition is true
} else {
    // Execute if condition is false
}

================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    
    // ========== EXAMPLE 1: Simple if Statement ==========
    cout << "\n========== EXAMPLE 1: Simple if ==========" << endl;
    
    int age = 20;
    
    if (age >= 18) {
        cout << "You are an adult" << endl;
    }
    
    if (age < 18) {
        cout << "You are a minor" << endl;
    }
    
    
    // ========== EXAMPLE 2: if-else Statement ==========
    cout << "\n========== EXAMPLE 2: if-else ==========" << endl;
    
    int marks = 45;
    
    if (marks >= 40) {
        cout << "You PASSED!" << endl;
    } else {
        cout << "You FAILED!" << endl;
    }
    
    
    // ========== EXAMPLE 3: if-else if-else ==========
    cout << "\n========== EXAMPLE 3: if-else if-else ==========" << endl;
    
    int percentage = 85;
    
    if (percentage >= 90) {
        cout << "Grade: A (Excellent)" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: B (Good)" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: C (Average)" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: D (Pass)" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }
    
    
    // ========== EXAMPLE 4: Nested if Statements ==========
    cout << "\n========== EXAMPLE 4: Nested if ==========" << endl;
    
    int age2 = 25;
    int income = 50000;
    
    if (age2 >= 21) {
        cout << "Age is valid for loan" << endl;
        if (income >= 30000) {
            cout << "Income is sufficient for loan" << endl;
            cout << "LOAN APPROVED!" << endl;
        } else {
            cout << "Income is not sufficient" << endl;
        }
    } else {
        cout << "Age is not valid for loan" << endl;
    }
    
    
    // ========== EXAMPLE 5: switch Statement ==========
    cout << "\n========== EXAMPLE 5: switch Statement ==========" << endl;
    
    int day = 3;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number" << endl;
    }
    
    
    // ========== EXAMPLE 6: switch with Letters ==========
    cout << "\n========== EXAMPLE 6: switch with char ==========" << endl;
    
    char grade = 'B';
    
    switch (grade) {
        case 'A':
            cout << "Excellent! Score: 90-100" << endl;
            break;
        case 'B':
            cout << "Good! Score: 80-89" << endl;
            break;
        case 'C':
            cout << "Average! Score: 70-79" << endl;
            break;
        case 'D':
            cout << "Pass! Score: 60-69" << endl;
            break;
        case 'F':
            cout << "Fail! Score: <60" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }
    
    
    // ========== EXAMPLE 7: Ternary Operator ==========
    cout << "\n========== EXAMPLE 7: Ternary Operator ==========" << endl;
    
    int num = 10;
    
    // Simple ternary
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result << endl;
    
    // Another example
    int price = 150;
    int discount = (price > 100) ? 20 : 10;
    cout << "Price: " << price << ", Discount: " << discount << "%" << endl;
    
    
    // ========== EXAMPLE 8: Logical Operators in Conditions ==========
    cout << "\n========== EXAMPLE 8: Logical Operators (AND, OR, NOT) ==========" << endl;
    
    int age3 = 25;
    int score = 75;
    
    // AND - Both conditions must be true
    if (age3 >= 18 && score >= 70) {
        cout << "Eligible for scholarship" << endl;
    }
    
    // OR - At least one condition is true
    if (age3 < 18 || score < 50) {
        cout << "Needs extra support" << endl;
    } else {
        cout << "No extra support needed" << endl;
    }
    
    // NOT - Negates condition
    bool is_student = true;
    if (!is_student) {
        cout << "Not a student" << endl;
    } else {
        cout << "Is a student" << endl;
    }
    
    
    // ========== EXAMPLE 9: Practical Example - Voting Eligibility ==========
    cout << "\n========== EXAMPLE 9: Voting Eligibility ==========" << endl;
    
    int voter_age = 22;
    bool citizenship = true;
    bool has_id = true;
    
    if (voter_age >= 18 && citizenship && has_id) {
        cout << "You are eligible to vote!" << endl;
    } else {
        cout << "You are NOT eligible to vote" << endl;
    }
    
    
    // ========== EXAMPLE 10: Traffic Light System ==========
    cout << "\n========== EXAMPLE 10: Traffic Light ==========" << endl;
    
    char light = 'G';
    
    if (light == 'R') {
        cout << "STOP! Light is RED" << endl;
    } else if (light == 'Y') {
        cout << "WAIT! Light is YELLOW" << endl;
    } else if (light == 'G') {
        cout << "GO! Light is GREEN" << endl;
    } else {
        cout << "Invalid light signal" << endl;
    }
    
    
    return 0;
}

/*
================================================================================
COMMON MISTAKES:
================================================================================

1. Using = instead of ==:
   ✗ if (age = 18) { }      // Assignment!
   ✓ if (age == 18) { }     // Comparison

2. Forgetting break in switch:
   ✗ case 1: cout << "One"; // Falls through to case 2!
   ✓ case 1: cout << "One"; break;

3. Semicolon after if:
   ✗ if (x > 5);
     { cout << "Greater"; }  // This always executes!
   ✓ if (x > 5) { cout << "Greater"; }

4. Confusion with else-if:
   ✗ if (...) { } else if (...) { } else if (...) { } else { }
     // Only ONE block executes, not multiple

5. Testing floating point equality:
   ✗ if (x == 3.14) { }     // Might fail due to precision
   ✓ if (abs(x - 3.14) < 0.001) { }

6. Logical operator mistake:
   ✗ if (x > 5 & y < 10)    // Bitwise & not logical &&
   ✓ if (x > 5 && y < 10)   // Logical AND

================================================================================
INTERVIEW NOTES:
================================================================================

Q: When to use switch vs if-else?
A: Use switch for single value comparison (day number, grade).
   Use if-else for range checks (age >= 18).

Q: What happens without break in switch?
A: "Fall-through" - code from matching case continues to next case.

Q: Difference between if-else and ternary?
A: if-else for complex logic, ternary for simple value assignment.
   grade = (score >= 80) ? 'A' : 'B';

Q: How many cases can switch have?
A: Unlimited, but keep it reasonable. Too many cases? Use if-else instead.

================================================================================
PRACTICE QUESTIONS:
================================================================================

1. Take a number and check if it's positive, negative, or zero.

2. Take marks and print grade (A>=90, B>=80, C>=70, D>=60, F<60).

3. Check if a number is even or odd.

4. Take age and check if eligible for voting (>= 18).

5. Take temperature and classify as Hot (>30), Warm (20-30), Cold (<20).

6. Take two numbers and find which is greater.

7. Take day number (1-7) and print day name using switch.

8. Check if person can apply for loan:
   - age >= 21 AND
   - income >= 300000 AND
   - credit_score >= 650

9. Take marks in 3 subjects, calculate average, assign grade.

10. Create a simple ATM menu:
    - 1: Withdraw, 2: Deposit, 3: Check Balance
    - Use switch statement

================================================================================
*/
