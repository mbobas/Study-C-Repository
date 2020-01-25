#include <cstdlib>
#include <iostream>

using namespace std;

double sortownie(double tablica[], int n) {
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            if (tablica[j] > tablica[j+1]){
                double mniejszatablica = tablica[j];
                tablica[j] = tablica[j+1];
                tablica[j+1] = mniejszatablica;
}
}

int main(){

    double tablica[10] = {9.99, 9.8, 8.8, 7.7, 6.7, 5.2, 4.20, 3.3, 2.1, 1.9};


        // swap(tablica[j], tablica[j+1]);  // zamienic swap na kod ze zmienna tymczasowa


    for (int i = 0; i<10; i++)
        cout << i << ") "<< tablica[i] << endl;

        sortownie(tablica, 10);

     for (int i = 0; i<10; i++)
        cout << i << ") "<< tablica[i] << endl;

    system("PAUSE > nul");
    return 0;
}

