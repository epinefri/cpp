#include <iostream>
using namespace std;

int main()
{
    int a[4][5], i, j;

    a[0][0] = 20;
    
    for(j=0; j<5; j++)
    {
        for(i=0; i<4; i++)
        {
            a[i][j] = a[0][0];
            a[0][0]--;
        }
    }
    a[0][0] = 20;

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}