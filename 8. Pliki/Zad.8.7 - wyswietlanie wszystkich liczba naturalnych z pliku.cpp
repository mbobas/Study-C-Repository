#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;


//wczytywanie wyrazu lub znaku
int main () {
    fstream plik;
    int n;
    int ile=0;

    plik.open("zad8.7.txt", ios::in);
    plik >> n;
    int min=n;
    int mx=n;
    int suma=n;




    if (!plik.good()) {
        cout << "Blad otwierania";
    }else {
        while(!plik.eof()){
        plik >> n;
        ile++;
        suma+=n;
        if (n>mx){
            mx=n;
        }
        if (n<min){
            min=n;
        }
        }
    }

     cout << "suma: " << suma << endl;
     cout << "liczba.minimalna: " << min << endl;
     cout << "liczba.maksymalna: " << mx;

     plik.close();
    return 0;
}


