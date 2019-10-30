#include <iostream>
#include <cmath>
#include <stdlib.h>   // biblioteka funkcji random
#include <time.h>     // bilbioteka potrzebana do prawdziwej losowosc - zaleznej od czasu
using namespace std;

int main() {
srand(time(NULL));  // inicjalizacja bibioteki stdlib - zaleznosc od czasu.
const int nmax=50;
int tab[nmax];
int n = 50;
int s=0;

    for(int i=0; i<n; i++){
        tab[i]=(rand()%1000+1);   // reszta z dzielenia przez 1000 = 999 + 1;
    }

    cout << "\n";

    for (int i=0; i<50; i++){
        cout << tab[i];
        cout << "\n";
    }

    int maks = tab[0];   // wyszukiwanei max liczby;
    for (int i=1; i<50; i++) {
        if(tab[i]>maks){
            maks=tab[i];
        }
    }
    cout << "maksymalna= " << maks;
}
