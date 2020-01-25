#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C)
{
  // przek³ada n kr¹¿ków z A korzystaj¹c z B na C
  if (n > 0)
  {
    hanoi(n-1, A, C, B);
    cout << A << " -> " << C << endl;
    hanoi(n-1, B, A, C);
  }
}

int main(int argc, char *argv[])
{
  hanoi(3, 'A', 'B', 'C');
  return 0;
}
