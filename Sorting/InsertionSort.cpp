#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for(int j = 1; j < n; j++)
    {
        int key = a[j];
        int i = j-1;

        while(i >= 0 && a[i] > key)
        {
            a[i+1] = a[i];
            i = i -1;
        }
        a[i+1] = key;
    }
}

int main()
{
    int n;
    cin >> n;

    int ara[n];

    for(int i = 0; i < n; i++)
        cin >> ara[i];

    for(int i = 0; i < n; i++)
        cout << ara[i] <<" ";
    cout << endl;

    insertionSort(ara,n);

    for(int i = 0; i < n; i++)
        cout << ara[i] <<" ";

}
