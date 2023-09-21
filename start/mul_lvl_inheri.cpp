#include <iostream>
#include <string.h>
using namespace std;
class Students
{
protected:
    int roll_no;
    char name[50];
    int classes;

public:
    void set_data(int a, char b[50], int c)
    {
        roll_no = a;
        name[50] = b[50];
        classes = c;
    }
};
class Exam : public Students
{
protected:
    int m1, m2;

public:
    void get_marks(int a, int b)
    {
        m1 = a;
        m2 = b;
    }
};

class Result : public Exam
{
protected:
    int total;

public:
    void show_result()
    {
        total = m1 + m2;
        cout << "The total is " << total << endl;
    }
};
int main()
{
    Result r;
    r.set_data(12, "Bishwas", 12);
    r.get_marks(90, 93);
    r.show_result();
    // r.total;
}