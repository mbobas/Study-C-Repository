#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float n;
    float k;
    float wynik = 2;
    float willis;

    cout << "Podaj przyblizenie PI wzorem Wilissa";
    cin >> n;

    for (k=1; k<n; k++){
        willis=((2*k)/(2*k-1))*((2*k)/(2*k+1));
        wynik=wynik*willis;
    }
        cout << "Przyblizenie PI: " << wynik;

    return 0;
}
