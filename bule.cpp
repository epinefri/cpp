#include <iostream>
using namespace std;

int main ()
{
    int v[] = {5, 4, 3, 2, 1};
    int sortat;
    do
    {
        sortat=1;
        for (int i=1; i<5; i++)
            if (v[i-1] > v[i])
                {
                   int aux = v[i-1];
                   v[i-1]=v[i];
                   v[i]=aux;
                   sortat=0;
                }
    }
    while(!sortat);

    for (int i=0; i<5; i++)
        cout << v[i];


}