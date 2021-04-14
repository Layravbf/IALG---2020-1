#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
float juros(int t, float C, float i) {
	float y, x, M;
	i = i/100;
	y = (1+i);
	x = pow (y,t);
	M = C*x;

	return M;
}


int main () {
	int t;
	float C, i;
	cin>>C;
	cin>>i;
	cin>>t;
	cout<<fixed;
	cout<<setprecision(2);
	cout<<juros(t,C,i)<<endl;
	
	return 0;
}
