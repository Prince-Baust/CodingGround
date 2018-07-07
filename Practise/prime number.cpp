#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num, flag = 0;  /// num will be checked whether it is perfect number or not
    cin >> num;

    for(int i = 2; i < sqrt(num)1; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

}
