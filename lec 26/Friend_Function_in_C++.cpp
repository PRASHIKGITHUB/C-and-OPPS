#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
    // Below line means that sum function is allowed to do anything with my private members
    friend complex sum(complex o1, complex o2); // its not a member function , it can be written in the private section as well
};
complex sum(complex o1, complex o2)
{
    complex o3;
    o3.setnumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
 
int main()
{
    complex c1, c2;
    c1.setnumber(1, 4);
    c2.setnumber(5, 8);
    c1.printnumber();
    c2.printnumber();
    complex c3;
    c3 = sum(c1, c2); // c3.sum(c1,c2)--->can't use like that because it's not a member function of class complex
    c3.printnumber();

    return 0;
}

/*properties of friend functions
1.Not in the scope of class
2.Since it's not in the scope of the class, it cannot be called from the object of that class
c1.sum()==Invalid
3.Can be invoked without the help of any object
4.Usually contains the objects as arguments
5.Can be declared inside public or private section of the class
6.It cannot access the members directly by their names and need object_name.member_name
to access any member.





*/