#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int counter = 0;
int swapCounter = 0;

void quicksort(int tab[], int left, int right) {
    if(left >= right) {
        return;
    }
    int pivot = tab[(left + right)/2];

    int i, j;
    i = left;
    j = right;
    while(i<j){
        while(tab[i]<pivot) {
            i++; counter++;}
        while(tab[j]>pivot){
            j--; counter++;}
        if(i>j)
            break;
        swap(tab[i], tab[j]);
        swapCounter++;
        i++;
        j--;
    }
    /// Wywo�ania rekurencyjne
    quicksort(tab, left, j);  /// Sortujemy rekurencyjnie lewa czesc
    quicksort(tab, i, right); /// Sortujemy rekurencyjnie prawa czesc
}

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
      for (int i=0; i<n; i++){
        cout << tab[i];
        cout << ",";
    }
}

void wylosujTabliceIDodaj(int tab[], int n, int d)
{
    srand(time(NULL));
    for(int i=0; i<n; i++){
        tab[i]=(rand()%1000+1)+d;
    }
      ///for (int i=0; i<n; i++){
     ///   cout << tab[i];
     ///   cout << ",";
   /// }
   /// cout<<endl;
}

void testQuicksort(int tab[], int n) {
    //counter = 0;
    //swapCounter = 0;
    cout << "Tablica przed posortowaniem:" << endl;
    wypisz(tab, n);

    quicksort(tab, 0, n-1);

    cout << "Tablica po posortowaniu:" << endl;
    wypisz(tab, n);

    cout << "Ilosc porownan quicksort: " << counter << endl;
    cout << "Ilosc zamian quicksort: " << swapCounter << endl;
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
void testSortowanieBabelkowe(int tab[], int n) {
    cout << "Tablica przed posortowaniem:" << endl;
    wypisz(tab, n);

    SortowanieBabelkowe(tab, n);

    cout << "Tablica po posortowaniu babelkowym:" << endl;
    wypisz(tab, n);

    cout << "Ilosc porownan sortowanie babelkowe : " << counter << endl;

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
void testSortowaniePrzezWstawianie(int tab[], int n) {
    cout << "Tablica przed sortowanie przez wstawianie:" << endl;
    wypisz(tab, n);

    SortowaniePrzezWstawianie(tab, n);

    cout << "Tablica po posortowaniu sortowanie przez wstawianie:" << endl;
    wypisz(tab, n);

    cout << "Ilosc porownan sortowanie przez wstawianie : " << counter << endl;

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




void testSortowaniePrzezWybieranie(int tab[], int n) {
    cout << "Tablica przed sortowanie przez wybieranie:" << endl;
    wypisz(tab, n);

    SortowaniePrzezWybieranie(tab, n);

    cout << "Tablica po posortowaniu sortowanie przez wybieranie:" << endl;
    wypisz(tab, n);

    cout << "Ilosc porownan sortowanie przez wybieranie : " << counter << endl;

}


void sortowaniePrzezZliczanie(int T[], int rozmiar){

    int m =1000; //maksymalna liczba w tablicy!!
    int P[ m ] { 0 };

    for( int i = 0; i < rozmiar; i++ ) {
        P[ T[ i ] ] ++;
        counter++;
    }

    int k = 0;
    for( int i = 0; i <= m-1; i++ ){
      counter++;
    //Na początku sprawdzasz liczbę zero
    for( int j = P[ i ]; j >= 1; j-- ) //p[0] będzie zawierało ilość wysąpień liczby 0
    {
        counter++;
        T[ k ] = i; // jeśli w tablicy wystąpiło "0" wysąpiło 3 razy pętla wykona się 3 razy!!!
        k++;
    }
    }
    cout << endl << "Posortowana tablica - sortowanie przez zliczanie" << endl;
    for( int i = 0; i < rozmiar; i++ )
         cout << T[ i ] << " ";

    cout << endl;
}

int main() {

    int n=100;
    int tab[100];
    wylosujTabliceIDodaj(tab, 100, 2);
    testSortowanieBabelkowe(tab,100);

    counter = 0;
    swapCounter = 0;

    wylosujTabliceIDodaj(tab, 100, 3);
    testSortowaniePrzezWstawianie(tab,100);

    counter = 0;
    swapCounter = 0;

    wylosujTabliceIDodaj(tab, 100, 3);
    testSortowaniePrzezWybieranie(tab,100);

    counter = 0;
    swapCounter = 0;

    wylosujTablice(tab, n);
    sortowaniePrzezZliczanie(tab, n);

    /// quicksort
    ///    for (int i=0; i<n; i++) {
    ///        wylosujTabliceIDodaj(tab, 100, i);
    ///        testQuicksort(tab, 100);
    ///       wyzerujTablice(tab, 100);
    ///    }
    counter = 0;
    swapCounter = 0;





    return 0;
}
