#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i,n,ans,a,m;
    while(scanf("%d",&t)!=EOF)
    {
        i=1;
        while(i<=t)
        {
            cin >> n;
            a=n*315+36962;
            m=a/10;
            ans=m%10;
            if(ans<0)
                ans=ans/(-1);
            cout << ans << endl;
            i++;
        }
    }
    return 0;
}
