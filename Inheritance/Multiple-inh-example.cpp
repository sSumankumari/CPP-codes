#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 Classes:
1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
1. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any 4 scientific operations of your choice and displays the results using another function.

Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of Inheritance are you using? ---> Multiple Inheritance
Q2. Which mode of Inheritance are you using? ---> public SimpleCalculator, public ScientificCalculator
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?
*/

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class ScientificCalculator
{
        int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        // cout << "Enter the value of b" << endl;
        // cin >> b;
    }
    void performOperationsScientific()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main()
{
    // SimpleCalculator calc;
    // ScientificCalculator calc;
    // calc.getData();
    // calc.performOperations();
    HybridCalculator calc;
    calc.getDataSimple();
    calc.performOperationsSimple();
    calc.getDataScientific();
    calc.performOperationsScientific();
    
    return 0;
}