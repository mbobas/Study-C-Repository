#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    int s = 0;

    cout << " Wprowadz liczbe n: \n";
    cin >> n;

    int i=0;
    int d=0;

    while (n>=1){
        d++;
        s=s+n%10;
        cout n%10;
        n=n/10;
    }

    cout << "suma: " << s;

    return 0;

}
