#include <iostream>
using namespace std;

class myClass{
    static int a;
    int b;
public:
    myClass() {b = 0;}
    void print() {cout << ++a << " " << ++b << endl;}
};

int myClass::a;

int main()
{
    myClass mO, mO2;
    mO.print();
    mO2.print();
}
