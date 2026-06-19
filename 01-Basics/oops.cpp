/*
================================================================================
                    OBJECT-ORIENTED PROGRAMMING (OOP) IN C++
================================================================================

THEORY:
OOP is a programming paradigm based on organizing code into objects that contain
both data (attributes) and functions (methods).

Key Concepts:

1. CLASS: Blueprint for creating objects
   - Contains data members (variables) and member functions (methods)
   - Defines what an object is and what it can do

2. OBJECT: Instance of a class
   - Actual entity created from class blueprint

3. ENCAPSULATION: Bundling data and methods together
   - Data hiding using access modifiers (private, public, protected)

4. ACCESS MODIFIERS:
   - public: Accessible from outside the class
   - private: Only accessible within the class
   - protected: Accessible in class and derived classes

5. ATTRIBUTES/DATA MEMBERS: Variables inside a class

6. METHODS/MEMBER FUNCTIONS: Functions inside a class

7. CONSTRUCTOR: Special method that initializes an object
   - Called automatically when object is created
   - Same name as class, no return type

8. DESTRUCTOR: Special method that cleans up when object is deleted
   - Prefixed with ~ (tilde)

9. this POINTER: Points to current object

10. INHERITANCE: Creating new class from existing class (covered in advanced)

11. POLYMORPHISM: Same name, different behavior (covered in advanced)

12. ABSTRACTION: Hiding complex details, showing only essentials

================================================================================
*/

#include <iostream>
using namespace std;

// ========== EXAMPLE 1: Simple Class Definition ==========

class Car {
    // Data members (attributes)
    public:
        string brand;
        int year;
        float price;
    
    // Member functions (methods)
    public:
        void display() {
            cout << "Brand: " << brand << ", Year: " << year << ", Price: " << price << endl;
        }
};


// ========== EXAMPLE 2: Class with Constructor ==========

class Student {
    public:
        string name;
        int roll_no;
        float gpa;
    
    // Constructor - called when object is created
    public:
        Student(string n, int r, float g) {
            name = n;
            roll_no = r;
            gpa = g;
        }
    
        void display() {
            cout << "Name: " << name << ", Roll: " << roll_no << ", GPA: " << gpa << endl;
        }
};


// ========== EXAMPLE 3: Class with Private and Public ==========

class BankAccount {
    private:
        double balance;     // Private - only accessible within class
    
    public:
        string account_holder;
        long account_number;
    
    public:
        // Constructor
        BankAccount(string holder, long acc_num, double initial_balance) {
            account_holder = holder;
            account_number = acc_num;
            balance = initial_balance;
        }
    
        // Public method to deposit money
        void deposit(double amount) {
            if (amount > 0) {
                balance = balance + amount;
                cout << "Deposited: ₹" << amount << endl;
            }
        }
    
        // Public method to withdraw money
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance = balance - amount;
                cout << "Withdrawn: ₹" << amount << endl;
            } else {
                cout << "Invalid withdrawal amount" << endl;
            }
        }
    
        // Public method to check balance
        void check_balance() {
            cout << "Current Balance: ₹" << balance << endl;
        }
};


// ========== EXAMPLE 4: Class with Methods ==========

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }
    
        int subtract(int a, int b) {
            return a - b;
        }
    
        int multiply(int a, int b) {
            return a * b;
        }
    
        float divide(int a, int b) {
            if (b != 0) {
                return (float)a / b;
            } else {
                cout << "Cannot divide by zero!" << endl;
                return 0;
            }
        }
};


// ========== EXAMPLE 5: Class with Destructor ==========

class Book {
    public:
        string title;
        string author;
        int pages;
    
    public:
        // Constructor
        Book(string t, string a, int p) {
            title = t;
            author = a;
            pages = p;
            cout << "Book object created: " << title << endl;
        }
    
        // Destructor
        ~Book() {
            cout << "Book object destroyed: " << title << endl;
        }
    
        void display() {
            cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
        }
};


int main() {
    
    // ========== CREATING AND USING OBJECTS ==========
    cout << "\n========== EXAMPLE 1: Simple Object ==========\n" << endl;
    
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2023;
    car1.price = 800000;
    car1.display();
    
    
    cout << "\n========== EXAMPLE 2: Using Constructor ==========\n" << endl;
    
    Student s1("Manish", 101, 8.5);
    Student s2("Priya", 102, 9.0);
    
    s1.display();
    s2.display();
    
    
    cout << "\n========== EXAMPLE 3: Private and Public (Encapsulation) ==========\n" << endl;
    
    BankAccount account("Manish", 1234567890, 50000);
    
    cout << "Account Holder: " << account.account_holder << endl;
    cout << "Account Number: " << account.account_number << endl;
    
    account.deposit(10000);
    account.withdraw(5000);
    account.check_balance();
    
    // account.balance = 100000;  // ERROR! Private member, cannot access
    
    
    cout << "\n========== EXAMPLE 4: Methods in a Class ==========\n" << endl;
    
    Calculator calc;
    
    cout << "Addition: 20 + 5 = " << calc.add(20, 5) << endl;
    cout << "Subtraction: 20 - 5 = " << calc.subtract(20, 5) << endl;
    cout << "Multiplication: 20 * 5 = " << calc.multiply(20, 5) << endl;
    cout << "Division: 20 / 5 = " << calc.divide(20, 5) << endl;
    
    
    cout << "\n========== EXAMPLE 5: Constructor and Destructor ==========\n" << endl;
    
    {
        Book book1("C++ Basics", "Bjarne Stroustrup", 500);
        book1.display();
    }  // Destructor called here
    
    
    cout << "\n========== EXAMPLE 6: Array of Objects ==========\n" << endl;
    
    Student students[3] = {
        Student("Aman", 201, 7.5),
        Student("Bharti", 202, 8.0),
        Student("Chitra", 203, 8.8)
    };
    
    cout << "All students:" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }
    
    
    cout << "\n========== EXAMPLE 7: Multiple Objects ==========\n" << endl;
    
    Car car2;
    car2.brand = "Honda";
    car2.year = 2022;
    car2.price = 700000;
    
    Car car3;
    car3.brand = "BMW";
    car3.year = 2024;
    car3.price = 2500000;
    
    car1.display();
    car2.display();
    car3.display();
    
    
    return 0;
}

/*
================================================================================
COMMON MISTAKES:
================================================================================

1. Accessing private members from outside:
   ✗ account.balance = 1000;     // ERROR! balance is private
   ✓ account.check_balance();    // Use public method

2. Forgetting public keyword:
   class MyClass {
       int x;        // Private by default!
   }
   ✓ class MyClass {
       public:
       int x;        // Now public
     }

3. Not using this pointer when needed:
   ✗ Constructor with same parameter names
   ✓ Use this->name = name; for clarity

4. Constructor not initializing all members:
   ✗ Student(string n) { name = n; }  // roll_no and gpa not set!
   ✓ Initialize all members in constructor

5. Accessing this in static context:
   ✗ Static functions cannot use this pointer
   ✓ Only use this in non-static member functions

6. Forgetting to create object:
   ✗ Student;        // Not creating object!
   ✓ Student s;      // Creating object

7. Incorrect object creation syntax:
   ✗ Student s = new Student();  // Creates pointer, not object
   ✓ Student s();                // Creates object

================================================================================
INTERVIEW NOTES:
================================================================================

Q: What is a class?
A: Blueprint for creating objects. Defines structure and behavior.

Q: What is an object?
A: Instance of a class. Actual entity with specific values.

Q: What is encapsulation?
A: Bundling data and methods, hiding implementation using access modifiers.

Q: Difference between public, private, protected?
A: public = accessible everywhere
   private = only within class
   protected = within class and derived classes (inheritance)

Q: What is a constructor?
A: Special method that initializes object when created. Runs automatically.

Q: What is a destructor?
A: Special method that runs when object is destroyed. Cleans up resources.

Q: What is the this pointer?
A: Points to current object. Used to reference object's own members.

Q: Why use private members?
A: Data hiding. Prevent unauthorized access/modification.

Q: Can constructor return value?
A: No. Constructors don't have return type.

Q: Can you have multiple constructors?
A: Yes. Constructor overloading (cover later with function overloading).

================================================================================
PRACTICE QUESTIONS:
================================================================================

1. Create a Circle class with:
   - radius (private)
   - Methods: getArea(), getPerimeter()
   - Constructor to initialize radius

2. Create a Person class with:
   - name, age, profession
   - Method to display details

3. Create a Library class with:
   - books (count)
   - addBook(), removeBook(), displayBooks()

4. Create a Temperature class with:
   - celsius (private)
   - Methods to convert to Fahrenheit
   - Constructor

5. Create an Employee class with:
   - name, salary (private), employee_id
   - calculateBonus() method
   - displaySalary() method

6. Create a Rectangle class with:
   - length, width (private)
   - Methods: getArea(), getPerimeter()
   - Constructor

7. Create a Time class with:
   - hours, minutes, seconds (private)
   - Methods: display(), addSeconds()

8. Create a BankAccount class (like in example) and:
   - Add interest calculation
   - Track transaction history

9. Create a Product class with:
   - name, price, quantity
   - calculateTotal()
   - applyDiscount()

10. Create a Student class with:
    - Name, marks in 3 subjects (private)
    - Methods: calculateAverage(), getGrade(), displayResult()

================================================================================
*/
