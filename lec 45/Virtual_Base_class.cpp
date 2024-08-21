#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;
    // float roll_no;
public:
    // void set_number(int a);
    // void print_number(void);
    void set_marks(float maths, float physics)
    {
        this->maths = maths;
        this->physics = physics;
    }

    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;
    // float roll_no;
public:
    // void set_number(int a);
    // void print_number(void);
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    // float maths, physics;
    // float roll_no;
    // float score;
public:
    // void set_number(int a);
    // void print_number(void);
    // void set_marks(float maths, float physics)
    // void print_marks(void)
    // void set_score(float sc)
    // void print_score(void)

private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};
int main()
{
    // Student s1;
    // s1.set_number(54);
    // s1.print_number();

    
    // Test t1;
    // t1.set_marks(2,4);
    // t1.print_marks();


    Result r1;
    r1.set_marks(3, 4);
    r1.print_marks();
    r1.set_number(54);
    r1.print_number();
    r1.set_score(100);
    r1.print_score();
    r1.display();
    return 0;
}