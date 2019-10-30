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

    for (int i=0; i<10; i++){       //wyczytywanie
        cout << "\n";
        for(int j=0; j<10; j++){
        cout << tab[i][j];
        cout << " ";
        }
    }
    for (int i=0; i<=10; i++)   // suma elementow przekatnej
        for(int j=i+1; j<n; j++);
        dodac - logika sumy poszczegolnych elementow tablicy.
}
