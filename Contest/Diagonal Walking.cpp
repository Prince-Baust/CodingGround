#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int Count = 0;
        string Move;
        cin >> Move;

        for(int i = 0; i < n; i++)
        {
            if(Move[i] == 'U' && Move[i+1] == 'R' || Move[i] == 'R' && Move[i+1] == 'U')
            {
                Move[i] = 'D';
                Move[i+1] = '0';
            }

        }
        for(int i = 0; i < n; i++)
        {
            if(Move[i] == 'U' || Move[i] == 'R' || Move[i] == 'D')
                Count += 1;
        }
        cout << Count << endl;
    }
}
