// Print the prime divisors of a number

#include <iostream>
using namespace std;

int main(){
    int a, prime;
    cout << "a: ";
    cin >> a;

    for(int i = 2; i <= a / 2; i++)
        if (a % i == 0 || a < 2)
            prime = 0;
        else
            prime = 1;

    if (prime == 1)
        cout << "prime\n";
    else 
        cout << "not prime\n";
}