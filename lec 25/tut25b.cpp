#include <iostream>
using namespace std;
class complex
{
    int x;
    int y;

public:
    void setdata(int v1, int v2)
    {
        x = v1;
        y = v2;
    }
    void addVector(complex o1, complex o2)
    {
        x=o1.x+o2.x;
        y=o1.y+o2.y;
    }
    // void printnumber(complex c){
    //     cout<<c.x<<"+"<<c.y<<"i"<<endl;
    // }

    // This will work too
    void printnumber(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main()
{
    complex o1,o2,o3;
    o1.setdata(1,2);
    // o1.printnumber(o1);
    o1.printnumber();
    o2.setdata(5,3);
    // o2.printnumber(o2);
    o2.printnumber();
    o3.addVector(o1,o2);
    // o3.printnumber(o3);
    o3.printnumber();
    
    return 0;
}