#include <iostream>
using namespace std;

int main()
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int aux;

    for(int i = 0; i < 9; i++)
    {
        for(int i = 1; i < 9; i++)
        {
            if (array[i-1] > array[i])
            {
                aux = array[i];
                array[i] = array[i - 1];
                array[i - 1] = aux;
            }
        }
    }

    for(int i = 0; i < 9; i++)
    cout << array[i];
    cout << "\n";

}