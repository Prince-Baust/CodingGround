#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin, str))
    {
        int flag = -1;

        for(int i = 0; i < str.length(); i++)
        {
            if(str.at(i) == ' ')
            {
                for(int j = i-1; j > flag; j--)
                {
                    cout << str.at(j);
                }
                cout << " ";
                flag = i;
            }
        }
        for(int i = str.length()-1; i > flag; i--)
        {
            cout << str.at(i);
        }
        cout << endl;
    }
}
