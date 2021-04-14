#include <iostream>

using namespace std;

int main()
{
    int numero,centena,dezena,unidade,resultado;
    cin>>numero;
    centena = numero/100;
    dezena = (numero % 100) / 10;
    unidade = (numero % 10) / 1;
    resultado = centena * dezena * unidade;
    cout<<resultado;
    return 0;
}
