#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float altCenti, altMetros, valorM;
    int numDegraus;
    cin>> altCenti;
    cin>> altMetros;
    valorM = altCenti / 100;
    numDegraus = ceil (altMetros / valorM);
    std::cout<<std::setprecision(10)<<endl;
    cout<<numDegraus;
    return 0;
}
