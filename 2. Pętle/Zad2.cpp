#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c;
    float delta;
    cin >> a >> b >> c;

    delta = b*b - 4*a*c;

    if(delta<0) {
        cout << "brak rozwi¿añ" << endl;
    }
    if (delta == 0){
        cout << "x= " << -b /(2*a) << "\n";
    }
    if (delta >0) {
        cout << "x1 = " << (-b-sqrt(delta))/(2*a) << "x2 = " << (-b+sqrt(delta))/(2*a);
    }
    return 0;

}

