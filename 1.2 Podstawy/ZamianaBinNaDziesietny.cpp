#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cout << " Wprowadz liczbe binarna n: \n";     //1010
    cin >> n;

    int s=0;  // suma
    int i=0;  //iteracja
    int d=0;  //

    if (n == 0) {
            cout << " Liczba w sys 10-tnym to: " << s;
    }
    else{

        s=s+((n%10)*1);  //0=0+(0*1)=0
        n=n/10;         //101

            while (n>=1) {
            d++;                   //0+1=2
            s=s+((n%10)*pow(2,d));   //s=2+1*(2^2)
            n=n/10;                //10/10=1

        }

        cout << " Liczba w sys 10-tnym to: " << s;
    }



    return 0;
}
