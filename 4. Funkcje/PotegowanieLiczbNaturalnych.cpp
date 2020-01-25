#include <iostream>
#include <cmath>
using namespace std;

float potega (float m, int n) {
    float p=1;

    if (n>0) {
    for (int i=0; i<=n; i++){
            p=p*m;
        }
    }else
    for (int i=1; i<= -n; i++){      // petla dla ujemnych !!!
            p=p/m;                  // podnosze do potegi ujemnej ale mozna te zrobic 1(p*m)
        }

    return p;
}

int main () {

    float m;
    int n;
    cout << "wprowdz podstawe m \n" ;
    cin >> m;
    cout << "wprowadz index gorny n \n";
    cin >> n;



    cout << "Wynik: " << potega(m,n);


return 0;
}
