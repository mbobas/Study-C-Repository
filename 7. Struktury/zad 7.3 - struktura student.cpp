#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

struct student {
    string imie;
    string nazwisko;
    int numer_indexu;

};

bool porownaj(student s1, student s2){
    bool czy=false;
    if (s1.imie == s2.imie && s1.nazwisko == s2.nazwisko && s1.numer_indexu == s2.numer_indexu) {
        czy = true;
        }
    return czy;
}

int main () {
    student x,y;

    x.imie="Michal";
    x.nazwisko="Gulczynski";
    x.numer_indexu=1;

    y.imie="Michal";
    y.nazwisko="Gulczynski";
    y.numer_indexu=1;

    cout << porownaj(x, y);

    return 0;
}

