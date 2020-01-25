#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cmath>

using namespace std;

//zaleta enum
//jezeli stworzymy zmienna typu stan to nie mozemy przypisac niczego innego,
//to sa tak naprawde etykiety
//np dni tygodnia lub plec
// etykiety trzeba wypisaywac recznie
// enum nie moze przyjmowac wartosc iliczbowych

// enum  stan{-1, 0, 1};

struct komputer {
    string ip;
    string wlasciciel;
    //stan polaczenia jesttypu stan
    int stan_polaczenia;

};

void wyswietl_komputer(komputer komp) {
    cout << "Adres ip: " << komp.ip << endl;
    cout << "W³asciciel: " << komp.wlasciciel << endl;

    //typ enum - stan - wyswietlamy swichem.
    switch  (komp.stan_polaczenia) {
        case -1:
            cout << "Po³¹czenie nienawiazane";
        break;

        case 0:
            cout << "Nawiazywanie polaczenia";
        break;

        case 1:
            cout << "Polaczenie nawizane";
        break;
    }
}

int main () {


    komputer k;

    k.ip="158.22.3.44";
    k.wlasciciel="Michal";
    k.stan_polaczenia=1;

    wyswietl_komputer(k);

    //    komputer k[2];
//
//    k[0].ip="158.22.3.44";
//    k[0].wlasciciel="Michal";
//    k[0].stan_polaczenia=1;
//
//    k[1].ip="158.22.3.22";
//    k[1].wlasciciel="MMMMM";
//    k[1].stan_polaczenia=0;
//albo funkcja musi miec tablice

// albo towrzymy tablice i wywolujemy funkcje przechodzac po tablicy - jesli chemy miec 2 komputery



    return 0;
}

