#include <iostream>
#include <cmath>
using namespace std;

//Napisz funkcje, która otrzymuje trzy argumenty: dodatnia liczbe ca³kowita n oraz dwie
//n-elementowe tablice tab1, tab2 o elementach typu int i przepisuje zawartosc tablicy tab1
//do tablicy tab2 w odwrotnej kolejnosci.

// fukcja nie moze zwracac tablicy
// rozmiar przekazujemy soobno
// zmienne sie nie zmieniaja m.,n natimiast tablica zmienia sie po p" przejœciu przez funkcjê"
//rozmar zawsze deklarujemy soobno - kopilator nie widzi jesli zadeklarujemy to w zmiennej,


int przepisz (int tab1[], int tab2[], int n) {   //przepisuje zawartosc tablicy tab1
                                                //do tablicy tab2
    for (int i=0; i<n; i++) {
        tab2[i]=tab1[n-1-i];
    }

    return 0;
}

void zamien(int n, int m){      //zamiana miejscami m i n
    int tmp=n;
    n=m;
    m=tmp;
}


int main () {
    int t1[10], t2[10];

    for (int i=0; i<10; i++){
        t1[i]=i+1;
    }

    przepisz(t1, t2, 10);

    for (int i=0; i<10; i++){
        cout << t2[i] << endl;
    }

    cout << "\n ********** \n";

    for (int i=0; i<10; i++){
        cout << t1[i] << endl;
    }

    return 0;
}



