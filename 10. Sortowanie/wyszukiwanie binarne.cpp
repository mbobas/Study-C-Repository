#include <iostream>
#include <cmath>
using namespace std;

// p - pocatek, k-koniec
//x - szukana zmienna
// jesli p(poczatek) bedzie wiekszy niz k(koniec) to konczymy

int binarne (int tab[], int p, int k, int x){

    int idx;

    //koniec
    if (p>k) {
        idx = -1;
    }else {
        int i= (p+k)/2;   // index srodka
        if (tab[i] == x)
            idx=i;
        else if(tab[i] < x )   // zmianiamy pocz¹tek
            idx = binarne(tab, i+1, k, x);
        else
            idx = binarne(tab, p, i-1, x);
    }

    return idx;
}



int main () {
    int tab[10];
    int x;

    for (int i=0; i<10; i++){
        tab[i]=i;
        cout << tab[i];
    }
    cout << " Podaj x:";
    cin >> x;

    cout << "Wynik = " << binarne(tab, 0, 9, x);



    return 0;
}



