#include <iostream>
#include <fstream>

using namespace std;

int zlicz(string napis, char znak){
    int ile=0;
    int n=napis.length();

    for(int i=0; i<n; i++){
        if(napis[i] == znak)
            ile++;
    }

    return ile;
}

//wczytywanie wyrazu lub znaku
int main () {
    fstream plik;
    string linia;
    char c;
    int ile=0;

    plik.open("napis.txt", ios::in);

    if (!plik.good()) {
        cout << "Blad otwierania";
    }else {
        cin >> c;
        while(!plik.eof()){
        getline(plik, linia);
        ile += zlicz(linia, c);
    }
    cout << "Liczba wystapien: " << ile;
     plik.close();
    return 0;
}
}


