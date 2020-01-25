#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    const int nmax = 100;
    float tab[nmax];
    int n;

    cout << "Podaj dlugosc tablicy: ";
    cin >> n;

    srand(time(NULL)); //generator liczb losowych

    for(int i=0; i<n; i++){
        tab[i] = (float)rand()/RAND_MAX*3; //generowanie liczb z przedzia�u [0,3]
    }

    //W�a�ciwe sortowanie
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(tab[j]<tab[j-1]){
                float tmp=tab[j];
                tab[j]=tab[j-1];
                tab[j-1]=tmp;
            }
        }
    }

    //Drukowanie tablicy posortowanej
    for(int i=0; i<n; i++)
        cout << tab[i] << endl;

    return 0;
}
