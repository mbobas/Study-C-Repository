#include <iostream>
using namespace std;
int main() {
  int granica, start=1, dzielnik;
  cout<<"granica: ";
  cin>>granica;
  while(start<=granica) {
      cout << "while" << "start: " << start <<" granica: " << granica << endl;
    for(dzielnik=2; dzielnik<=start; dzielnik++) {
        cout << "for" << "dzielnik: " << dzielnik <<" start: " << start << endl;
      if(start%dzielnik==0) {
          cout << "start%dzielnik= " << start%dzielnik << endl;
          cout << "if" << "start: " << start <<" dzielnik: " << dzielnik << endl;
        if (start==dzielnik) cout<< "Pierwsza" << start<<endl;
        else break;
      }
    }
    start++;
  }
  return 0;
}
