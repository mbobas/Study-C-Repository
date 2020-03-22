#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

void  sortuj_napisy(string napisy[], int n) {   // tablica + rozmiar

// mechanizm sortownia z porzednich lekcji
//zmieniono zmienna + string zmaiast float

    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(napisy[j]<napisy[j-1]){
                string tmp=napisy[j];
                napisy[j]=napisy[j-1];
                napisy[j-1]=tmp;
            }
        }
    }

}
int main () {

    string napis[3];
    napis[0] = "Mateusz";
    napis[1] = "Karol";
    napis[2] = "Zosia";

    sortuj_napisy(napis, 3);

    cout << napis[0] << napis[1] << napis[2];



    return 0;
}

//co to znaczy, ze  napis1 jest mniejszy niz napis2
//odp. zsprawdza to porzadek leksykograficnzy - slowo bedzie wczesniej w slowniku.


//jesli dodamy 2 chary to sie dodadza 2 kody ASCI
