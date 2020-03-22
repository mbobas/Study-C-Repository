// Example program
#include <iostream>
#include <string>
using namespace std;

int ile;

int main()
{
  
  int a = 20;
  cout << "Wskaźniki" << endl << "--------" << endl;
  
  int *wskaznik;
  wskaznik = &a;
  
  cout << "Adres wskaźnika w pamieci RAM: " << (int long)wskaznik << endl;
  cout << "Wartosc zmiennej na ktora wskazuje wskaznik: " << *wskaznik; 
  
  
return 0;  
}
