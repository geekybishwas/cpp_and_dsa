#include <iostream>
using namespace std;
int add(int a){return a;} // Function with one arguments
int add(int a, int b){ return a+b;} // Function with two arguments, with function overloading
char add(char a){return a;}
int main()
{
    cout << "The sum is " << add(3) << endl;
    cout << "The sum is " << add(3, 4)<<endl;
    cout << "The character is " << add('c');
}