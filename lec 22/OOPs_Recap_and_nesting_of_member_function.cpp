// OOPS - classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in c)
// structures had limitatios
//        - members are public
//        - no methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
           // claass definition
           } harry, rohan , lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member function
#include <iostream>
#include <string>
using namespace std;

class binary
{
private: //by default class ke members private hote hai 
    string s;  // --->more detail about string about is given in pdf provided in the same folder
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();    //--->this is nesting of members
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << endl;
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary b;
    b.read();
   // b.chk_bin(); since it is private function it cannot be use as sarkari
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}