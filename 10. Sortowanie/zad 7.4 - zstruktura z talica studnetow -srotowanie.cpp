#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iomanip>

using namespace std;

struct student {
    string imie;
    string nazwisko;
    int numer_indexu;

};

void sortuj_studentow(student studeci[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(studeci[j].nazwisko<studeci[j-1].nazwisko){
                student tmp=studeci[j];
                studeci[j]=studeci[j-1];
                studeci[j-1]=tmp;
            }
        }
    }
}

// chciac sprawdzic imie i nazwosko sklejamy dwi zmienne lub dorzucamy kolejnego ifa

int main () {

    // zdefiniowac tablice dla tych 2 zmemiennych
    student x[2];

    x[0].imie="Karol";
    x[0].nazwisko="Nowak";
    x[0].numer_indexu=1;

    x[1].imie="Michal";
    x[1].nazwisko="Bulczynski";
    x[1].numer_indexu=2;

    for (int i=0; i<2; i++) {
        cout << " " << x[i].imie << " " << x[i].nazwisko << " " << x[i].numer_indexu << endl;
    }
    sortuj_studentow(x, 2);

    for (int i=0; i<2; i++) {
        cout << " " << x[i].imie << " " << x[i].nazwisko << " " << x[i].numer_indexu << endl;
    }

    return 0;
}

