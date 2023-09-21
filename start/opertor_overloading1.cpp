#include <iostream>
using namespace std;
class Overloading
{
    int real, imaginary;
public:
void getdata()
{
    cout << "Enter real and imaginary numbers " << endl;
    cin >> real >> imaginary;
}
void showdata()
{
    cout << "Real and imaginary numbers is " << real << " " << imaginary << endl;
}
void operator +()
{
    real++;
    imaginary++;
}
};
int main()
{
Overloading o;
o.getdata();
+o  ;
o.showdata();
}