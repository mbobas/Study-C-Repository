#include<iostream>
#include<cstdlib>
using namespace std;

void selection_sort(int tab[],int n) //n - ilość elementów do posortowania
{
int mn_index; //zmienna pomocnicza przechowująca indeks komórki
        //z minimalną wartością
  for(int i=0;i<n-1;i++)
  {
  	mn_index = i;
    for(int j=i+1;j<n;j++) //pętla wyszukuje najmniejszy element w podzbiorze nieposortowanym
    if(tab[j]<tab[mn_index])
      mn_index = j;

    //zamiana elementu najmniejszego w podzbiorze z pierwszą pozycją nieposortowaną
	swap(tab[i], tab[mn_index]);
  }
}

int main()
{
	int *tab, n;

	cout<<"Ile liczb chcesz posortować? ";
	cin>>n;

	tab = new int [n];

	for(int i=0;i<n;i++)
		cin>>tab[i]; //wczytanie liczb do posortowania

	selection_sort(tab,n); //sortowanie przez selekcję

	for(int i=0;i<n;i++)
		cout<<tab[i]<<" "; //wypisanie posortowanych elementów

	cout<<endl;
	system("pause");
	return 0;
}
