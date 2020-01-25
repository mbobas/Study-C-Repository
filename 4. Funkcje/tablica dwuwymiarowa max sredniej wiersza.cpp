#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int przepisz (int tab1[], int tab2[], int n) {   //przepisuje zawartosc tablicy tab1
                                                //do tablicy tab2
    for (int i=0; i<n; i++) {
        tab2[i]=tab1[n-1-i];
    }

    return 0;
}

int indexwiersza(int tab[][100], int m, int n) {  // tablica jest deklarowana jako ciag bez przerw
    // policzyc sumę - zadeklarowac tablica pomocnicz
    // gdzie jest maksimum

    int sumy[m];
    for (int i=0; i<m; i++){
        sumy[i]=0;
        for (int j=0; j<n; j++){
            sumy[i]= sumy[i]+tab[i][j];
        }
    }

    int idx=0;
    for (int i=1; i<m; i++){
        if (sumy[idx]<sumy[i]){
            idx=i;
        }
    }

    return idx;

}


int main () {

    int m =10;
    int n = 10;
    int tm[10][100];



    for (int i=0; i<10; i++){
          cout << "\n";
    //tworznie tablicy
        for (int j=0; j<10; j++){
            tm[i][j] = (i+1)*(j+1);
            cout << setw(4) << tm[i][j];

        }
    }

    cout << "index wiersza:" << indexwiersza(tm, m, n);

    return 0;
}



