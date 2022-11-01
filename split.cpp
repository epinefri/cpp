// Split a number into digits and print them right to left

#include <iostream>
using namespace std;

int main(){
    int n, dig;
    cout << "Type a number: ";
    cin >> n;
    do{
        dig = n%10;
        cout << dig << ", ";
        n = n/10;
    }
    while (n != 0);

    cout << "\n";
}