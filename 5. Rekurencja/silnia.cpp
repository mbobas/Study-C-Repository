#include <iostream>
#include <cmath>
using namespace std;

//REKURENCJA

int silnia(int n) {             //silnia rekurencyjnie
    int s;

    if (n==0) {
        s = 1;
    }else
        s = n*silnia(n-1);

    return s;
}
//
//    for (int i=2;i<=n; i++){
//           s=s*i;
//        }
//    return s;             // zmienna s nie jest widoczna w main
//                          // sa to zmienne lokalne - dobry nawyk :)

int main() {

    cout << " Podaj (silnia) n: \n";
    int n;
    cin >> n;

    cout << "Wynik = " << silnia(n);

    return 0;
}
