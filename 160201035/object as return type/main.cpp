#include <iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    void init(int i, int j) {height = i; width = j;}
    int area() {return height*width;}
};

rectangle scan()
{
    int i, j;
    cin >> i >> j;

    rectangle rO;
    rO.init(i, j);

    return rO;
}

int main()
{
    rectangle rObj;

    rObj = scan();

    cout << rObj.area() << endl;

    return 0;
}
