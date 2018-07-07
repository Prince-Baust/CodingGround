#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, sum = 1, quotient;
    cin >> num;

    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            quotient = num / i;
            sum += quotient + i;
        }
    }
    if(sum == num)
        cout << "Perfect Number!" << endl;
    else
        cout << "Not Perfect!" << endl;
}
