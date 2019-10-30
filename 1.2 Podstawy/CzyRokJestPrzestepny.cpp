#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int rok;

    cout << "WprowadŸ rok: ";
    cin >> rok;

    if (rok%4==0){
        cout << "Rok jest przestepny";
    }
    else {
        cout << "rok nie jest przestêpny";
    }

    return 0;

}
