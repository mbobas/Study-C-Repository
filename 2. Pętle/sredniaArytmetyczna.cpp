#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << " Podaj ilosc liczb n: \n";
    int n;
    cin >> n;

    float suma =0;
    float a;

    for (int i=0; i<n; i++){
        cout << "Podaj liczbe a[" << i+1 << "]:";
        cin >> a;
        suma=suma+a;
    }
    cout << "srednia arytmetyczna liczba: " << suma/n;
    return 0;
}

