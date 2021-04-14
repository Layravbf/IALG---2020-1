#include <iostream>

using namespace std;

int main()
{
    int hr, mi, hrMin, miT, minSeg;
    cin>>hr;
    cin>>mi;
    hrMin = hr * 60;
    miT = mi + hrMin;
    minSeg = miT * 60;
    cout<<hrMin<<endl;
    cout<<miT<<endl;
    cout<<minSeg;
    return 0;
}
