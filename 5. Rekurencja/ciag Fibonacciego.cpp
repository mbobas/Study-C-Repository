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
int fibbo (int n){
    int d;

    if (n == 1 || n == 2) {
        d=1;
    }else {
        d = fibbo(n-2) + fibbo(n-1);
    }

    return d;
}


int main () {

    cout << " Podaj (silnia) n, m: \n";
    int n, k;
    cin >> n;


    cout << "Wynik = " << fibbo(n);



    return 0;
}



