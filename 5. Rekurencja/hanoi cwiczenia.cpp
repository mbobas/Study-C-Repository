#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C)
{
  // przek³ada n kr¹¿ków z A korzystaj¹c z B na C
  //n - ilosc krazkow
  //a,b,c - spzilki
  // a jest wejsciowy, B pomocnczy i C koncowy

  if (n == 1)
        cout << "Przeloz z " << A << " na " << C << endl;
  else {
    hanoi(n-1, A, C, B);
    cout << "Przeloz z " << A << " na " << C << endl;
    hanoi(n-1,B, A, C);

  }
}

int main(int argc, char *argv[])
{
  hanoi(4, 'A', 'B', 'C');
  return 0;
}
