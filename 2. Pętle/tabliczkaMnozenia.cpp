#include <iostream>
#include <cmath>
#include <iomanip>      // szerokośc wyswietlanegopola

using namespace std;

int main() {

    int n, m, wynik;
    cout << "Podaj iloœc wierszy: ";
    cin >> n;
    cout << "Podaj iloœc kolumn ";
    cin >> m;

    cout << "\n";

    for (int i=1; i<=n; i++) {
        cout << "   ";

        for (int k=1; k<=m; k++){
        wynik=i*k;
        cout << setw(4) << wynik;  // szerokośc wyswietlanegopola
        }
        cout << "\n";
    }
    return 0;
}
