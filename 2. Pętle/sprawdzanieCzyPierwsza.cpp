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
                            cout << "Liczba: " << liczba << " nie jest pierwsza" << endl;
                            return 0;
                        }
                        else {
                            cout << ".";
                            }
                    }
                    cout << "\n Liczba: " << liczba << " jest pierwsza";

                }

    return 0;
}
