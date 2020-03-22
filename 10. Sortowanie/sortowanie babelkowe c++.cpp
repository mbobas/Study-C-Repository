#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int tablica[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    for (int i=0; i<9; i++)
        for (int j=0; j<9; j++)
            if (tablica[j] > tablica[j+1]){
                int mniejszatablica = tablica[j];
                tablica[j] = tablica[j+1];
                tablica[j+1] = mniejszatablica;
            }
        // swap(tablica[j], tablica[j+1]);  // zamienic swap na kod ze zmienna tymczasowa


    for (int i = 0; i<10; i++)
        cout << tablica[i] << " ";

    system("PAUSE > nul");
    return 0;
}

