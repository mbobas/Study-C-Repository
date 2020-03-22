#include <iostream>
using namespace std;
#define SIZE 100
int A[SIZE];
int top = -1;

bool isempty()
{
    if (top <=-1)
        return true;
    else
        return false;
}

void push (int value) ///dodanie elementu na stos
{
    if (top == SIZE-1)
    {
        cout << "NIE MOGE DODAC - STOS jest pelny" << endl;
    }
    else {
        top++;
        A[top]=value;
        cout << "Dodalem do STOSU [" <<top<<"] = " << value << endl;
    }
}

void display() {
    int i=top;
    if (top >=0) {
    cout << "\nAktualny stan STOSU" << endl << "[TOP]" << endl;
    for (i; i>=0; i--){
        cout << A[i] << " " <<endl;
    }
    cout << "[BOTTOM]" << endl << endl;
    }
    else
        cout << "STOS pusty - nie moge go wyswietlic";
}


void pop_stock() ///usunięcie elementu ze stosu,
{
    if (isempty()){
        cout << "STOS jest pusty, nie moge usunac" << endl;
    }
    else
        cout << "Usuwam [" << top << "] = " << A[top] << endl;
        top--;
}

void check_top()
{
    if (isempty())
        cout << "STOS jest pusty, nie moge pobrac TOP"<< endl;
    else
        cout << endl << "Wierzcholek - TOP [" <<top<<"] = " << A[top] << endl;
}

int getElemet(int value)  /// pobranie elementu ze stosu,
{
        if (isempty())
        cout << "STOS jest pusty, nie moge pobrac wartosci elementu: [" << value << "]"<< endl;
        else if (value > top)
            cout << "Element nr ["<<value<<"] w stosie nie istnieje" << endl;
        else
        cout << "Element [" <<value<<"] = " << A[value] << endl;
}

int main () {
    cout << "\nSTOS/STACK/LIFO\nSTOS ma maksymalna dlugosc: " << SIZE << endl;

    for (int i=0; i<105; i++){
        push(i*2);
    }
    check_top();
    getElemet(0);
    getElemet(10);
    getElemet(100);
    display();

    cout << endl << "*************" << endl;

    for (int i=0; i<80; i++){
        pop_stock();
    }
    check_top();
    getElemet(0);
    getElemet(10);
    getElemet(100);
    display();


    cout << endl << "*************" << endl;

    for (int i=0; i<30; i++){
        pop_stock();
    }

    check_top();
    getElemet(0);
    getElemet(10);
    getElemet(100);
    display();

    cout << endl << "*************" << endl;

    return 0;
}
