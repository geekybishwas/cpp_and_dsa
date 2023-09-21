// #include <iostream>
// using namespace std;
// class Overload
// {
//     int x;
//     public:
//     Overload()
//     {
//     }
//     void get()
//     {
//      cout<<"Enter any number"<<endl;
//     cin >> x;
//     }
//     friend Overload operator * (Overload, Overload);
//     void display()
//     {
//         cout << "Multiply is " << x << endl;
//     }
// };
// int main()
// {
//         Overload ob1,ob2;
//         Overload ob;
//         ob1.get();
//         ob2.get();
//         ob = ob1 * ob2;
//         ob.display();
// }
// Overload operator *(Overload ob1,Overload ob2)
// {
//         Overload ob;
//         ob.x = ob1.x * ob2.x;
//         return ob;
// }
#include <iostream>
using namespace std;
class Overload
{
    int real, img;
    public:
    void getdata()
    {
        cout << "Enter real and img " << endl;
        cin >> real >> img;
    }
    void display()
    {
        cout << real << " + " << img << 'j' << endl;
    }
    friend Overload operator+(Overload, Overload);
};
Overload operator + (Overload c1, Overload c2)
{
    Overload temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    Overload c1, c2, c3;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c3 = c1 + c2;
    c3.display();
}