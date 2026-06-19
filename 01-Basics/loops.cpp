/*
================================================================================
                            LOOPS IN C++
================================================================================

THEORY:
Loops allow you to execute code multiple times without rewriting it.

Main Types:
1. for loop: Run fixed number of times (when you know count)
2. while loop: Run while condition is true (when count unknown)
3. do-while loop: Execute at least once, then check condition
4. Nested loops: Loop inside a loop

Syntax:
for (initialization; condition; increment) {
    // Code to execute
}

while (condition) {
    // Code to execute
}

================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    
    // ========== EXAMPLE 1: Simple for Loop ==========
    cout << "\n========== EXAMPLE 1: Simple for Loop ==========" << endl;
    
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
    
    
    // ========== EXAMPLE 2: Counting with for Loop ==========
    cout << "\n========== EXAMPLE 2: Counting ==========" << endl;
    
    cout << "Numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "\nNumbers from 10 to 1:" << endl;
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    
    // ========== EXAMPLE 3: for Loop - Multiplication Table ==========
    cout << "\n========== EXAMPLE 3: Multiplication Table (5) ==========" << endl;
    
    int num = 5;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
    
    
    // ========== EXAMPLE 4: Sum Using for Loop ==========
    cout << "\n========== EXAMPLE 4: Sum of Numbers ==========" << endl;
    
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    cout << "Sum of 1 to 10: " << sum << endl;
    
    
    // ========== EXAMPLE 5: while Loop ==========
    cout << "\n========== EXAMPLE 5: while Loop ==========" << endl;
    
    int count = 1;
    cout << "Counting with while loop:" << endl;
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    
    
    // ========== EXAMPLE 6: while Loop - Factorial ==========
    cout << "\n========== EXAMPLE 6: Factorial ==========" << endl;
    
    int n = 5;
    int factorial = 1;
    int i = 1;
    
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
    
    
    // ========== EXAMPLE 7: do-while Loop ==========
    cout << "\n========== EXAMPLE 7: do-while Loop ==========" << endl;
    
    int x = 1;
    cout << "do-while loop (executes at least once):" << endl;
    
    do {
        cout << x << " ";
        x++;
    } while (x <= 5);
    cout << endl;
    
    // do-while even when condition is false initially
    int invalid = 10;
    cout << "\ndo-while with false condition:" << endl;
    do {
        cout << "This executes at least once!" << endl;
    } while (invalid < 5);  // Condition is false, but loop ran once
    
    
    // ========== EXAMPLE 8: Nested Loops ==========
    cout << "\n========== EXAMPLE 8: Nested Loops - Pattern ==========" << endl;
    
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    
    
    // ========== EXAMPLE 9: Nested Loops - Star Pattern ==========
    cout << "\n========== EXAMPLE 9: Star Pattern ==========" << endl;
    
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    
    // ========== EXAMPLE 10: Nested Loops - 2D Table ==========
    cout << "\n========== EXAMPLE 10: Multiplication Table Grid ==========" << endl;
    
    cout << "\nTables from 1 to 3:" << endl;
    for (int table = 1; table <= 3; table++) {
        cout << "\n--- Table of " << table << " ---" << endl;
        for (int i = 1; i <= 5; i++) {
            cout << table << " x " << i << " = " << (table * i) << endl;
        }
    }
    
    
    // ========== EXAMPLE 11: break Statement ==========
    cout << "\n========== EXAMPLE 11: break - Exit Loop ==========" << endl;
    
    cout << "Finding first multiple of 3 in 1-10:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            cout << "Found: " << i << endl;
            break;  // Exit loop
        }
    }
    
    
    // ========== EXAMPLE 12: continue Statement ==========
    cout << "\n========== EXAMPLE 12: continue - Skip Iteration ==========" << endl;
    
    cout << "Numbers excluding multiples of 3:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;  // Skip this iteration
        }
        cout << i << " ";
    }
    cout << endl;
    
    
    // ========== EXAMPLE 13: for Loop with step ==========
    cout << "\n========== EXAMPLE 13: Loop with Different Steps ==========" << endl;
    
    cout << "Even numbers (step by 2):" << endl;
    for (int i = 0; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "\nMultiples of 5:" << endl;
    for (int i = 5; i <= 50; i += 5) {
        cout << i << " ";
    }
    cout << endl;
    
    
    // ========== EXAMPLE 14: Infinite Loop (with exit) ==========
    cout << "\n========== EXAMPLE 14: Infinite Loop (Controlled) ==========" << endl;
    
    int attempts = 0;
    while (true) {
        if (attempts >= 3) {
            cout << "Loop exited!" << endl;
            break;
        }
        cout << "Attempt " << (attempts + 1) << endl;
        attempts++;
    }
    
    
    // ========== EXAMPLE 15: Practical - Find Sum and Average ==========
    cout << "\n========== EXAMPLE 15: Sum and Average ==========" << endl;
    
    int numbers = 5;
    int total = 0;
    
    cout << "Sum of first " << numbers << " numbers:" << endl;
    for (int i = 1; i <= numbers; i++) {
        total = total + i;
        cout << i << " ";
    }
    cout << "\n= " << total << endl;
    cout << "Average: " << (float)total / numbers << endl;
    
    
    return 0;
}

/*
================================================================================
COMMON MISTAKES:
================================================================================

1. Infinite loop - forgetting increment:
   ✗ for (int i = 1; i <= 5; ) { cout << i; }  // i never changes!
   ✓ for (int i = 1; i <= 5; i++) { cout << i; }

2. Off-by-one error:
   ✗ for (int i = 1; i < 5; i++)  // Prints 1,2,3,4 not 1-5
   ✓ for (int i = 1; i <= 5; i++) // Prints 1,2,3,4,5

3. Condition always true:
   ✗ while (true) { cout << "Loop"; }  // Never exits!
   ✓ while (condition) { cout << "Loop"; }

4. Loop variable scope:
   for (int i = 0; i < 5; i++) { }
   cout << i;  // ERROR! i doesn't exist outside loop

5. Forgetting braces in single statement:
   ✗ for (int i = 0; i < 5; i++)
       cout << i;
       cout << "Done";  // Always executes, outside loop!
   ✓ for (int i = 0; i < 5; i++) {
       cout << i;
     }

6. continue vs break confusion:
   break = exits loop completely
   continue = skips to next iteration

================================================================================
INTERVIEW NOTES:
================================================================================

Q: When to use for vs while?
A: for when you know iteration count. while when condition unknown.

Q: What's the difference between while and do-while?
A: while checks condition first. do-while executes at least once.

Q: How to exit a loop early?
A: Use break statement to exit immediately.

Q: How to skip current iteration?
A: Use continue statement to jump to next iteration.

Q: What's an infinite loop?
A: A loop that never ends (condition always true).
   Use Ctrl+C to stop in console.

Q: What's the time complexity?
A: O(n) for loops that run n times.

================================================================================
PRACTICE QUESTIONS:
================================================================================

1. Print numbers 1 to 100 using for loop.

2. Calculate sum of 1 to 50 using loop.

3. Print multiplication table of a number.

4. Count digits in a number using loop.

5. Check if a number is prime using loop.

6. Print pattern (pyramid of stars).

7. Find factorial of a number.

8. Print all even numbers from 1 to 100.

9. Count vowels in a string using loop.

10. Create a countdown timer (10 to 1).

11. Find average of 5 numbers (take input in loop).

12. Print Fibonacci series up to n terms.

13. Find largest number in a list using loop.

14. Print ASCII values of characters A to Z.

15. Create a number guessing game using loop.

================================================================================
*/
