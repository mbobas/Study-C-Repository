#include <iostream>
using namespace std;

struct ListEl{
    int value;
    ListEl *next;
    ListEl *prev;
};
ListEl *first = new ListEl;

void addFront (int value) {
    ListEl *element = new ListEl;
    element->value = value;
    element->next = first;
    element->prev = NULL;

    first->prev = element;
    first = element;
}
void add(int value){
    ListEl *current = first;
    while(current != NULL && current->next != NULL){
        current = current->next;
    }
    ListEl* element = new ListEl;
    element->value = value;
    element->next = NULL;

    element->prev = current;
    current->next = element;

}
int get(int index){
    ListEl *current = first;
   for (int i=0; i<index; i++){
        current = current->next;
   }
   return current->value;
}
void set(int index, int value){
    ListEl *current = first;
   for (int i=0; i<index; i++){
        current = current->next;
   }
   current->value = value;
}
void deleteEl(int index){
    ListEl *current = first;
   for (int i=0; i<index-1; i++){
        current = current->next;
   }
   ListEl *oldElement = current->next;
   current->next = current->next->next; // curent->next->next == oldElement->next
   current->next->prev = current;

   delete oldElement;
}

int main(){
    first->value=0;
    first->next = NULL;
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    cout << get(3) << endl << get(4) << endl;
    set(3, 100);
    cout << get(3) << endl;
    deleteEl(3);
    cout << get(3) << endl;

    addFront(5);
    cout << get(0) << endl;

    return 0;
}
