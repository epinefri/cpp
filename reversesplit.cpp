// Split a number into digits and print them left to right

#include <iostream>
using namespace std;

int main(){
    int n, dig;
    int p = 1;
    
    cout << "Type  a number: ";
    cin >> n;                   
    cout << "Result:";
    
    while (p * 10 <= n)
        p = p * 10;
    
    while (p != 0)
        {
            dig = n / p;
            cout << " " << dig;
            n = n % p;
            p = p / 10;
        }
   
    cout << "\n";
}
