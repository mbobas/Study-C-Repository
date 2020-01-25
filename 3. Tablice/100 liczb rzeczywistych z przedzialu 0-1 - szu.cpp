#include <iostream>
#include <cmath>
#include <stdlib.h>   // biblioteka funkcji random
#include <time.h>     // bilbioteka potrzebana do prawdziwej losowosc - zaleznej od czasu
using namespace std;

int main() {
srand(time(NULL));  // inicjalizacja bibioteki stdlib - zaleznosc od czasu.
const int nmax=100;
double tab[nmax];
int n = 100;

//int s=0;

    for(int i=0; i<n; i++){
        tab[i]=((double)rand()/RAND_MAX); // Po pierwsze, trzeba uzyskaæ liczbê losow¹ z zakresu <0, 1>, czyl zapamietaæ
    }

    cout << "\n";

    for (int i=0; i<n; i++){            //wypisujemy elmenty
        cout << tab[i];
        cout << "\n";
    }

    double minimum = tab[0];
    int index;
    // wyszukiwanei indexu najmniejsej liczby
    for (int i=1; i<n; i++) {

        if(tab[i]<minimum){
            index = i;
            minimum=tab[i];

        }

    }
    cout << "index= " << index;
    cout << " minimalna= " << minimum;

}
