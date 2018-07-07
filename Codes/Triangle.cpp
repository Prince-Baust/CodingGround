#include <iostream>
using namespace std;

void triangle(    int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Not Triangle" << endl;
        return;
    }
    if(a+b <= c || b+c <= a || a+c <= b)
    {
        cout << "Not Triangle" << endl;
        return;
    }
    if(a == b && b == c)
        cout << "Equilateral" << endl;
    else if(a == b || a == c || b == c)
        cout << "Isosceles" << endl;
    else
        cout << "Scalene" << endl;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    triangle(a, b, c);
}
