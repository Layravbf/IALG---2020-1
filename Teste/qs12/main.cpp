#include <iostream>

using namespace std;

int main()
{
   int lados, nDiagonais;
   cin>>lados;
   nDiagonais = (lados * (lados - 3)) / 2;
   cout<<nDiagonais;
    return 0;
}
