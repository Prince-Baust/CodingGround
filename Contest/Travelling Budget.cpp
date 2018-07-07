#include <iostream>
using namespace std;

int main()
{
    short int a, b, c, d, sum;
    while(cin >> a >> b >> c >> d)
    {
        sum = (a < b ? a : b);
        sum += (c < d ? c : d);
        cout << sum << endl;
    }

}
