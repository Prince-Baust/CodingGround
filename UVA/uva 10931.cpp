#include <iostream>
using namespace std;

int main()
{
    int i;
    while(cin >> i)
    {
        if(i == 0)
            break;
        int j = 0, binary[31];
        while(i > 0)
        {
            binary[j] = i%2;
            i %= 2;
            j++;
        }
        binary[j] = i/2;

        while(j > 0)
        {
            cout << binary[j];
            j++;
        }
    }
}
