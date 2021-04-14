#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int vel,numB;
    cin>>vel;
    numB = (vel % 50 / vel % 50) + vel / 50;
    cout<<numB;
    return 0;
}
