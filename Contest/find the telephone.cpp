#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str.at(i) == '1' || str.at(i) == '0' || str.at(i) == '-')
                cout << str.at(i);
            if(str.at(i) == 'A' || str.at(i) == 'B' || str.at(i) == 'C')
                cout << 2;
            else if(str.at(i) == 'D' || str.at(i) == 'E' || str.at(i) =='F')
                cout << 3;
            else if(str.at(i) == 'G' || str.at(i) == 'H' || str.at(i) == 'I')
                cout << 4;
            else if(str.at(i) == 'J' || str.at(i) == 'K' || str.at(i) == 'L')
                cout << 5;
            else if(str.at(i) == 'M' || str.at(i) == 'N' || str.at(i) == 'O')
                cout << 6;
            else if(str.at(i) == 'P' || str.at(i) == 'Q' || str.at(i) == 'R' || str.at(i) == 'S')
                cout << 7;
            else if(str.at(i) == 'T' || str.at(i) == 'U' || str.at(i) == 'V')
                cout << 8;
            else if(str.at(i) == 'W' || str.at(i) == 'X' || str.at(i) == 'Y' || str.at(i) == 'Z')
                cout << 9;
        }
        cout << endl;
    }
}
