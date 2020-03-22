#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Sortowanie( float tab[], int size )
{
    int k;
    for( int i = 0; i < size; i++ )
    {
        k = i;
        for( int j = i + 1; j < size; j++ )
        if( tab[ j ] < tab[ k ] )
             k = j;

        swap( tab[ k ], tab[ i ] );
    }
}

int main(){

    int size;
    cout << "Podaj dlugosc tablicy: ";
    cin >> size;

    float tab[size];

    srand(time(NULL)); //generator liczb losowych

    for(int i=0; i<size; i++){
        tab[i] = (float)rand()/RAND_MAX*3; //generowanie liczb z przedzia�u [0,3]
    }

    Sortowanie(tab, size);

    //Drukowanie tablicy posortowanej
    for(int i=0; i<size; i++)
        cout << tab[i] << endl;

    return 0;
}
