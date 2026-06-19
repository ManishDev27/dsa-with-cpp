/*
================================================================================
                          OPERATORS IN C++
================================================================================

THEORY:
Operators are symbols that perform operations on variables.

Types of Operators:
1. Arithmetic: + - * / % ++ --
2. Assignment: = += -= *= /= %=
3. Comparison: == != > < >= <=
4. Logical: && (AND) || (OR) ! (NOT)
5. Ternary: condition ? true_value : false_value
6. Bitwise: & | ^ ~ << >>
7. sizeof: returns memory size in bytes

Operator Precedence: () > ++/-- > * / % > + - > << >> > < <= > >= > == != > & > ^ > | > && > || > ?:

================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    
    // ========== EXAMPLE 1: Arithmetic Operators ==========
    cout << "\n========== EXAMPLE 1: Arithmetic Operators ==========" << endl;
    
    int a = 20, b = 5;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    
    int x = 23, y = 5;
    cout << "\n" << x << " % " << y << " = " << (x % y) << " (remainder)" << endl;
    
    
    // ========== EXAMPLE 2: Increment and Decrement ==========
    cout << "\n========== EXAMPLE 2: Increment/Decrement ==========" << endl;
    
    int count = 5;
    cout << "Initial count: " << count << endl;
    cout << "count++: " << count++ << " (returns old, then increments)" << endl;
    cout << "After count++, count = " << count << endl;
    
    cout << "++count: " << ++count << " (increments, then returns)" << endl;
    cout << "After ++count, count = " << count << endl;
    
    count--;
    cout << "After count--, count = " << count << endl;
    
    
    // ========== EXAMPLE 3: Assignment Operators ==========
    cout << "\n========== EXAMPLE 3: Assignment Operators ==========" << endl;
    
    int num = 10;
    cout << "num = " << num << endl;
    
    num += 5;  // num = num + 5
    cout << "After num += 5: " << num << endl;
    
    num -= 3;  // num = num - 3
    cout << "After num -= 3: " << num << endl;
    
    num *= 2;  // num = num * 2
    cout << "After num *= 2: " << num << endl;
    
    num /= 4;  // num = num / 4
    cout << "After num /= 4: " << num << endl;
    
    num %= 3;  // num = num % 3
    cout << "After num %= 3: " << num << endl;
    
    
    // ========== EXAMPLE 4: Comparison Operators ==========
    cout << "\n========== EXAMPLE 4: Comparison Operators ==========" << endl;
    
    int p = 15, q = 10;
    
    cout << "p = " << p << ", q = " << q << endl;
    cout << "p == q: " << (p == q) << " (0 = false)" << endl;
    cout << "p != q: " << (p != q) << " (1 = true)" << endl;
    cout << "p > q: " << (p > q) << endl;
    cout << "p < q: " << (p < q) << endl;
    cout << "p >= q: " << (p >= q) << endl;
    cout << "p <= q: " << (p <= q) << endl;
    
    
    // ========== EXAMPLE 5: Logical Operators ==========
    cout << "\n========== EXAMPLE 5: Logical Operators ==========" << endl;
    
    int age = 25;
    int income = 50000;
    
    // AND (&&) - Both must be true
    cout << "\nAND (&&):" << endl;
    cout << "age >= 18 && income > 30000: " 
         << ((age >= 18) && (income > 30000)) << endl;
    cout << "age >= 18 && income > 60000: " 
         << ((age >= 18) && (income > 60000)) << endl;
    
    // OR (||) - At least one true
    cout << "\nOR (||):" << endl;
    cout << "age < 18 || income > 40000: " 
         << ((age < 18) || (income > 40000)) << endl;
    cout << "age < 18 || income > 60000: " 
         << ((age < 18) || (income > 60000)) << endl;
    
    // NOT (!) - Negate
    cout << "\nNOT (!):" << endl;
    bool is_student = true;
    cout << "is_student = " << is_student << endl;
    cout << "!is_student = " << !is_student << endl;
    
    
    // ========== EXAMPLE 6: Ternary Operator (?:) ==========
    cout << "\n========== EXAMPLE 6: Ternary Operator ==========" << endl;
    
    int marks = 75;
    int result = (marks >= 40) ? 1 : 0;  // 1 for pass, 0 for fail
    cout << "Marks: " << marks << ", Result: " << result << endl;
    
    int age2 = 17;
    int voting = (age2 >= 18) ? 1 : 0;  // 1 can vote, 0 cannot
    cout << "Age: " << age2 << ", Can Vote: " << voting << endl;
    
    // Nested ternary
    int score = 85;
    int grade = (score >= 90) ? 1 : (score >= 80) ? 2 : 
                (score >= 70) ? 3 : 4;  // 1=A, 2=B, 3=C, 4=F
    cout << "Score: " << score << ", Grade Code: " << grade << endl;
    
    
    // ========== EXAMPLE 7: Bitwise Operators ==========
    cout << "\n========== EXAMPLE 7: Bitwise Operators ==========" << endl;
    
    int bit1 = 5;   // Binary: 0101
    int bit2 = 3;   // Binary: 0011
    
    cout << "bit1 = " << bit1 << " (Binary: 0101)" << endl;
    cout << "bit2 = " << bit2 << " (Binary: 0011)" << endl;
    cout << "bit1 & bit2 = " << (bit1 & bit2) << " (AND: 0001 = 1)" << endl;
    cout << "bit1 | bit2 = " << (bit1 | bit2) << " (OR: 0111 = 7)" << endl;
    cout << "bit1 ^ bit2 = " << (bit1 ^ bit2) << " (XOR: 0110 = 6)" << endl;
    cout << "bit1 << 1 = " << (bit1 << 1) << " (Left shift: 1010 = 10)" << endl;
    cout << "bit1 >> 1 = " << (bit1 >> 1) << " (Right shift: 0010 = 2)" << endl;
    
    
    // ========== EXAMPLE 8: sizeof Operator ==========
    cout << "\n========== EXAMPLE 8: sizeof Operator ==========" << endl;
    
    cout << "sizeof(int): " << sizeof(int) << " bytes" << endl;
    cout << "sizeof(float): " << sizeof(float) << " bytes" << endl;
    cout << "sizeof(char): " << sizeof(char) << " bytes" << endl;
    cout << "sizeof(bool): " << sizeof(bool) << " bytes" << endl;
    
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "sizeof(arr): " << sizeof(arr) << " bytes" << endl;
    cout << "Elements in array: " << sizeof(arr) / sizeof(arr[0]) << endl;
    
    
    // ========== EXAMPLE 9: Operator Precedence ==========
    cout << "\n========== EXAMPLE 9: Operator Precedence ==========" << endl;
    
    int result1 = 5 + 3 * 2;
    cout << "5 + 3 * 2 = " << result1 << " (* before +)" << endl;
    
    int result2 = (5 + 3) * 2;
    cout << "(5 + 3) * 2 = " << result2 << endl;
    
    int result3 = 10 - 3 - 2;
    cout << "10 - 3 - 2 = " << result3 << " (left to right)" << endl;
    
    int result4 = 2 + 3 * 4 - 1;
    cout << "2 + 3 * 4 - 1 = " << result4 << endl;
    
    
    // ========== EXAMPLE 10: Practical Application ==========
    cout << "\n========== EXAMPLE 10: Practical Use ==========" << endl;
    
    cout << "--- Loan Eligibility ---" << endl;
    int cibil_score = 750;
    int monthly_income = 50000;
    int existing_loans = 2;
    
    int is_eligible = (cibil_score >= 700) && (monthly_income >= 30000) && 
                      (existing_loans <= 3);
    
    cout << "CIBIL: " << cibil_score << endl;
    cout << "Monthly Income: " << monthly_income << endl;
    cout << "Existing Loans: " << existing_loans << endl;
    cout << "Loan Eligible: " << (is_eligible ? 1 : 0) << " (1=YES, 0=NO)" << endl;
    
    cout << "\n--- Grade Calculation ---" << endl;
    int percentage = 85;
    int final_grade = (percentage >= 90) ? 1 : (percentage >= 80) ? 2 : 
                      (percentage >= 70) ? 3 : 4;  // 1=A, 2=B, 3=C, 4=F
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << final_grade << " (1=A, 2=B, 3=C, 4=F)" << endl;
    
    
    return 0;
}

/*
================================================================================
COMMON MISTAKES:
================================================================================

1. Confusion between = and ==:
   ✗ if (a = b) { }     // Assignment! Not comparison
   ✓ if (a == b) { }    // Comparison

2. Mixing & (bitwise) and && (logical):
   ✗ if (a & b) { }     // Bitwise AND
   ✓ if (a && b) { }    // Logical AND

3. Integer division:
   ✗ int result = 5 / 2;  // Result = 2
   ✓ float result = 5.0 / 2;  // Result = 2.5

4. Forgetting parentheses:
   ✗ if (a > 5 && b < 10 || c == 0)  // Ambiguous
   ✓ if ((a > 5 && b < 10) || (c == 0))  // Clear

5. Misunderstanding ++ placement:
   i++   // Post-increment: use old value, then increment
   ++i   // Pre-increment: increment, then use new value

6. Wrong operator precedence:
   ✗ 2 + 3 * 4  // Evaluates to 14, not 20

================================================================================
INTERVIEW NOTES:
================================================================================

Q: Difference between ++x and x++?
A: ++x increments then returns new value; x++ increments but returns old value.
   ++x is faster (no temp copy), so prefer it in loops.

Q: What is short-circuit evaluation?
A: In (a && b), if a is false, b never executes.
   In (a || b), if a is true, b never executes.
   This prevents division by zero errors!

Q: Why == and = confusion?
A: Single = assigns, == compares. Always double-check!

Q: When to use ternary operator?
A: For simple if-else that returns a value.
   grade = (score >= 80) ? 1 : 0;

Q: What's operator precedence?
A: Order of evaluation. * before +, () before everything.
   Always use parentheses for clarity!

================================================================================
PRACTICE QUESTIONS:
================================================================================

1. Take two numbers, show all arithmetic operations and their results.

2. Take marks, assign grade (A>=90, B>=80, C>=70, F<70) using ternary.

3. Check if number is even/odd using modulo operator.

4. Take age and income, check loan eligibility using logical operators.

5. Take three numbers, find which is largest using ternary.

6. Demonstrate all assignment operators (+=, -=, *=, /=, %=).

7. Take two numbers, show results of &, |, ^, <<, >> bitwise operations.

8. Take radius, calculate area and perimeter (float precision).

9. Check if person passes (marks >= 40) AND attends >= 75% using &&.

10. Create student result: percentage → grade using nested ternary operators.

================================================================================
*/
