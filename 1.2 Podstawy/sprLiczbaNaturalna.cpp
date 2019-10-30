#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int liczba;
    cout << "Wczytaj zmienna \n";
    cin >> liczba;

    if (liczba==1) {
        cout << "To nie jest liczba pierwsza - *1";
    } else if  (liczba==2) {
        cout << "2 - To jest liczba pierwsza *1";
    }else {
        int d=2;
        cout << "licze.";
                   for (d; d<liczba; d++){

                        if (liczba%d==0){
                            cout << "to nie jest liczba pierwsza *3";
                            return 0;
                        }
                        else {
                            cout << ".";
                            }
                    }
                    cout << "\n \n Obliczylem...To jest liczba pierwsza .. \n";

                }

    return 0;
}
