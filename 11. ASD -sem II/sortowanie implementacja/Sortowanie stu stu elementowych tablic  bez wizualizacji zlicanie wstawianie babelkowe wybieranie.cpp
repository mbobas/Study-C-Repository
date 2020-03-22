#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int counter = 0;
int swapCounter = 0;

void wypisz(int tab[], int n) {
    for(int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void wyzerujTablice(int tab[], int n)
{
    for( int i = 0; i < n; i++ )
         tab[ i ] = 0;
}

void wylosujTablice(int tab[], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++){
        tab[i]=(rand()%1000+1);
    }
}

void wylosujTabliceIDodaj(int tab[], int n, int d)
{
    srand(time(NULL));
    for(int i=0; i<n; i++){
        tab[i]=(rand()%1000+1)+d;
    }

}


void SortowanieBabelkowe( int tab[], int size )
{
    for( int i = 0; i < size; i++ )
    {
        counter++;
        for( int j = 0; j < size - 1; j++ )
        {
            counter++;
            if( tab[ j ] > tab[ j + 1 ] ) {
                 counter++;
                 swap( tab[ j ], tab[ j + 1 ] );
                 swapCounter++;
            }
        }
    }
}


void SortowaniePrzezWstawianie( int tab[], int size )
{
    int temp, j;

    for( int i = 1; i < size; i++ )
    {
        counter++;
        temp = tab[ i ];

        for( j = i - 1; j >= 0 && tab[ j ] > temp; j-- ){
             counter+2;
             tab[ j + 1 ] = tab[ j ];
        }
        tab[ j + 1 ] = temp;
    }
}

void SortowaniePrzezWybieranie( int tab[], int size )
{
    int k;
    for( int i = 0; i < size; i++ )
    {
        counter++;
        k = i;
        for( int j = i + 1; j < size; j++ ){
        counter++;
        if( tab[ j ] < tab[ k ] )
             k = j;
             counter++;
        }
        swap( tab[ k ], tab[ i ] );
    }
}


void sortowaniePrzezZliczanie(int T[], int rozmiar){
    wylosujTablice(T, rozmiar);

    int m =1000; //maksymalna liczba w tablicy!!
    int P[ m ] { 0 };

    for( int i = 0; i < rozmiar; i++ ) {
            counter++;
        P[ T[ i ] ] ++;
    }

    int k = 0;
    for( int i = 0; i <= m-1; i++ ) {
        counter++;

    for( int j = P[ i ]; j >= 1; j-- )
    {
        counter++;
        T[ k ] = i;
        k++;
    }
    }
}

int main() {

    cout << "Srednia ilosć porownan dla 100 tablic 100 elementowy - losowych " << endl;
    int n=100;
    int tab[100];
    for (int i=0; i<n; i++){
        wylosujTabliceIDodaj(tab, 100, i);
        SortowanieBabelkowe(tab,100);
        wyzerujTablice(tab, 100);
    }
    cout << "Sortowanie babelkowe  "<< counter/n << endl;
    counter = 0;


    for (int i=0; i<n; i++){
        wylosujTabliceIDodaj(tab, 100, i);
        SortowaniePrzezWstawianie(tab,100);
        wyzerujTablice(tab, 100);
    }
    cout << "Sortowanie przez wstawianie  "<< counter/n << endl;
    counter = 0;

    for (int i=0; i<n; i++){
        wylosujTabliceIDodaj(tab, 100, i);
        SortowaniePrzezWybieranie(tab,100);
        wyzerujTablice(tab, 100);
    }
    cout << "Sortowanie przez wybieranie  "<< counter/n << endl;
    counter = 0;

     for (int i=0; i < 100; i++){
       sortowaniePrzezZliczanie(tab, 100);
       wyzerujTablice(tab, 100);
    }
    cout << "Sortowanie przez zliczanie  "<< counter/100 << endl;

    return 0;
}
