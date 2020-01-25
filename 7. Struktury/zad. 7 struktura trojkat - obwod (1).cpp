#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

struct trojkat {
    float a;
    float b;
    float c;

};

float obwod(trojkat x){
    float obwod = x.a+x.b+x.c;
    return obwod;                //
}

int main () {

    //mozemy tworzyc zmienne typu trojkat
    trojkat x;
    x.a=6;
    x.b=3.5;
    x.c=3;

    cout << obwod(x)<< endl;

    return 0;
}

