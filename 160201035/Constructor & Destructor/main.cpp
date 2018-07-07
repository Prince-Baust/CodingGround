#include <iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    rectangle(int, int);
    ~rectangle();
};

rectangle::rectangle(int i, int j)
{
    height = i;
    width = j;
    cout << "Height: " << " " << height << endl;
    cout << "Width: " << " " << width << endl;
}
rectangle::~rectangle()
{
    height = 0;
    width = 0;
    cout << "Destructor: " << endl;
    cout << "Height: " << " " << height << endl;
    cout << "Width: " << " " << width << endl;
}

int main()
{
    rectangle(3, 4);

}
