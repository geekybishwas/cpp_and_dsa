// #include <iostream>
// using namespace std;
// class Engine
// {
// public:
//     char color[30];
//     void getInfo()
//     {
//         cout << "Enter color of a vechile" << endl;
//         cin >> color;
//     }
//     void showInfo()
//     {
//         cout << "Engine color is " << color << endl;
//     }
// };
// class Vechile
// {
// public:
//     Engine e;
// };
// int main()
// {
//     Vechile v;
//     v.e.getInfo();
//     v.e.showInfo();
// }

// #include <iostream>
// using namespace std;
// class Vechile
// {
//     public:
//     char color[40];
//     public:
//     void getInfo()
//     {
//         cout << "Enter color of a vechile" << endl;
//         cin >> color;
//     }
//     void showInfo()
//     {
//         cout << "Engine color is " << color << endl;
//     }
// };
// class Engine
// {
// public:
//     Vechile v; // Embeded obeject
// };
// int main()
// {
//     Engine e;
//     e.v.getInfo();
//     e.v.showInfo();
// }
#include <iostream>
using namespace std;
class Vechile
{
    char color[40];
    int dollar;

public:
    void get()
    {
        cout << "eNter dollar and color " << endl;
        cin >> dollar >> color;
    }
    void display()
    {
        cout << "COlor and dollar is " << color << " , " << dollar << endl;
    }
};
class Engine
{
public:
    Vechile v;
};
int main()
{
    Engine e;
    e.v.get();
    e.v.display();
}