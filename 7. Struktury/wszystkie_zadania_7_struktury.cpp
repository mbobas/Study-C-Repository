#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct trojkat{
    float a;
    float b;
    float c;
};

float obwod(trojkat x){
    return x.a+x.b+x.c;
}

void kopiuj(trojkat tablica[], trojkat kopia[], int n){
    for(int i=0; i<n; i++){
        kopia[i]=tablica[i];
    }
}

struct student{
    string imie;
    string nazwisko;
    int numer_indeksu;
};

bool porownaj(student s1, student s2){
    bool czy=false;
    if(s1.imie == s2.imie && s1.nazwisko == s2.nazwisko && s1.numer_indeksu == s2.numer_indeksu){
        czy=true;
    }
    return czy;
}

void sortuj_studentow(student studenci[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(studenci[j].nazwisko<studenci[j-1].nazwisko){
                student tmp=studenci[j];
                studenci[j]=studenci[j-1];
                studenci[j-1]=tmp;
            }
        }
    }
}

struct wektor{
    float x;
    float y;
    float z;
};

float dlugosc(wektor v){
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

wektor suma(wektor v1, wektor v2){
    wektor v;
    v.x = v1.x+v2.x;
    v.y = v1.y+v2.y;
    v.z = v1.z+v2.z;

    return v;
}

float iloczyn_skalarny(wektor v1, wektor v2){
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}

//enum stan{-1,0,1};

struct komputer{
    string ip;
    string wlasciciel;
    int stan_polaczenia;
};

void wyswietl_komputer(komputer komp){
    cout << "Adres IP: " << komp.ip << endl;
    cout << "Wlasciciel: " << komp.wlasciciel << endl;
    switch (komp.stan_polaczenia){
    case -1:
        cout << "Polaczenie nienawiazane.";
    break;

    case 0:
        cout << "Nawiazywanie polaczenia.";
    break;

    case 1:
        cout << "Polaczenie nawiazane.";
    break;
    }
    cout << endl;
}


int main(){
 /*     int w;
    cout << "1. Dlugosc wektora." << endl;
    cout << "2. Suma wektorow." << endl;
    cout << "3. Iloczyn skalarny wektorow." << endl << endl;
    cout << "0. Zakoncz." << endl;
    cout << "> ";
    cin >> w;

    while(w != 0){
      switch (w) {
        case 1:
            wektor v;
            cout << "Wprowadz wektor v: ";
            cin >> v.x >> v.y >> v.z;
            cout << "dlugosc(v) = " << dlugosc(v) <<endl;
        break;

        case 2:
            wektor v1,v2;
            cout << "Wprowadz wektor v1: ";
            cin >> v1.x >> v1.y >> v1.z;
            cout << "Wprowadz wektor v2: ";
            cin >> v2.x >> v2.y >> v2.z;
            v=suma(v1,v2);
            cout << "v1 + v2 = (" << v.x << ", " << v.y << ", " << v.z << ")" << endl;
        break;

        case 3:
            cout << "Wprowadz wektor v1: ";
            cin >> v1.x >> v1.y >> v1.z;
            cout << "Wprowadz wektor v2: ";
            cin >> v2.x >> v2.y >> v2.z;

            cout << "iloczyn(v1,v2) = " << iloczyn_skalarny(v1,v2) << endl;
        break;
        }
       cout << "> ";
       cin >> w;
    } */

    komputer k;
    k.ip="158.11.12.7";
    k.wlasciciel="Mateusz";
    k.stan_polaczenia=0;

    wyswietl_komputer(k);

    return 0;
}
