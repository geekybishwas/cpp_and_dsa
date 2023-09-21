#include <iostream>
using namespace std;
struct employee
{
    // data
    int eId;
    char favCHar;
    float salary;
};
int main()
{
    struct employee bishwas;
    bishwas.eId = 7;
    bishwas.favCHar = 'R';
    bishwas.salary = 1200;
    cout << bishwas.eId << endl;
    cout << bishwas.salary << endl;
    cout << bishwas.favCHar << endl;
}