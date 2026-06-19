/*
================================================================================
                           DATA TYPES IN C++
================================================================================

THEORY:
Data types specify what kind of data a variable can hold and how much memory it uses.

Main Categories:
1. Integer Types: int (4 bytes), short (2), long (8), long long (8)
2. Floating Types: float (4 bytes, 6-7 decimals), double (8 bytes, 15-16 decimals)
3. Character: char (1 byte, stores single character)
4. Boolean: bool (1 byte, true/false)

Choose data type based on:
- Value range needed
- Precision required (decimal places)
- Memory constraints

================================================================================
*/

#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {
    
    // ========== EXAMPLE 1: Integer Types ==========
    cout << "\n========== EXAMPLE 1: Integer Types ==========" << endl;
    
    short small = 100;
    int regular = 100000;
    long large = 10000000000L;
    long long very_large = 9223372036854775807LL;
    
    cout << "short: " << small << " (Size: " << sizeof(short) << " bytes)" << endl;
    cout << "int: " << regular << " (Size: " << sizeof(int) << " bytes)" << endl;
    cout << "long: " << large << " (Size: " << sizeof(long) << " bytes)" << endl;
    cout << "long long: " << very_large << " (Size: " << sizeof(long long) << " bytes)" << endl;
    
    
    // ========== EXAMPLE 2: Signed vs Unsigned ==========
    cout << "\n========== EXAMPLE 2: Signed vs Unsigned ==========" << endl;
    
    int signed_int = -100;
    unsigned int unsigned_int = 100;
    
    cout << "Signed int: " << signed_int << " (can be negative)" << endl;
    cout << "Unsigned int: " << unsigned_int << " (only positive)" << endl;
    cout << "Max int: " << INT_MAX << endl;
    cout << "Min int: " << INT_MIN << endl;
    cout << "Max unsigned: " << UINT_MAX << endl;
    
    
    // ========== EXAMPLE 3: Floating Point Types ==========
    cout << "\n========== EXAMPLE 3: Floating Point Types ==========" << endl;
    
    float single = 3.14159f;
    double double_prec = 3.14159265;
    
    cout << fixed << setprecision(15);
    cout << "float: " << single << endl;
    cout << "double: " << double_prec << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    
    
    // ========== EXAMPLE 4: Character Type ==========
    cout << "\n========== EXAMPLE 4: Character Type ==========" << endl;
    
    char ch = 'A';
    cout << "Character: " << ch << endl;
    cout << "ASCII value: " << (int)ch << endl;
    
    cout << "ASCII values:" << endl;
    for (char c = 'A'; c <= 'E'; c++) {
        cout << c << " = " << (int)c << endl;
    }
    
    
    // ========== EXAMPLE 5: Boolean Type ==========
    cout << "\n========== EXAMPLE 5: Boolean Type ==========" << endl;
    
    bool is_true = true;
    bool is_false = false;
    
    cout << "True: " << is_true << endl;
    cout << "False: " << is_false << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    
    bool from_int1 = 5;    // true
    bool from_int2 = 0;    // false
    cout << "bool(5): " << from_int1 << ", bool(0): " << from_int2 << endl;
    
    
    // ========== EXAMPLE 6: Type Conversion (Implicit) ==========
    cout << "\n========== EXAMPLE 6: Implicit Conversion ==========" << endl;
    
    int x = 10;
    float y = x;
    cout << "int " << x << " converted to float: " << y << endl;
    
    int a = 5, b = 2;
    float result = a / b;  // Integer division first!
    cout << "5 / 2 (int division): " << result << endl;
    
    float result2 = (float)a / b;  // Explicit cast
    cout << "5 / 2 (float division): " << result2 << endl;
    
    
    // ========== EXAMPLE 7: Type Casting (Explicit) ==========
    cout << "\n========== EXAMPLE 7: Explicit Type Casting ==========" << endl;
    
    float price = 99.99f;
    int whole_price = (int)price;
    cout << "Price: " << price << " -> Whole: " << whole_price << endl;
    
    char grade = 'A';
    int ascii = (int)grade;
    cout << "Grade: " << grade << " -> ASCII: " << ascii << endl;
    
    
    // ========== EXAMPLE 8: Choosing Right Type ==========
    cout << "\n========== EXAMPLE 8: Type Selection ==========" << endl;
    
    int age = 25;              // Small whole numbers
    double price_value = 1999.99;    // Decimal numbers (precise)
    unsigned int count = 500;  // Non-negative count
    float rating = 8.5f;       // Moderate precision decimal
    long long population = 8000000000LL;  // Very large numbers
    bool is_active = true;     // Yes/No values
    char grade2 = 'A';         // Single character
    
    cout << "Age: " << age << " (int)" << endl;
    cout << "Price: " << price_value << " (double)" << endl;
    cout << "Count: " << count << " (unsigned)" << endl;
    cout << "Rating: " << rating << " (float)" << endl;
    
    
    // ========== EXAMPLE 9: All Data Type Sizes ==========
    cout << "\n========== EXAMPLE 9: Data Type Sizes ==========" << endl;
    
    cout << "Data Type Sizes (in bytes):" << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    
    
    // ========== EXAMPLE 10: Practical Application ==========
    cout << "\n========== EXAMPLE 10: Practical Example ==========" << endl;
    
    int principal = 100000;
    float rate = 8.5f;
    int time = 2;
    
    float simple_interest = (principal * rate * time) / 100;
    float total_amount = principal + simple_interest;
    float monthly_emi = total_amount / (time * 12);
    
    cout << "Loan Calculation:" << endl;
    cout << "Principal: " << principal << endl;
    cout << "Simple Interest: " << simple_interest << endl;
    cout << "Total Amount: " << total_amount << endl;
    cout << "Monthly EMI: " << monthly_emi << endl;
    
    return 0;
}

/*
================================================================================
COMMON MISTAKES:
================================================================================

1. Overflow - using wrong type for large numbers:
   ✗ int large = 10000000000;      // Overflow!
   ✓ long long large = 10000000000LL;

2. Precision loss with float:
   ✗ float pi = 3.14159265;        // Loses precision
   ✓ double pi = 3.14159265;       // Better precision

3. Integer division when you need decimal:
   ✗ int result = 5 / 2;           // Result = 2
   ✓ float result = 5.0 / 2;       // Result = 2.5

4. Forgetting suffix for literals:
   ✗ float x = 3.14;               // Actually double!
   ✓ float x = 3.14f;              // Correct

5. Mixing signed and unsigned:
   ✗ unsigned int x = -5;          // -5 becomes large positive
   ✓ int x = -5;                   // Correct

================================================================================
INTERVIEW NOTES:
================================================================================

Q: When to use double instead of float?
A: Use double for precision (scientific, financial). Float for basic decimals.

Q: What happens with integer division?
A: 5 / 2 = 2 (truncated). Use 5.0 / 2 for 2.5

Q: Why use unsigned when you only need positive numbers?
A: Allows larger positive range. For age/count, use unsigned.

Q: What is type casting?
A: Converting one type to another. int x = (int)3.14; converts float to int.

Q: Difference between implicit and explicit conversion?
A: Implicit = automatic by compiler. Explicit = using (type) cast operator.

================================================================================
PRACTICE QUESTIONS:
================================================================================

1. Declare variables of each type, print values and sizes.

2. Take a character, display its ASCII value and next 5 characters.

3. Take two numbers (int and float), perform all operations, compare results.

4. Demonstrate implicit and explicit type conversions.

5. Store student data (roll, age, marks, gpa, pass/fail), display formatted.

6. Take price and quantity, calculate total (using appropriate types).

7. Find max/min values for int, long, unsigned int using limits library.

8. Take radius, calculate area using appropriate float type, display.

9. Take birth year, calculate age, display (int calculation).

10. Create bank account info: account number (long long), balance (double), 
    active status (bool).

================================================================================
*/
