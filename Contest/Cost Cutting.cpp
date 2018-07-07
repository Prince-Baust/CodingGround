///uva 11727
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int SalOfEmp1, SalOfEmp2, SalOfEmp3;
        cin >> SalOfEmp1 >> SalOfEmp2 >> SalOfEmp3;

        if(SalOfEmp1 > SalOfEmp2)
        {
            if(SalOfEmp1 > SalOfEmp3)
            {
                if(SalOfEmp2 > SalOfEmp3)
                    cout << "Case " << i << ": " << SalOfEmp2 << endl;
                else
                    cout << "Case " << i << ": " << SalOfEmp3 << endl;
            }
            else
               cout << "Case " << i << ": " << SalOfEmp1 << endl;
        }
        else
        {
            if(SalOfEmp1 > SalOfEmp3)
                cout << "Case " << i << ": " << SalOfEmp1 << endl;
            else if(SalOfEmp2 > SalOfEmp3)
                cout << "Case " << i << ": " << SalOfEmp3 << endl;
            else
                cout << "Case " << i << ": " << SalOfEmp2 << endl;
        }
    }
}
