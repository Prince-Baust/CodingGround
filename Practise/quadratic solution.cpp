#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /**quadratic equation is x = (-b + sqrt(pow(b , 2) - 4ac))/ 2a AND x = (-b - sqrt(pow(b , 2) - 4ac))/ 2a  **/

    int b, a, c, d;
    cin >> b >> a >> c;

    d = pow(b, 2) - (4*a*c);

    if(d > 0)
    {
        int x1, x2;
        x1 = (-b + sqrt(d)) / 2*a;
        x2 = (-b - sqrt(d)) / 2*a;

        cout << "X1 = " << x1 << " X2 = " << x2 << endl;
    }
    else if (d == 0)
    {
        int x = -b/(2*a);
        cout << "X = " << x << endl;

    }
    else
        cout << "No Real Solution" << endl;

}
