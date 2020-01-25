#include <iostream>
#include <cmath>
#include <stdlib.h>   // biblioteka funkcji random
#include <time.h>     // bilbioteka potrzebana do prawdziwej losowosc - zaleznej od czasu
using namespace std;

int main() {
//srand(time(NULL));  // inicjalizacja bibioteki stdlib - zaleznosc od czasu.
//const int nmax=100;
int tab[50][50];
int n;
int i,j;
int iloczyn = 1;
//int s=0;
    cout << "Podaj liczbe wierszy i kolumn w tabliczce mnozenia";
    cin >> n;

    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
        tab[i][j] = i*j;
    }
    }

    cout << "\n";

    for (int i=1; i<=n; i++){

        for (int j=1; j<=n; j++)
        if (tab[i][j] >= 10 &&  tab[i][j]  <= 99){
        cout << tab[i][j] << "  ";
        }else if (tab[i][j] >= 0 && tab[i][j] < 10) {
        cout << tab[i][j] << "   ";
        }else if (tab[i][j] >= 100 && tab[i][j] <= 999) {
            cout << tab[i][j] << "    ";
        }
        cout << "\n";
    }



}
