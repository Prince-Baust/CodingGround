#include <iostream>
using namespace std;

class triangle{
    int base;
    int height;
public:
    triangle(int i, int j) {base = i; height = j;}
    float area() {return (base*height)/2;}
};

void print(triangle tO)
{
    cout << tO.area() << endl;
}

int main()
{
    triangle tObj(3,4);

    print(tObj);

    return 0;
}
