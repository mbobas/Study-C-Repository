#include <iostream>
#include <cmath>
#include <stdlib.h>   // biblioteka funkcji random
#include <time.h>     // bilbioteka potrzebana do prawdziwej losowosc - zaleznej od czasu
using namespace std;

int main() {
int liczba;
int zakres = 1000;
int tab[zakres];
int tabLiczPierw[zakres];

    cout << "Wczytaj przedzia³ od 1 do 10^6 \n";
    cin >> liczba;

    for (int i=0; i<liczba; i++){
        tab[i] = i;
        cout << tab[i] <<" ";
    }

    cout <<"\n"  << "Wczytano liczby \n";

    for (int i=0; i<liczba; i++){
    if (tab[i]==1) {
        cout << "tab[" << i << "] = 1";
    } else if  (tab[i]==2) {
        tabLiczPierw[0]= tab[i];
        cout << "tab[" << i << "] = 1";
    }else {
        int d=2;
        //cout << "licze.";
                   for (d; d<=liczba; d++){

                        if (tab[d]%d==0){
                            cout << "to nie jest liczba pierwsza";

                        }
                        else {
                             tabLiczPierw[d]=tab[d];
                            //cout << ".";
                            }
                    }
                    //cout << "\n \n Obliczylem...To jest liczba pierwsza .. \n";

                }


    }

    cout << "Liczby pierwsze: ";

    for (int i=0; i<=liczba; i++){
        cout << tabLiczPierw[i] << " ";
    }


    //return 0;
}

