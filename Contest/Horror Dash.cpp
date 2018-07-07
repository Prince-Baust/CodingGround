#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int NoOfCreature, h_speed = 0;
        cin >> NoOfCreature;
        int ara[NoOfCreature];

        for(int j = 0; j < NoOfCreature; j++)
        {
            cin >>ara[j];
        }

        for(int j = 0; j < NoOfCreature; j++)
        {
            if(ara[j] > h_speed)
                h_speed = ara[j];
        }
        cout << "Case " << i << ": " << h_speed << endl;
    }
}
