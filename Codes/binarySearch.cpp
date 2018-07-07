#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int n, int key)
{
    int low = 0, high = n, mid, index;
    A[high] = INT_MAX;
    while(low < high)
    {
        mid = (high+low)/2;
        if(A[mid] < key)
            low = mid+1;
        else
            high = mid;
    }
    if(A[mid] == key)
        index = mid;
    return index;
}

int main()
{
    int A[10] = {10 , 15, 18, 22, 27, 38, 42, 45, 46, 51};

    cout << binarySearch(A, 10, 18) << endl;
}
