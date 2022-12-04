#include <iostream>
using namespace std;

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int input;

    cout << "delete: ";
    cin >> input;

    for (int i = input - 1; i < 5; i++)
        v[i] = v[i + 1];

    cout << "new: ";
    for (int i = 0; i < 4; i++)
        cout << v[i];

    cout << endl;
}