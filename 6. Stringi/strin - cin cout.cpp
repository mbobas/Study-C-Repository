#include <iostream>
#include <string>

using namespace std;


int main () {

    string napis = "Ala ma kota";      // do stringa odwolujemy sie jak do elementu tablicy
    //cin  >> napis // czyta do pierwszego bialego znaku
    getline(cin, napis);
    //cout << napis[7];
    cout << napis;

    return 0;
}
