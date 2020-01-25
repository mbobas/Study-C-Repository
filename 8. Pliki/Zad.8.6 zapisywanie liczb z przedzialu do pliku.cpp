#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;


//wczytywanie wyrazu lub znaku
int main () {
    fstream plik;
    string linia;
    char c;
    int i=0;
    srand(time(NULL));
    int x=(rand()%10000+1);

    plik.open("zad8.7.txt", ios::out);

    if (!plik.good()) {
        cout << "Blad otwierania";
    }else {
        while(i<1000000){
        int x=(rand()%10000+1);
        plik << x << endl;
        i++;
    }
     plik.close();
    return 0;
}
}


