#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int i, j, tmp = 0;
    while(cin >> i >> j)
    {
        int low = i, high = j;
        if(low > high) swap(low, high);

        for(; low <= high; low++)
        {
            int n = low;
            int counter = 1;
            while (n != 1)
            {
                if(n % 2 == 1)
                {
                    n = 3*n + 1;
                    n = n / 2;
                    counter+= 2;
                }
                else
                {
                    n = n/2;
                    counter++;
                }
            }
            if(counter > tmp) tmp = counter;
        }
        cout << i << " " << j << " " << tmp << endl;
        tmp = 1;
    }

}
