#include <iostream>
using namespace std;

class myClass{
    int i;
    int j;
public:
    void init(int, int);
    int sum(){return i + j;}
};

inline void myClass::init(int a, int b)
{
    i = a;
    j = b;
}

int main()
{
    myClass mO;
    mO.init(3, 4);

    cout << mO.sum() << endl;

    return 0;
}
