#include <iostream>
using namespace std;

void leapYear(int y)
{
    if(y % 4 != 0)
        cout << "NLY" << endl;
    else if(y % 100 != 0)
        cout << "LY" << endl;
    else if(y % 400 == 0)
        cout << "LY" << endl;
    else
        cout << "NLY" << endl;
}

int main()
{
    int year;
    while(cin >> year)
    {
        leapYear(year);
    }
}
