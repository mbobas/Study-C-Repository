#include <iostream>
#include <cmath>
using namespace std;

int main() {

const int nmax=10;
int tab[nmax];
int n;
int s=0;

    cout << "Podaj liczbê od 1-10 \n";
    cin >> n;   //5
    cout << "Podaj " << n << " liczb \n";
            //0  i=4   i++
    for(int i=0; i<n; i++){
        cin >> tab[i];   // cin 1,1,1,1,1
    }
    cout << "\n";

    for (int i=n-1; i>=0; i--){
        s=s+tab[i];
    }
    cout << "suma liczb: " << s;
}
