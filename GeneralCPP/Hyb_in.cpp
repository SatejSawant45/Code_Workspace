// SATEJ SANDEEP SAWANT
// 22610071
// HYBRID INHERITANCE

#include<iostream>
#include<cstring>
using namespace std;



class Student
{
    protected:
        string name;
        int roll_no;

    public:
        void set_data()
        {
            cout << "Enter the Name of Student : ";
            cin >> name;
            cout << "Enter the Roll No. of Student : ";
            cin >> roll_no;
        }
        void print_data()
        {
            cout << " " << endl
             << "Name of the student : " << name << endl;
            cout << "Roll Number : " << roll_no << endl;
        }
};

class Test : virtual public Student
{
    protected:
        float marks;

    public:
        void read_marks()
        {
            cout << "Enter marks in test : ";
            cin >> marks;
        }
        void print_marks()
        {
            cout << endl << "Here is your result - " << endl
            << "Marks obtained in test : " << marks << endl;
        }
};

class sports : virtual public Student
{
    protected:
        float score;

    public:
        void accept_score()
        {
            cout << "Enter the score in sports : ";
            cin >> score;
        }
        void print_score()
        {
            cout << "Score obtained in sports : " << score << endl;
        }
};

class Result : public Test, public sports
{
    private:
        float total;

    public:
        void calculate()
        {
            total = marks + score;
            print_data();
            print_marks();
            print_score();
            cout << "Your Total Score is : " << total << endl;
        }
};

int main()
{
    Result s1;
    s1.set_data();
    s1.read_marks();
    s1.accept_score();
    s1.calculate();
    return 0;
}