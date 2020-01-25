#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

string  sortuj(string napisy) {

    int n = napisy.length();

    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(napisy[j]<napisy[j-1]){
                char tmp=napisy[j];
                napisy[j]=napisy[j-1];
                napisy[j-1]=tmp;
            }
        }
    }
    return napisy;
}

bool anagramy(string n1, string n2){
    bool czy=false;

    if (sortuj(n1) == sortuj(n2)){
        czy=true;
    }

    return czy;
}
int main () {

    cout << anagramy("Karol", "loraK");

    return 0;
}

//co to znaczy, ze  napis1 jest mniejszy niz napis2
//odp. zsprawdza to porzadek leksykograficnzy - slowo bedzie wczesniej w slowniku.


//jesli dodamy 2 chary to sie dodadza 2 kody ASCI
