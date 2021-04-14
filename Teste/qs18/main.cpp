#include <iostream>

using namespace std;

int main()
{
    int vEntregue, total, troco, n20,n10,n5,n2,n1;
    cin>>vEntregue;
    cin>>total;
    troco = vEntregue - total;
    n20 = troco / 20;
    n10 = (troco % 20) / 10;
    n5 = (troco % 10) / 5;
    n2 = (troco % 5) / 2;
    n1 = troco - (n20.20 + n10.10 + n5.5 + n2.2);
    cout<<n20<<endl;
    cout<<n10<<endl;
    cout<<n5<<endl;
    cout<<n2<<endl;
    cout<<n1;

    return 0;
}
