#include <iostream>
using namespace std;
class Students
{
protected:
    int roll_no;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
    }
    void print_rollno()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};
class Test : virtual public Students
{
protected:
    int math, phy;

public:
    void set_marks(int a, int b)
    {
        math = a;
        phy = b;
    }
    void print_marks(void)
    {
        cout << "Yout result is :" << endl
             << "Math: " << math << endl
             << "Physics: " << phy << endl;
    }
};
class Sports : virtual public Students
{
protected:
    int score;

public:
    void set_score(int a)
    {
        score = a;
    }
    void print_score(void)
    {
        cout << "Yout score  is :" << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    int total;

public:
    void show_total()
    {
        total = math + phy + score;
        print_marks();
        print_rollno();
        print_score();
        cout << "Your total is " << total << endl;
    }
};
int main()
{
    Result r;
    r.set_roll_no(12);
    r.set_marks(90, 90);
    r.set_score(9);
    r.show_total();
}