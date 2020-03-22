// Example program
#include <iostream>
#include <string>
using namespace std;

int ile;

int main()
{
  cout << "Ile? Liczba w tablicy?";
  cin >> ile;
  
  int *tablica;
  tablica = new int [ile];
  
  for (int i=0; i<ile; i++)
  {
    cout << (long int)tablica<< endl;
    tablica++;
  }
  delete [] tablica;
return 0;  
}