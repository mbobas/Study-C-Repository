#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

struct kwadrat {
    int a;
    int b;
    int c;
    int d;
};

int obwod (kwadrat x) {
    int obwod = x.a+x.b+x.c+x.d;
    return obwod;
}

void kopiuj (kwadrat tab1[], kwadrat kopia[], int n){
    for(int i=0; i < n; i++){
    kopia[i]=tab1[i];
    }
}

int main() {

    kwadrat tab1[4], kopia[4];

    for (int i=0; i<4; i++) {
        cout << " Wprowdz trojkat nr: " << i+1 << endl;
        cin >> tab1[i].a >> tab1[i].b >> tab1[i].c >> tab1[i].d;
    }

    kopiuj(tab1, kopia, 4);
    for (int i=0; i<4; i++) {
        cout << "Kopia: "  << kopia[i].a << kopia[i].b << kopia[i].c << kopia[i].d;
    }
return 0;
}


