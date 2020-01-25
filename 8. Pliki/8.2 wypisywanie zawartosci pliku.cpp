#include <iostream>
#include <fstream>

using namespace std;

//wczytywanie wyrazu lub znaku
int main () {
    fstream plik; // typ plikow jakiegokolwiek, dla binarnych jest bin.
    string napis;
    string wyraz;
    char c;

    //getline(cin, napis);

    plik.open("napis.txt", ios::in|ios::out);  // sciezka, tryb w jakim otwieramy, odczyt, zapis, nadpisanie
    if (!plik.good()) {    // czy plik jest poprawnie otwarty?
        cout << "B³¹d otwierania";
    }else {
      //biez linie nie z cin tylko z pliku i zapisz do napis
        while(!plik.eof()){
            plik >> wyraz;
            //cout << wyraz << endl; ;
            cout << wyraz << endl;
            //pary liczb  plik >> x1 >> x2 // wczytuje pary liczb
    }
    plik << "linia1" << endl; //dopisalismy na koncy pliku ostatni wyraz

    plik.close();
    return 0;
}
}

//ios::out); - tworzy plik od nowa, nawet gdy istnieje.
//ios::app); - dopisuje na koniec pliku
//ios::in;
//tryby mozna ³¹czyc - mozna otworzy, przeczytac i dopisac,
//plik.open("napis.txt", ios::in||ios:app)


//plik to jeden dlugi napis,
//jezeli otwieramy plik w trybie inn albo our to kursor jest w miejsu 0
//w trybie app, kursor ustawia sie na koncu;
//plik wczytuje wyrazy po kolei,
//metody do nawigacji.

