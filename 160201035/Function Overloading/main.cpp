#include <iostream>
using namespace std;

int sum(int n1, int n2)
{
    return n1+n2;
}
int sum(int n1, int n2, int n3)
{
    return n1+n2+n3;
}

int main()
{
    int num1, num2, num3;
    while(cin >> num1 >> num2 >> num3)
    {
        cout << sum(num1, num2) << endl;
        cout << sum(num1, num2, num3) << endl;
    }
}
