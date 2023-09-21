#include <iostream>
#include <cstring>
using namespace std;
class CMW
{
protected:
    char title[30];
    float rating;

public:
    CMW(char *s, float r)
    {
        strcpy(title, s);
        rating = r;
    }
    virtual void display()
    {
    }
};
class CWMvideo : public CMW
{
    int lenght;

public:
    CWMvideo(char *s, float r, int vl) : CMW(s, r)
    {
        lenght = vl;
    }
    void display()
    {
        cout << "THis is a title" << title << endl;
        cout << "Rting " << rating;
    }
};
class CWMText : public CMW
{
    int words;

public:
    CWMText(char *s, float r, int wc) : CMW(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "THis is a title" << title << endl;
        cout << "Number of words" << endl;
        cout << "Rting " << rating;
    }
};
int main()
{
    char *title = new char[30];
    float rating, vlen;
    title = "Dyanjo";
    rating = 3.4;
    CWMvideo dj(title, rating, vlen);
    dj.display();
}