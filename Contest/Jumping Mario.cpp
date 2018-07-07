#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int n, hWall = 0, lWall = 0;
        cin >> n;
        int ara[n];
        for(int j = 0; j < n; j++)
        {
            cin >> ara[j];
        }

        for(int j = 0; j < n-1; j++)
        {
            if(ara[j] == ara[j+1])
                continue;
            else if(ara[j] > ara[j+1])
                lWall += 1;
            else
                hWall += 1;
        }

        cout << "Case " << i << ": " << hWall << " " << lWall << endl;
    }
}
