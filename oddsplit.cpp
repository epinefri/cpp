#include <iostream>
using namespace std;

int main(){
    int n, dig;
    int p = 1;
    int n2 = 0;

    cout << "Type a number: ";
    cin >> n;
    cout << "Result: ";

    while (p * 10 <= n)
        p = p * 10;

    while (p != 0){
        dig = n / p;
        n2 = n2 * 10 + dig;
        n = n % (p * 10);
        p = p / 100;
    }

    cout << n2;
    cout << "\n";
}
