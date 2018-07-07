#include <iostream>
using namespace std;

class math{
    int num1;
    int num2;
public:
    math(int i, int j) {num1 = i; num2 = j;}
    friend int add(math mO
                   );
};

int add(math mO)
{
    return mO.num1+mO.num2;
}

int main()
{
    math mObj(3, 4);

    cout << add(mObj) << endl;

    return 0;
}
