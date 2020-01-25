#include <iostream>
#include <cmath>
#include <iomanip>      // szerokoœc wyswietlanegopola

using namespace std;

int main() {

    long n;
    long wynik = 0;
    cout << "Podaj liczbe doskonala np 6, 28, 496, 8128 ... ";
    cin >> n;

    for (long i=1; i<=n; i++) {

        if (n%i==0){
            wynik=+i;
        }
    }
        cout << "Suma dzielników = " << wynik << endl;
        if (wynik==n){
        cout << "Czyli liczba: " << n << " jest liczba doskonala" << endl;
        }
    return 0;
}
