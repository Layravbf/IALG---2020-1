#include <iostream>

using namespace std;

int main()
{
    int mili, minutos, horas ;
    float segundos;
    cin>>mili;
    horas = mili / 3600000;
    minutos = (mili % 3600000) / 60000;
    segundos = (mili % 60000) / 1000.0;
    cout<<horas<<" : "<<minutos<<" : "<<segundos<<endl;

    return 0;
}
