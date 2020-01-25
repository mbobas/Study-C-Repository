#include <iostream>
#include <string>

using namespace std;

void podziel_napis(string napis) {
    int n = napis.length();

    for (int i=0; i<n; i++){
        cout << "[" << napis[i] << "]";
}
}

int main () {
    string napis;
    getline(cin,napis);
    podziel_napis(napis);

    return 0;
}
