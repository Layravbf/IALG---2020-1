#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float raio,diametro,area,volume,pi = 3.14,x=2,y=3;
    cin>>raio;
    diametro = 2*raio;
    area = 4*pi*pow(raio,x);
    volume = 4*pi*pow(raio,y) / 3;
    cout<<diametro<<endl;
    cout<<area<<endl;
    cout<<volume;
    return 0;
}
