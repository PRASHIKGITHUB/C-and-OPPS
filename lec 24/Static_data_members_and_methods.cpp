#include <iostream>
using namespace std;
class Employee
{
    int Id;
    static int count; //this count is for all objects of emoloyee class
                      // it means harry , rohan , lovish are sharing same value of count,if one object uses count
                      // for next object it will recieve same count comming with some upgradation done in first
                      // object run function you will get it
                      // if you want count start with 1000
                      // int employee :: count=1000--->acceptable[edit count outside class]
                      // static int count=1000 is not acceptable[editing count inside class will through error]

public:
    void setData(void)
    {
        cout << "Enter the value of id" << endl;
        cin >> Id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of employee is " << Id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        //dont have this keyword
        //cout<<Id; -->throw error because static function has only access to other static functions or variable
        cout << "The value of count is " << count << endl;
    }
};
// Count is the static data member of class Employee

int Employee::count; // Default value of count is zero
                     // for static variables we have to initialize it outside calss otherwise will through big error

int main()
{
    Employee harry, rohan, lovish;
    
    harry.setData();
    harry.getData();
    Employee ::getCount();

    rohan.setData();
    rohan.getData();
    Employee ::getCount();

    lovish.setData();
    lovish.getData();
    Employee ::getCount();
    // cout<<Employee::count<<endl;
    return 0;
}