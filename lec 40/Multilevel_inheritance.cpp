#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;
    // int roll_number

public:
    void set_marks(float, float);
    void get_marks(void);
    // void set_roll_number(int);
    // void get_roll_number();
};

void exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in maths are: " << physics << endl;
}

class result : public exam
{
protected:
    // float maths;
    // float physics;
    // int roll_number
private:
    float percentage;

public:
    // void set_marks(float, float);
    // void get_marks(void);
    // void set_roll_number(int);
    // void get_roll_number();
    void diaplay()
    {
        get_roll_number();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    Notes:
        If we are inheriting B from A and C from B: [A--->B---->C]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called inheritance path
    */
    result harry;
    harry.set_roll_number(21);
    harry.set_marks(98.62, 99.82);
    harry.diaplay();
    return 0;
}