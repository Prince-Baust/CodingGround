#include <iostream>
using namespace std;

int main()
{
    int mat1[5][5];
    int mat2[5][5];
    int mat3[5][5];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >>mat1[i][j];
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >>mat2[i][j];
        }
    }


    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            mat3[i][j] = mat1[i][j] * mat2[i][j];
            cout << mat3[i][j] <<"  " ;
        }
        cout << endl;
    }

}
