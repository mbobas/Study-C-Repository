#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << " Podaj n: \n";
    int n;
    cin >> n;

    int wynik=1;

    //if (n<=1) {
    //    cout << "n-silnia n!= " << wynik;
    //}else {
    //int i=2;
    for (int i=2;i<=n; i++){
           wynik=wynik*i;
        }
        cout << "Wynik = " << wynik;

    return 0;
}
