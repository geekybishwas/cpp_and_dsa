#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Concatenate
{
    char str[40];
    public:
    void getstring()
    {
        cout << "Enter string " << endl;
        cin >> str;
    }
    void showstring()
    {
        cout << "The string is " << str << endl;
    }
    // Concatenate(){}
    Concatenate operator+ (Concatenate  obj)
    {
        Concatenate temp;
        strcat(str, obj.str);
        strcpy(temp.str, str);
        return temp;
    }

};
int main()
{
    Concatenate c1, c2, c3;
    c1.getstring();
    c2.getstring();
    c3 = c1 + c2;
    cout << "Concatenated string is " << endl;
    c3.showstring();
}