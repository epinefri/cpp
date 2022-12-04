#include <iostream>
using namespace std;
void print(int);

int main()
{
    int n;
    cout << "n: "; 
    cin >> n;
    print(n);
}

void print(int a)
{
    cout << a << endl;
}