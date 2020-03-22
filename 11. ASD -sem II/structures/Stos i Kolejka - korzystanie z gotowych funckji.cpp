#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    cout << "STOS" << endl;
    stack<int> stos;

    ///Dodanie
    stos.push(1);
    cout << "wartosc: " <<stos.top() << endl;
    stos.push(2);
    cout << "wartosc: " <<stos.top() << endl;
    stos.push(3);
    cout << "wartosc: " <<stos.top() << endl;
    cout << endl;
    ///Pobranie
    stos.pop();
    cout << "wartosc: " <<stos.top() << endl;
    stos.pop();
    cout << "wartosc: " <<stos.top() << endl;
    stos.pop();
    cout << "wartosc: " <<stos.top() << endl;
    cout << endl;

    cout << "kolejka";

    queue<int> kolejka;
    ///Dodanie elementu
    kolejka.push(1);
    kolejka.push(2);
    kolejka.push(3);
    cout << "wartosc: " << kolejka.front() << endl;
    kolejka.pop();
    cout << "wartosc: " << kolejka.front() << endl;
    kolejka.pop();
    cout << "wartosc: " << kolejka.front() << endl;



    return 0;
}

