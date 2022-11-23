#include <iostream>
using namespace std;

int main()
{
    int m[][4] = {
                    {1,2,3, 7},
                    {4,5,6},
                    {7,8,9}
                };

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << m[i][j];
        }
        cout << "\n";
    }
}