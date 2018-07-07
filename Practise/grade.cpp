#include <iostream>
using namespace std;

int main()
{
    int mark;
    cin >> mark;
    mark = mark /10;

    switch(mark)
    {
    case 10:
    case 9:
    case 8:
        cout <<"A+" << endl;
        break;
    case 7:
        cout << "A" << endl;
        break;
    case 6:
        cout << "B" << endl;
        break;
    case 5:
        cout << "C" << endl;
        break;
    case 4:
        cout << "D" << endl;
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "Failed!" << endl;
        break;
    default:
        cout << "Invalid!" << endl;
        break;
    }
}
