#include<iostream>
using namespace std;

/*
Inheritance :
    student --> Test
    student --> Sports
    Test --> Result
    Sports --> Result
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_roll_no(int a){
            roll_no = a;
        }

        void print_roll_no(){
            cout<<"Your roll no is "<<roll_no<<endl;
        }

};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"You result is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_roll_no();
            print_marks();
            print_score();
            cout<<"Your total score is "<<total<<endl;
        }
};

int main(){

    // Virtual Base class

    Result harry;
    harry.set_roll_no(78);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();

    return 0;
}