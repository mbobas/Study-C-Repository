#include <iostream>

using namespace std;

///Struktura reprezentujaca element stosu
///Wartosc elementu i wskaznik na poprzedni

struct stackEl {
    int value;
    stackEl *prev;
};

///nasz stos
///zainicjalizowanie nowego elementu wpamieci - struktury staEl
stackEl *first = new stackEl;


///Metody push() - dodanie leementu na stos
///void push(*first, int value)
///
/// 1. Tworzymy nowy element stosu
/// 2. Przypisujemy mu zadana wartosc przekazana do funkcji
/// 3. Przypisujemy do nowego elementu wskaznik na first jako wartosc prev.
/// 4. ustawiamy nowy element jako nowy first

void push(int value){
    stackEl *newEl = new stackEl;
    newEl->value = value;
    newEl->prev = first;
    first = newEl;
};
///Pobranie wartosci ze stosu
///int top(*first)
int top() {
    return first->value;
}

///Usunieci elementu ze stosu
///void pop(*first)
/// 1. Zapamietujemy first nowej zmiennej oldFirst;
/// 2. Zmieniamy first na poprzedni od first - first.prev
/// 3. Usuwamy (delete) oldFirst - trzeba zrobic kopie,przepisanie, usuniecie. ;

void pop() {
    stackEl *oldFirst = first;
    first = oldFirst->prev;
    delete oldFirst;
}

///Dodatkowo
///int size (*first)
///ITERACAJ I SPRAWDZENIE ILOSCI ELEMENTOW......

///bool is Empty(*first)
///CZY FIRST JEST = NULL?

///Dodatkowo
/// Zabezpieczenia - np. pop(0 na pustym stosie - unikac



int main(){
    ///inicjalizacja
    first->value = 0;
    first->prev = NULL;

    push(8);
    cout << "Wartosc: " << top() << endl;

    push(9);
    cout << "Wartosc: " << top() << endl;

    push(10);
    cout << "Wartosc: " << top() << endl;


    cout << endl;
    pop();
    cout << "Wartosc: " << top() << endl;
    pop();
    cout << "Wartosc: " << top() << endl;



    return 0;
}
