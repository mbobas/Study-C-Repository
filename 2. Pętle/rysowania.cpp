#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, m;
    cout << "Podaj ilo�c wierszy: ";
    cin >> n;
    cout << "Podaj ilo�c kolumn ";
    cin >> m;

    cout << "\n";

    for (int i=0; i<n; i++) {
        cout << "   ";

        for (int k=0; k<m; k++){
        cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
