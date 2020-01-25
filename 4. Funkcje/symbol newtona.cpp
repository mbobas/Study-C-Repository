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

//symbol Newtona
int dwumian (int n, int k){
    int d;

    d = silnia(n)/(silnia(k) * silnia(n-k));     // nawias, albo dzielenie  zamiast mnozenia !!!!

    return d;
}

float potega (float m, int n) {
    float p=1;

    if (n>0) {
    for (int i=0; i<=n; i++){
            p=p*m;
        }
    }else
    for (int i=1; i<= -n; i++){      // petla dla ujemnych !!!
            p=p/m;                  // podnosze do potegi ujemnej ale mozna te zrobic 1(p*m)
        }

    return p;
}



int main () {

    cout << " Podaj liczbe aby uzyskac dwiumian n: \n";
    int n, k;
    cin >> n;
    cin >> k;

    cout << "Wynik = " << dwumian(n,k);



    return 0;
}



