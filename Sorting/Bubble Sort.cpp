#include <iostream>
using namespace std;

void bubbleSort(int ara[], int n)
{
    while(1)
    {
        int flag = 1;
        for(int i = 0; i < n-1; i++)
        {
            if(ara[i] > ara[i+1])
            {
                swap(ara[i], ara[i+1]);
                flag = 0;
            }
        }
        if(flag)
            break;
    }
}

int main()
{
    int n;
    cin >> n;

    int ara[n];

    for(int i = 0; i < n; i++)
        cin >> ara[i];

    bubbleSort(ara, n);

    cout << "Sorted Array:" << endl;
    for(int i = 0; i < n; i++)
        cout << ara[i] << " ";

}
