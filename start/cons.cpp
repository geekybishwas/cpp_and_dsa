#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int x, y;

public:
    Point()
    {
    }
    friend void distance(Point, Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void dispaly()
    {
        cout << "The point is (" << x << " ," << y << ") " << endl;
    }
    Point operator-(Point p)
    {
        Point temp;
        temp.x = x - p.x;
        temp.y = y - p.y;
        return temp;
    }
};
void distance(Point A, Point B)
{
    int X = A.x - B.x;
    int Y = A.y - B.y;
    double dis = sqrt(pow(X, 2) + pow(Y, 2));
    cout << "The distance between them is " << dis << endl;
}
int main()
{
    Point o1(1, 2), o2(2, 3), o3;
    o1.dispaly();
    o2.dispaly();
    o3 = o1 - o2;
    o3.dispaly();
    distance(o1, o2);
}