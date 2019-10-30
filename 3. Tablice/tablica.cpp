#include <iostream>
#include <cmath>
using namespace std;

int main() {

int tab[5];

    cout << "Podaj 5 liczb \n";

    for(int i=0; i<5; i++){
        cin >> tab[i];
    }
    cout << "\n";

    for (int i=4; i>=0; i--){
        cout << tab[i];
    }
}
