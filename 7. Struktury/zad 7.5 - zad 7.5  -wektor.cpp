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

int main () {
    wektor v1, v2;

    v1.x=1;
    v1.y=1;
    v1.z=1;

    v2.x=1;
    v2.y=1;
    v2.z=1;

    cout << "D³ugoœæ: " <<dlugosc(v1)<< endl;
    cout << "Suma: " <<suma(v1, v2).x << ", " << suma(v1, v2).y << ", " << suma(v1, v2).z << endl;
    cout << "Iloczyn Skalarny: " << iloczyn_skalarny(v1,v2);

    return 0;
}

