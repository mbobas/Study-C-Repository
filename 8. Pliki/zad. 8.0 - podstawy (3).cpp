#include <iostream>
#include <fstream>

using namespace std;


int main () {
    fstream plik; // typ plikow jakiegokolwiek, dla binarnych jest bin.
    string napis;

    //getline(cin, napis);

    plik.open("napis.txt", ios::app);  // sciezka, tryb w jakim otwieramy, odczyt, zapis, nadpisanie
    if (!plik.good()) {    // czy plik jest poprawnie otwarty?
        cout << "Błąd otwierania";
    }else {
    cout << "Podaj napis" << endl;
    getline(cin, napis);
    plik << napis; //tak samo jak cout
    }

    plik.close();
    return 0;
}

//ios::out); - tworzy plik od nowa, nawet gdy istnieje.
//ios::app); - dopisuje na koniec pliku
//ios::
