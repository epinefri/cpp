#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "a: ";
    cin >> a;
    if(a/10%10+a%10*10==a/100/10)
        cout << "1\n";
}