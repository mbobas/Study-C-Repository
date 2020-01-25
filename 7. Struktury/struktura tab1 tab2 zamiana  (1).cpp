#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

struct trojkat {
    float a;
    float b;
    float c;

};

void  kopiuj(trojkat tablica[], trojkat kopia[], int n){
    for(int i=0; i<n; i++){
        kopia[i]=tablica[i];
    }

}

int main () {
    trojkat tab1[3], tab2[3];

    for(int i=0; i<3; i++){
        cout << "wprowadz trojkat " << i+1 << ": ";
        cin >> tab1[i].a >> tab1[i].b >> tab1[i].c;
    }

    kopiuj(tab1, tab2, 3);
    for(int i=0; i<3; i++){
        cout <<"KOPIA TAB2: " << tab2[i].a << tab2[i].b << tab2[i].c << endl;
    }

    return 0;
}

