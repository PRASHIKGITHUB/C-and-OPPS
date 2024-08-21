#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class dist
{
    int x1, y1, x2, y2;

public:
    dist(int a1, int a2, int b1, int b2)
    {
        x1 = a1;
        y1 = a2;
        x2 = b1;
        y2 = b2;
    }
    friend float distance(dist a);
};
float distance(dist a)
{
    return sqrt((a.x1 - a.x2) * (a.x1 - a.x2) + (a.y1 - a.y2) * (a.y1 - a.y2));
}
int main()
{
    dist a(1, 2, 3, 4);
    cout << distance(a) << endl;
    return 0;
}