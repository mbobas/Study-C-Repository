#include<iostream>
#include<cstdlib>
using namespace std;

int NWD(int a, int b)
{
    int pom;

	while(b!=0)
    {
		return NWD(b, a%b);

	}

    return a;
}

int main()
{
    int a, b;

    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;

    cout<<"NWD("<<a<<","<<b<<") = "<<NWD(a,b)<<endl;

    system("pause");
    return 0;
}
