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
float sn (int n){
    float s;

    if (n == 1) {
        s=0.5;
    }else{
        s = sn(n-1) + (float)n/(n+1);
    }

    return s;
}


int main () {

    cout << " Podaj (agrument sumy) n, m: \n";
    int n, k;
    cin >> n;


    cout << "Wynik = " << sn(n);



    return 0;
}



