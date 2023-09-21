#include <iostream>
using namespace std;
class Employee
{
    int id;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
    }
    void getData(void)
    {
        cout << "Your id is " << id << endl;
    }
};
int main()
{
    Employee fb[4]; // Array of objects;
    for (int i = 0; i < 4;i++)
    {
        fb[i].setData();
        fb[i].getData();
    }
}