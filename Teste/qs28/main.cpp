#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n, h;
    cin>>n;
    h = 2*log ((n + sqrt ( n*n +4 ))/2);
    cout<<h;
    return 0;
}
