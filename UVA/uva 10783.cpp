#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int sum = 0;
        int a, b;
        cin >> a >> b;

        for(int j = a; j <= b; j++)
        {
            if(j % 2 == 1)
                sum += j;
        }
        cout << "Case " << i << ": " << sum << endl;
    }
}
