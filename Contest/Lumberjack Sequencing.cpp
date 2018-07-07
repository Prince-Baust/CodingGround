#include <bits/stdc++.h>
using namespace std;

int a_sort(int ara[], int n)
{
    if(n == 1)
        return 1;
    else
    {
        if(ara[n-2] > ara[n-1])
            return 0;
        return a_sort(ara, n-1);
    }
}

int d_sort(int ara[], int n)
{
    if(n == 1)
        return 1;
    else
    {
        if(ara[n-2] < ara[n-1])
            return 0;
        return d_sort(ara, n-1);
    }
}

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int ara[10];
        for(int j = 0; j < 10; j++)
        {
            cin >> ara[j];
        }
        if(i == 1)
            cout << "Lumberjacks:" << endl;
        if(a_sort(ara, 10) || d_sort(ara, 10))
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
}
