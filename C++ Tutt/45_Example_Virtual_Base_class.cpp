#include<iostream>
using namespace std;

class Student{

    protected:
        int roll_no;
    public:
        void set_roll(int a){
            roll_no = a;
        }
        void print_roll(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class Test :  virtual public Student{

    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void)
        {
            cout<<"You have obtained: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
};

class Sports : public virtual Student{

    protected:
        float score;
    public:
        void set_secore(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your PT Score is "<<score<<endl;
        }
};

class Result: public Test, public Sports{

    private:
        float total;
    public:
        void display(void)
        {
            total = maths + physics + score;
            print_roll();
            print_marks();
            print_score();
            cout<<"Your total score is "<<total<<endl;
        }
};

int main()
{
    Result aditya;
    aditya.set_roll(4859);
    aditya.set_marks(87.79,73.97);
    aditya.set_secore(9);
    aditya.display();

    return 0;
}