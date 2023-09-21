#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Your id is " << id << " and you are emoloyee no. " << count<<endl
        ;
    }
    static void getCount()
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee bishwas, ram, sita;
    bishwas.setData();
    bishwas.getData();
    Employee::getCount();

    ram.setData();
    ram.getData();
    Employee::getCount();

    sita.setData();
    sita.getData();
    Employee::getCount();
}