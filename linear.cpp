#include <iostream>
using namespace std;

int main()
{
    int aux, x, i = 0;
    int array[] = {3, 8, 2, 12};
    
    cout << "x: ";
    cin >> x;
    
    do
    {
        if (i < 4 && x == array[i])
            {
                cout << x << " found at position " << i + 1 << "\n";
                break;
            }
        else if (i == 4)
        cout << "not found \n";
        
        i++;
    }
    while (i < 5);


}