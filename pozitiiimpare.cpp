#include <iostream>
using namespace std;

int main(){
    int nr, cifra, nr_nou, p;

    cout << "Numar: ";
    cin >> nr;
    cout << "Rezultat: ";

    p = 1;
    while (p * 10 <= nr)
        p = p * 10;

    nr_nou = 0;
    while (p != 0){
        cifra = nr / p % 10;
        nr_nou = nr_nou * 10 + cifra;
        nr = nr % p;
        p = p / 100;
    }

    cout << nr_nou;
    cout << "\n";
}
