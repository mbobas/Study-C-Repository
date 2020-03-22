#include <iostream>

using namespace std;

/// struktura kolejki
struct QueueEl {
    int value;
    QueueEl *next;
};


///*head
QueueEl *head = new QueueEl;

///int front()
int front () {
    return head->value;
};
///void pop()
///Towrzymy kopie head
///przenosimy head na natepny
///usuwame oldhead.

void pop() {
    QueueEl *oldhead = head;
    head = head->next;
    delete oldhead;
};

/// void push(int value)
    /// 1. Przechodzimy do ostatniego elementu kolejki
    /// 2. Tworzymy nowy element i przepisujemy mu warotsc
    /// 3. Dodajemy nowy element na koniec kolejki jako next ostatniego

    ///Utwórz current i przypisz do neigo g³owe kolejki i dopoki nastepny od current
    ///istnieje  - wykonuj - Przypisz do cuerrent nastepny od current - przesun current na kolejny element;

void push(int value) {
    QueueEl *current = head;
    while(current != NULL && current->next != NULL){
        current = current->next;
    }
    QueueEl *el = new QueueEl;
    el->value = value;
    el->next = NULL;

    current->next = el; ///dodajemy now yelement do kolejki;

};

int main(){
    head->value = 10;
    head->next = NULL;

    cout << "wartosc: " << front() << endl;
    push(20);
    cout << "wartosc: " << front() << endl;
    push(30);
    cout << "wartosc: " << front() << endl;
    push(40);
    cout << "wartosc: " << front() << endl;
    cout << endl;
    pop();
    cout << "wartosc: " << front() << endl;
    pop();
    cout << "wartosc: " << front() << endl;
    pop();
    cout << "wartosc: " << front() << endl;


    return 0;
}
