#include <bits/stdc++.h>
using namespace std;

int findMaxRelvnc(int ara[], int n, int locOfMaxRelvnc[]);
int countMaxrelvnc(int ara[], int n, int max_relvnc, int *locOfMaxRelvnc);

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        string site[10];
        int relvnc[10];

        for(int j = 0; j < 10; j++)
            cin >> site[j] >> relvnc[j];

        int locOfMaxRelvnc[10];
        int max_relvnc = findMaxRelvnc(relvnc, 10, &locOfMaxRelvnc[0]);

        int Count = countMaxrelvnc(relvnc, 10, max_relvnc, locOfMaxRelvnc);

        cout << "Case #" << i << ":" << endl;
        for(int j = 0; j < Count; j++)
            cout << site[locOfMaxRelvnc[j]] <<endl;
    }
}

int findMaxRelvnc(int ara[], int n, int *locOfMaxRelvnc)
{
    int max_relvnc = 0;
    for(int i = 0; i < n; i++)
    {
        if(max_relvnc < ara[i])
        {
            max_relvnc = ara[i];
            *locOfMaxRelvnc = i;
        }
    }
    return max_relvnc;
}

int countMaxrelvnc(int ara[], int n, int max_relvnc, int *locOfMaxRelvnc)
{
    int j = 1;
    for(int i = locOfMaxRelvnc[0]+1; i < n; i++)
    {
        if(max_relvnc == ara[i])
        {
            locOfMaxRelvnc[j] = i;
            j++;
        }
    }
    return j;
}
