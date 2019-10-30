#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float n;
    cout << "Podaj liczbe \n";
    cin >> n;

    int k;
    float pi = 2;

    for (k=1; k<=n; k++) {
    pi = pi*2*k/(2*k-1)*2*k/(2*k+1);
    }
    cout << pi;

    return 0;
}

