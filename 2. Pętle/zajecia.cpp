#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cout << "Podaj liczbe \n";
    cin >> n;

    bool czy = true;

    if (n==1) {
        czy=false;
    }else if (n ==2) {
        czy=true;
    }else {
    int d=2;
        for (d; d<n; d++) {
            if (n%d==0){
                czy=false;
            }
        }
    }
    if (czy==true) {
        cout << "liczba jest pierwsza";
    }else {
    cout << " Liczba Nie jest pierwsza";
    }
    return 0;
}
