#include <iostream>
using namespace std;

int main()
{
    int a[4][5], i, j;

    int d = 20;
    
    for(j=0; j<5; j++)
    {
        for(i=0; i<4; i++)
        {
            a[i][j] = d;
            d--;
            cout << a[i][j] << " ";
        }
    cout << endl;
    }
}