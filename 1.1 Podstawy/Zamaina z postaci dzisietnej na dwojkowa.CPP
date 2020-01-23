#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    string s;

    cout << " Wprowadz liczbe n: \n";
    cin >> n;

    int i=0;

    int mnoznik = 1;
    int bin = 0;

    while (n>0){
        // xyz=z+y10+x100
        bin = bin + (n%2)*mnoznik;
        n = n/2;
        mnoznik=mnoznik*10;
    }

    cout << bin;

    return 0;

}
