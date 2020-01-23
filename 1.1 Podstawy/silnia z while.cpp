#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << " Podaj n: \n";
    int n;
    cin >> n;

    int wynik=1;
    while (n>1) {
        wynik =wynik*n;
        n=n-1;
    }
        cout << "Wynik = " << wynik;

    return 0;
}
