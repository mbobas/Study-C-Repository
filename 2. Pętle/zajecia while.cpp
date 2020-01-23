#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cout << "Podaj liczbe \n";
    cin >> n;

    bool czy = true;

    if (n == 1) {
        czy=false;
    }

    int d=2;

    while (d < n && czy) {
        if (n%d==0){
            czy=false;
        }else {
        d=d+1;
        }
    }

    if (czy==true){
        cout << "jest liczba pierwsza";

    }else {
    cout << "Nie jest liczba pierwsza";
    }
    return 0;
}
