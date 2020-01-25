#include <iostream>
#include <cmath>
using namespace std;

int silnia(int n) {
    int s=1;
    for (int i=2;i<=n; i++){
           s=s*i;
        }
    return s;             // zmienna s nie jest widoczna w main
                          // sa to zmienne lokalne - dobry nawyk :)
}

//symbol Newtona rekurencyjnie
int dwumian (int n, int k){
    int d;

    if (n==k || k==0) {
        d=1;
    }else {
        d = dwumian(n-1, k-1)+dwumian(n-1,k);
    }

    return d;
}


int main () {

    cout << " Podaj (argumenty dwumianu) n, m: \n";
    int n, k;
    cin >> n;
    cin >> k;

    cout << "Wynik = " << dwumian(n,k);



    return 0;
}



