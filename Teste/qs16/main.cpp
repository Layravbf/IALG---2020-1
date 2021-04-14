#include <iostream>

using namespace std;

int main()
{
    int produzidos,comuns,luxo;
    cin>>produzidos;
    comuns = produzidos - (produzidos / 3);
    luxo = produzidos / 3;
    cout<<comuns<<endl;
    cout<<luxo;
    return 0;
}
