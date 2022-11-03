// Print the proper divisors of a number

#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "a: ";
    cin >> a;
    cout << "proper divisors of a: ";

    for (int i = 2; i <= (a / 2); i++)
        if (a % i == 0)
            cout << i << " ";
    cout << "\n";
}