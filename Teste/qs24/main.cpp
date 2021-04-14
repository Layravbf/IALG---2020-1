#include <iostream>

using namespace std;

int main()
{
    int numero, n100, n50, n20, n10, n5, n2, n1;
    cin>> numero;
    n100 = numero / 100;
    numero = numero - (n100*100);
    n50 = numero / 50;
    numero = numero - (n50*50);
    n20 = numero / 20;
    numero = numero - (n20*20);
    n10 = numero / 10;
    numero = numero - (n10*10);
    n5 = numero / 5;
    numero = numero - (n5*5);
    n2 = numero / 2;
    numero = numero - (n2*2);
    n1 = numero;
    cout<<n100<<endl;
    cout<<n50<<endl;
    cout<<n20<<endl;
    cout<<n10<<endl;
    cout<<n5<<endl;
    cout<<n2<<endl;
    cout<<n1<<endl;
    return 0;
}
