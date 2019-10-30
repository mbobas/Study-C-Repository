#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int podstawa,indexgorny;
    cout << "wprowdz podstawe \n" ;
    cin >> podstawa;
    cout << "wprowadz index gorny \n";
    cin >> indexgorny;

    int wynik=1;
    int r=0;

    for (int i=0; i<=indexgorny; i++)
    {
        if (r==indexgorny) {
            cout << wynik;
        }
        else {
            r=r+1;
            wynik=wynik*podstawa;
            cout << wynik << "\n";
        }
    }


return 0;
}
