#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

struct kwadrat {
    int a;
    int b;
    int c;
    int d;
};

int obwod (kwadrat x) {
    int obwod = x.a+x.b+x.c+x.d;
    return obwod;
}

int kopiuj ()

int main() {

    kwadrat x;
    x.a = 4;
    x.b = 2;
    x.c = 4;
    x.d = 2;

    cout << obwod(x) << endl;

return 0;
}


