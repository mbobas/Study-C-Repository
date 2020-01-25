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

int main () {
    string napis;
    getline(cin,napis);
    cout << przytnij(napis);

    return 0;
}
