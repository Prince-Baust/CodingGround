#include <iostream>
using namespace std;

class myClass{
    int num1;
    int num2;
public:
    void init(int i, int j) {num1 = i; num2 = j;}
    friend class calc;
};

class calc{
public:
    int add(myClass mO) {return mO.num1+mO.num2;}
    int substract(myClass mO) {return mO.num1-mO.num2;}
};

int main()
{
    myClass mO;
    mO.init(10, 5);

    calc cO;
    cout << cO.add(mO) << endl;

    mO.init(15, 10);
    cout << cO.substract(mO) << endl;

}
