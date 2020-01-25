#include <iostream>
#include <fstream>

using namespace std;

//wczytywanie wyrazu lub znaku
int main () {
    fstream plikout, plikin;
    string napis;
    string wyraz;
    char c;

    plikin.open("napis.txt", ios::in);
    plikout.open("napis2.txt", ios::out);

    if (!plikout.good() && plikin.good()) {
        cout << "Blad otwierania";
    }else {

        while(!plikin.eof()){
            getline(plikin, wyraz);
            plikout << wyraz << endl;
        }

    }

    plikout.close();
    plikin.close();
    return 0;
}


