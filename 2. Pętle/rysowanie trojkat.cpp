#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, m;
    cout << "Podaj wysokosc trojkata prostokatnego: ";
    cin >> n;

    cout << "\n";

    for (int i=0; i<n; i++) {
        cout << "   ";

        for (int k=0; k<=i; k++){
        cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
