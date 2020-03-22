#include <iostream>
using namespace std;

int counter = 0;
int swapCounter = 0;

void quicksort(int tab[], int left, int right) {
    /// Warunek stopu rekurencji
    if(left >= right) {  /// Jezeli nie ma juz co sortowac
        return; /// Zakoncz obecne wywolanie
    }

    int pivot = tab[(left + right)/2];  /// element ze srodka
    ///int pivot = tab[left]; /// Element skrajny - z lewej strony
    ///int pivot = tab[right]; /// Element skrajny - z prawej strony
    ///int pivot = (tab[left] + tab[right]) / 2; /// Srednia z pierwszego i ostatniego
    /// pivot = med3 - Mediana z 3 wartosci: tab[left], tab[right], tab[(left+right)/2]
    int i, j;
    i = left;
    j = right;
    /// Glowna petla
    /// Przestawiamy mniejsze na lewo, wieksze na prawo
    while(i<j){
        while(tab[i]<pivot) {/// Szukamy el. do przeniesienia na prawo
            i++; counter++;}
        while(tab[j]>pivot){ /// Szukamy el. do przeniesienia na lewo
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

void testQuicksort(int tab[], int n) {
    counter = 0;
    swapCounter = 0;
    cout << "Tablica przed posortowaniem:" << endl;
    wypisz(tab, n);

    quicksort(tab, 0, n-1);

    cout << "Tablica po posortowaniu:" << endl;
    wypisz(tab, n);

    cout << "Ilosc porownan: " << counter << endl;
    cout << "Ilosc zamian: " << swapCounter << endl;
}

int main() {
    ///int tab[10] = {5, 2, 4, 4, 9, 1, 1, 12, 3, 2};
    int tab1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; /// Tablica posortowana
    int tab2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; /// Tablica posortowana odwrotnie


    testQuicksort(tab1, 10);
    cout << endl << endl;
    testQuicksort(tab2, 10);


    return 0;
}
