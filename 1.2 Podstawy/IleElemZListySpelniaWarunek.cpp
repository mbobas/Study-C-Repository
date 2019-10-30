#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int i=0;
    int n;
            cout << "Wprowadz ilosc elementow tablicy: \n";
            cin >> n;
            int tab[ n ];

            cout << "\n WprowadŸ kolejno Liczby, zatwierdzajac enterem" << "\n ---------- \n";

            //wczytywanie tablicy
            for (i==0; i<n; i++){
                cin >> tab[i];
            }
            cout << "\n ---------- \n";

            int ile=0;
            int j=0;

                for (j; j<n; j++)
                {
                    if (tab[j]%3==0){
                    ile=ile+1;
                    }
                     ;
                }
                cout << "\n Iloœæ liczb podzielnych przez 3 w tablicy to: " << ile;

            return 0;
}
