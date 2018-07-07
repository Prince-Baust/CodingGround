#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1];
    int R[n2];

    for(int i = 0; i < n1; i++)
        L[i] = a[p+i];
    L[n1] = INT_MAX;

    for(int i = 0; i < n2; i++)
        R[i] = a[q+1+i];
    R[n2] = INT_MAX;

    int i = j = 0;
    for(int k = p; k <= r; k++)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }

}

void mergeSort(int a[], int p, int r)
{
    if(p<r)
    {
        int q = (p+r)/2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        Merge(a, p, q, r);
    }
}


int main()
{
    int a[10] = {10, 5, 8, 2, 1, 7, 5, 6, 3, 7};

    mergeSort(a, 0, 9);

    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";
}
