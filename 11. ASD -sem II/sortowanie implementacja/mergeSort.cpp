/// n log n zawsze, ale potrzebuje 2 tablice,

#include <iostream>
using namespace std;

/// Scalanie
/// scalamy dwie posortowane rosnaco tablice
/// tworzymy 2 liczniki jednaen na arr1 drugi na arr2.
/// przechodizmy po koljenych elementach, porownujemy je i wrzucamy mniejszy do result,
/// dopoki i,j sa mniejsze od odowednich rozmiarow no to wrzuc mniejszy z arr1 i arr2 j do result[k],
/// zwieksz k a takze ilicznik i lub j,

void mergeArr (int arr1[], int n, int arr2[], int m, int result[]) {
    result[n+m];
    int i,j,k;
    i =0; /// licznik dla arr1
    j=0; /// licznik dla arr2
    k=0; /// licznik dla result;

while(i < n && j < m) {
    if (arr1[i] < arr2[j]) {
            result[k]=arr2[i];
            i++;
        }
        else {
            result[k]=arr2[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}


///Sortowanie
/// Sortujemy tablice w przedziale [lef, right]
/// sprawdzamy warunek stopu,
/// wyznaczau miejsce podzialu
/// wywolujemyu rekurencyjnie sortowanie lewej i prawej czesci
/// scalamy lewa i prawa czesc
/// WARUNEK STOPU - kiedy inex lewej jest rowny prawej left = right;

void mergeSort(int tab[], int left, int right){
        if (left >= right) { /// mamy jeden lement lub mniej
            return;
        }
    int middle = (left+right)/2; /// srodek przedzialu
    mergeSort(tab, left, middle);
    mergeSort(tab, middle+1, right);

    int arr1[(middle-left)+1];
        int j=0;
        for (int =left; i<=middle; i++){
            arr1[j]=tab[i];
            j++;
        }
    int arr2[right-middle];
        int j=0;
        for (int=middle+1; i<=right; i++) {
            arr2[j]=tab[i];
            j++;
        }
    int result[(right-left)+1];
    mergeArr(arr1, middle-left+1, arr2, right-middle, result);

    j=0;
    for(int=left; i<= right; i++){
        tab[i] = result[j];
        j++;
    }
}

void printArr(int tab[], int n) {
    for (int i=0; i<n; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
}

void testMerge() {
int arr1[5]={2, 5, 7, 8, 10};
int arr2[5]={1, 3, 4 , 6, 7};
int result[10];

cout << "Tablica1: " << endl;
printArr(arr1, 5);
cout << "Tablica2: " << endl;
printArr(arr2, 5);

mergeArr(arr1, 5, arr2, 5, result);


cout << "Scalona tablica: " << endl;
printArr(result, 10);

}

void testMergeAndSort() {

}

int main() {
    testMerge();
    /// int tab[10] = {5, 2, 4, 4, 9, 1, 1, 12, 3, 2};
    /// int tab[10] = {7, 3, 6, 1, 3, 6, 9, 0, 10, 1}; /// Tablica posortowana


    return 0;
}
