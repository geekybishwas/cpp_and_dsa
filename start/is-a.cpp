#include <iostream>
using namespace std;
class Vechile
{
protected:
    char color[20];
    int max;
    public:
    void getInfo()
    {
        cout << "Enter color and maxspeed of a vechile" << endl;
        cin >> color >> max;
    }
};
class Maruti:public Vechile 
{
    public:
    void showInfo()
    {
        cout << "Maruti color and max speed is " << color << " ," << max << endl;
    }
};
int main()
{
    Maruti m;
    m.getInfo();
    m.showInfo();
}