#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int i=0;
    int n;
    cout << "wprowadz ilosc elementow tablicy: \n";
    cin >> n;
    int tab[ n ];

    //tworznie tablicy
    for (i==0; i<n; i++){
        cin >> tab[i];
    }
    cout << "\n ---------- \n";

    int j=0;
    int x=tab[0];
        for (j; j<n; j++)
        {
            if (x<=tab[j])
             x=tab[j];
        }
        cout << "\n Najwiekszy element " << x;

    return 0;
}
