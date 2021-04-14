#include <iostream>
using namespace std;
int main() {
	int quartos, netos=1;
	cin>>quartos;
	while((quartos > 0) and (netos*netos <= quartos)) {
		cout<<netos*netos<<endl;
		netos++;
	}
	return 0;
}
	
