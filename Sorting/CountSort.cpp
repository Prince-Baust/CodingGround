#include <iostream>
using namespace std;

void countSort(int a[], int n)
{
    int Max = 0;
    for(int i = 0; i < n; i++)
    {
        if(Max < a[i])
            Max = a[i];
    }

    int pAra[Max+1];

    for(int i = 0; i < Max+1; i++)
        pAra[i] = 0;

    for(int i = 0; i < n; i++)
        pAra[a[i]] ++;


    for(int i = 1; i < Max+1; i++)
        pAra[i] = pAra[i] + pAra[i-1];

    int sAra[n];

    for(int i = 0; i < n; i++)
    {
        sAra[pAra[a[i]]-1] = a[i];
        --pAra[a[i]];
    }

    for(int i = 0; i < n; i++)
        cout << sAra[i] << " ";

}

int main()
{
    int ara[8] = {2, 5, 3, 9, 1, 2, 9, 3};

    countSort(ara, 8);
}
