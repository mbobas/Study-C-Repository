#include <iostream>
using namespace std;

int main() {

// wprowadzenie 2 cyfr

    int n, m;
    cin >> n >> m;
    cout << "Twoje liczby to:" << n << " oraz " << m;
    cout << "\n";

// sprawdzenie warunku

    if (n>m) {
        cout << "Liczba n: " << n << " jest wieksza " << "od m: " << m;
    }
    else {
        cout << "Liczba m: " << m << " jest wieksza " << "od n: " << n;
    }
    cout << "\n";
    return 0;

}

