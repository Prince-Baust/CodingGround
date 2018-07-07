#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        while(n >= 3)
        {
            n = n + (n / 3) + (n % 3);
        }
        cout << n << endl;

    }
}
