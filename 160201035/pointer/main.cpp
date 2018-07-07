#include <iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    void set(int i, int j) {height = i; width = j;}
    int area() {return height*width;}
};

int main()
{
    rectangle obj;
    rectangle *p;

    obj.set(3, 4);
    cout << obj.area() << endl;

    p = &obj;
    p->set(5, 6);
    cout << obj.area() << endl;

}
