#include <iostream>
#include <cmath>
using namespace std;

int silnia(int n) {
    int s=1;
    for (int i=2;i<=n; i++){
           s=s*i;
        }
    return s;             // zmienna s nie jest widoczna w main
                          // sa to zmienne lokalne - dobry nawyk :)
}
int main() {

    cout << " Podaj silniê !n: \n";
    int n;
    cin >> n;

    cout << "Wynik = " << silnia(n);

    return 0;
}
