
#include <bits/stdc++.h>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculator
{
    float x, y;

public:
    void setdata(float a, float b)
    {
        x = a;
        y = b;
    }
    float ans(char c)
    {
        switch (c)
        {
        case '+':
            return x + y;
            break;
        case '-':
            return x - y;
            break;
        case '*':
            return x * y;
            break;
        case '/':
            return x / y;
            break;
        default:
            cout << "You have entered an invalid operation" << endl;
        }
    }
};

int main()
{
    SimpleCalculator c;
    float a, b;
    char temp;
    cout << "Enter the two Numbers " << endl;
    cin >> a >> b;
    c.setdata(a, b);
    cout << "Select any of these 4 Operations +, - , * , / " << endl;
    cin >> temp;

    cout << c.ans(temp) << endl;

    return 0;
}