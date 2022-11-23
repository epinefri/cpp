#include <iostream>
using namespace std;

int main()
{
    int a, i;
    int v[] = {1,2,3,4,5,6,7};

    a=v[0];
    

    for(i=1; i<7; i++)
    {
        v[i-1]=v[i];
        cout << v[i];
    }
    
    v[6]=a;
    cout << v[6];
}