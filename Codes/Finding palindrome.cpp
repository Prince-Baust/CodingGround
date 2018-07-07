#include <iostream>
using namespace std;

void palindrome(string str)
{
    char str2[100];
    for(int i = str.length()-1, j = 0; i >= 0; i--, j++)
    {
        str2[j] = str[i];
    }
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != str2[i])
        {
            cout << "Not Palindrome" << endl;
            return;
        }
    }
    cout << "Palindrome" << endl;
}

int main()
{
    string s1;
    cin >> s1;
    palindrome(s1);

}
