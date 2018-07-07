#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter which fibonacci element you want to see." << endl;
    cin >> n;

    int ara[n];

    ara[0] = 1;
    ara[1] = 1;

    for(int i = 0; i < n-1; i++)
    {
        ara[i+2] = ara[i] + ara[i+1];
    }

    cout << ara[n-1] << endl;

}
