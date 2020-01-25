#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cmath>

using namespace std;

struct wektor {
    float x;
    float y;
    float z;

};

float dlugosc(wektor v){
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);             //
}

wektor suma(wektor v1, wektor v2){   // tworzymy wktor pomocniczy
    wektor v;
    v.x = v1.x+v2.x;
    v.y = v1.y+v2.y;
    v.z = v1.z+v2.z;

    return v;            //
}

float iloczyn_skalarny(wektor v1, wektor v2){   // tworzymy wktor pomocniczy
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;            //
}
void interfejs() {

    cout << "Wybierz numer zadania" << endl;
    cout << "1. Dlugosc" << endl;
    cout << "2. Suma" << endl;
    cout << "3. Iloczyn" << endl;
    cout << "0. Wyjscie" << endl;


}

int main () {
    int w;
    interfejs();
    cin >> w;
    while (w != 0 ){
        switch(w) {
        case 1:
            wektor v;
            cout << " wprowadz wektor v: ";
            cin >> v.x >> v.y >> v.z;

            cout << "Dlugosc: " << dlugosc(v)<< endl;
        break;

        case 2:
            wektor v1, v2;
            cout << " wprowadz wektor v1: ";
            cin >> v1.x >> v1.y >> v1.z;
            cout << " wprowadz wektor v2: ";
            cin >> v2.x >> v2.y >> v2.z;

            v=suma(v1,v2);
            cout << "Suma v1 + v2 = ( " << v.x << ", " << v.y << ", " << v.z << ")" << endl;


        break;

        case 3:
            //wektor v1, v2;
            cout << " wprowadz wektor v1: ";
            cin >> v1.x >> v1.y >> v1.z;
            cout << " wprowadz wektor v2: ";
            cin >> v2.x >> v2.y >> v2.z;

            cout << "Iloczyn Skalarny: " << iloczyn_skalarny(v1,v2);


        break;
        }

        cout << "Wybierz opcje ponownie > " << endl;
        interfejs();
        cin >> w;


    }

    return 0;
}

