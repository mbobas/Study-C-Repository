#include <iostream>
#include <string>


using namespace std;

void podziel_napis(string napis) {
    int n = napis.length();

    for (int i=0; i<n; i++){
        cout << "[" << napis[i] << "]";    // napis od [i] to jest znak
                                        // dodawanie char'ów to jest dla kompilatora
                                        //dodawanie liczb calkowitych
}
}



string przytnij(string nazwa_pliku) {

    string nazwa; // zmienna pomocnincz - do nie przepiszemy nazwe bez rozszerzenia

    int i=0; // iterator
    int n = nazwa_pliku.length();   // zmienna pomocnicza
    int kropka=n;  // szukamy kropki, jesli nie znajdziemy to przepiszemy caly napis

    for (int j=0; j<n; j++){
        if(nazwa_pliku[j]=='.')
            kropka = j;          //znajdujemy numer indeksu ostatniej kropki
    }

    while (i<kropka) {         // ograniczamy dlugosc petli do drugiej kropki
        nazwa += nazwa_pliku[i]; // trzeba zadeklarowac dlugosc nowej tablicy nazwa
                                    // do pustego napisu bedziemy doklejac litery
        i++;
    }

    return nazwa;
}

int zlicz (char znak, string napis) {
    int ile=0;
    int n = napis.length();
    int i=0;

    for (int i=0; i<n; i++) {
        if(napis[i] == znak){
            ile++;
        }
    }
    return ile;
}

string palindrom (string napis) {
    string wynik = "a";           // cos nie dziala
    bool czy=true;
    int n = napis.length();

    int i=0;
    while (czy && i < n/2){
        if (napis[i] != napis[n-1-i]){  //pierwszy i ostatni znak slowa
        czy=false;
        }
        i++;
        }
    if (czy){
        wynik = "Palindrom";
    }else {
        wynik="NIE palindrom";
    }
    return wynik;
}



int main () {
    cout << "Podaj palindrom";
    string napis;
    getline(cin,napis);

    cout << palindrom(napis);

    return 0;
}
