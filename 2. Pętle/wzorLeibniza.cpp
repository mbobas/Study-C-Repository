#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k;
    float pi=0;
    cout << "Podaj przyblizenie: ";
    cin >> k;

    for (int i=0; i<=k; i++) {
        pi=pi+(pow(-1.0, i)/(2*i+1));
    }
        cout << "wynik: " << pi*4;
        return 0;
    }

