#include <bits/stdc++.h>
using namespace std;

int add_digit(int n);

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        while(n >= 10)
        {
            n = add_digit(n);
            if(n > 9)
                n = add_digit(n);
        }
        cout << n << endl;
    }
}

int add_digit(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
