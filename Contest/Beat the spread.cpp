///uva 10812
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int s, d, fin1, fin2;
        cin >> s >> d;

        if(s < d || (s+d) % 2 == 1)
            cout << "impossible" << endl;
        else
        {
            fin1 = (s+d) / 2;
            fin2 = s - fin1;
            if(fin1 > fin2)
                cout << abs(fin1) << " " << abs(fin2) << endl;
            else
                cout << abs(fin2) << " " << abs(fin1) << endl;
        }
    }
}
