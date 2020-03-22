/// KOLEJKA FIFO - First In First Out
#include <iostream>
using namespace std;
#define SIZE 100
int A[SIZE];
int front = -1;
int rear = -1;

bool isempty()
{
    if(front==-1&&rear==-1){
        return true;
    }
        else {
            return false;
        }
}

void enqueue(int value)  /// dodanie elementu do kolejki
{
    if (rear == SIZE-1)
    {
        cout<<"Kolejka jest pelna - nie moge dodac elementu\n";
    }
    else if(front==-1)
    {
        front=0;
    }
    else if(rear<SIZE-1){
        rear++;
        A[rear]=value;
        cout<<"Dodaje do kolejki: " << "[" << rear <<"] = " << A[rear] << endl;
    }
}


void dequeue() /// usuniecie elementu z kolejki.
{
    if (isempty()){
        cout<<"Kolejka jest pusta - nie moge usunac\n";
    }else if( front == rear ) {
        front = rear = -1;
    }else {
        cout<<"Usuniecie lelementu z kolejki: " << "[" << front <<"] = " << A[front] << endl;
        front++;
    }
}

void getElement (int value) /// pobranie elementu z kolejki,
{
    if (isempty()) {
        cout << "Kolejka jest pusta - nie moge wysweitlic elementu" << endl;
    }
    else if (value >= front &&  value <= rear){

        cout << "Element nr ["<<value<<"] = " << A[value] << endl;
    }
    else {
        cout << "Element nr ["<<value<<"] - nie istnieje" << endl;
    }

}

void showfront()
{
    if (isempty())
    {
        cout<<"Kolejka jest pusta - nie moge wysweitlic FRONT\n";
    }
    else
    {
        cout <<"Wartosc front = " << "[" << front << "] = " << A[front] << endl;
    }
}

void displayQueue()
{
    if(isempty())
    {
        cout<<"Kolejka jest pusta nie moge jej wysweitlic\n";
    }
    else
    {
        cout << "Aktualny stan kolejki [FRONT] - ";
        for( int i=front; i<=rear; i++)
        {
            cout << A[i]<<" ";
        }
        cout << " - [REAR]"<< endl;
    }
}

void whereIsFronRear()
{
    if (front>=0)
    cout << "Poczatek kolejki na pozycji: " << front << " wartosc: " << A[front] << endl;
    if (rear>=0)
    cout << "Koniec kolejki na pozycji: " << rear << " wartosc: " << A[rear] << endl;
}

int main(){
    cout << "\nKolejka - FIFO \nKolejak ma dlugosc maksymalna: " << SIZE << endl;

    for (int i=0; i<105; i++){
        enqueue(i+1*2);
    }
    showfront();
    getElement(0);
    getElement(20);
    getElement(100);
    displayQueue();
    whereIsFronRear();
    cout << endl << "*************************" << endl;

    for (int i=0; i<95; i++){
    dequeue();
    }
    showfront();
    getElement(0);
    getElement(20);
    getElement(100);
    displayQueue();
    whereIsFronRear();
    cout << endl << "**************************" << endl;


    for (int i=0; i<10; i++){
    dequeue();
    }
    showfront();
    getElement(0);
    getElement(20);
    getElement(100);
    displayQueue();
    whereIsFronRear();
    cout << endl << "**************************" << endl;

    return 0;
}
