#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        string site[10];
        int relv[10], idx[10], k = 1;
        int m_relv = 0;

        for(int j = 0; j < 10; j++)
        {
            cin >> site[j] >> relv[j];
        }

        for(int j = 0; j < 10; j++)
        {
            if(m_relv < relv[j])
            {
                m_relv = relv[j];
                idx[0] = j;
            }
        }

        for(int j = idx[0]+1; j < 10; j++)
        {
            if(m_relv == relv[j])
            {
                idx[k] = j;
                k++;
            }
        }
        cout << "Case #" << i <<":" << endl;
        for(int j = 0, k = 0; j < 10; j++)
        {
            if(j == idx[k])
            {
                cout << site[idx[k]]<< endl;
                k++;
            }
        }
    }
}
