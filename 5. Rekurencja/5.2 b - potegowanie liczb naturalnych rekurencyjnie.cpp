#include<iostream>
#include<cstdlib>
using namespace std;

int pot(int a, int b){              // a=2, b=3
int wynik;
    for (int i=0; i<=b; i++) {       // i=3 zmierza do 0, 3,2,1,0
        wynik=a*a;
        cout << "wynik "  << "nr: " << i << " = " << wynik;                     // c=1*2=2, c=2*2=4, c=4*2=8
    }
return wynik;
}

int main()
{
    int a, b;

    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;

    cout << "liczba: " << a << "Wykladnik: " << b << ") = " << pot(a,b) << endl;

    system("pause");
    return 0;
}
