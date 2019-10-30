#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, m;
    cout << "Podaj iloœc wierszy trojkata: ";
    cin >> n;

    cout << "\n";

    for (int i=0; i<n; i++) {
        cout << "   ";

        for (int j=0; j<=(n-i); j++){
                cout << " ";
        }
        for (int k=0; k<=i; k++){
        cout << "*";
        }
        cout << "\n";

    }
    return 0;
}
