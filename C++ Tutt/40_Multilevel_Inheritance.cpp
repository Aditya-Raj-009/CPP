#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int roll)
{
    this->roll = roll;
}

void Student::get_roll_number()
{
    cout << "The roll number is: " << roll << endl;
}

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m1, float m2)
{
    this->maths = m1;
    this->physics = m2;
}

void Exam :: get_marks()
{

    cout << "The marks of physics are " << physics << endl;
    cout << "The marks of maths are " << maths << endl;
}

class Result: public Exam{
    float percentage;   // private by default.
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            percentage = (maths+physics)/2;
            cout<<"Percentage: "<<percentage<<" %"<<endl;
        }
};

int main(void)
{
    Result aditya;

    aditya.set_roll_number(42);
    aditya.set_marks(97.23,56.87);
    aditya.display_result();
    
    return 0;
}

