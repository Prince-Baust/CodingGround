#include <iostream>
using namespace std;

void selectionSort(int ara[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int Min = ara[i];
        for(int j = i+1; j < n; j++)
        {
            if(ara[j] < Min)
                swap(Min, ara[j]);
        }
        ara[i] = Min;
    }
}

int main()
{
    int n;
    cin >> n;
    int ara[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }

    selectionSort(ara, n);
    cout << "Sorted Array:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }

}
