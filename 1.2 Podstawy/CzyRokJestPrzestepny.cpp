#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int rok;

    cout << "Wprowad� rok: ";
    cin >> rok;

    if (rok%4==0){
        cout << "Rok jest przestepny";
    }
    else {
        cout << "rok nie jest przest�pny";
    }

    return 0;

}
