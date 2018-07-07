///uva 11547
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> n;

        n=n*567;
        n=n/9;
        n+=7492;
        n*=235;
        n/=47;
        n=n-498;
        n/=10;
        n%=10;

        cout << abs(n) << endl;
    }
    return 0;
}
