#include <iostream>
using namespace std;

int main()
{
    int s_time, f_time;
    cin >> s_time >> f_time;

    if (f_time <= s_time)
        f_time += 24;
    cout << "O JOGO DUROU " << f_time-s_time << " HORA(S)" << endl;
}
