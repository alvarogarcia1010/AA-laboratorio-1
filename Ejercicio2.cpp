#include <iostream>

using namespace std;

int potencia(int x, int n)
 {
     if(n == 1)
     {
        return x;
     }
     else
     {
        return x * potencia(x, n-1);
     }
  }

int main()
{
    int x, n;

    cout<<"Ingrese valor de x:\n";
    cin>>x;

    cout<<"Ingrese valor de n:\n";
    cin>>n;

    cout<<"El resultado es:\n";
    cout<<potencia(x,n);

    return 0;
}
