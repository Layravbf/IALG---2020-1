#include <iostream>

using namespace std;

int main()
{
    float valor,vista,semJuros,comJuros;
    cin>>valor;
    vista = valor * 0.9;
    semJuros = valor / 5;
    comJuros = valor / 10 * 1.2;
    cout<<vista<<endl;
    cout<<semJuros<<endl;
    cout<<comJuros;
    return 0;
}
