#include <iostream>
using namespace std;

int main()
{
    string n;
    cout << "Search: ";
    cin >> n; 
    string phrase = "Lazy giraffe";
    cout << "Starts at: "<< phrase.find(n, 0) << endl;
}