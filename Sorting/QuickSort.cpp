#include <iostream>
using namespace std;

int Partition(int a[], int p, int r);
void quickSort(int a[], int p, int r)
{
    if(p<r)
    {
        int q = Partition(a,p,r);
        quickSort(a, p, q-1);
        quickSort(a, q+1, r);
    }
}

int Partition(int a[], int p, int r)
{
    int x = a[r];
    int i = p-1;
    for(int j = p; j < r; j++)
    {
        if(a[j] <= x)
        {
            i++;
            swap(a[j], a[i]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    quickSort(a, 0, 4);

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
}
