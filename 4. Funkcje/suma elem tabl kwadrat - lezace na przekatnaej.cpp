#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
srand(time(NULL));
int tab[10][10];
int n = 10;
int s=0;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++) {
        tab[i][j]=rand()%100;   // wypelnianie tablicy
        }
    }

    for (int i=0; i<10; i++) {   // rysowanie tablicy
            cout << "\n";
        for(int j=0; j<10; j++){
            if(tab[i][j] > 9){
            cout << tab[i][j] << " ";
            }else {
            cout << tab[i][j] << "  ";
            }
        }
    };

    cout << "\n 1:1 " << tab[0][0];   // sprawdzanie przyk³adów // pozycja
    cout << "\n 1:2 " << tab[0][1];
    cout << "\n 2:1 " << tab[1][0];
    cout << "\n 10:10 " << tab[9][9];


    cout << "\n SUMA: " << s;

        for (int i=0; i<=10; i++){           // suma elementow powy¿ej przekatnej kwadratu
            for(int j=i+1; j<n; j++){        // j+1

            cout << "\n " << s <<" + " << tab[i][j];    //sprawdenie
            cout << " - tab[" << i <<"] [" << j <<"] ";  // sprawdzenie
            s=s+tab[i][j];
            cout << " = " << s;
        }
    }
}
