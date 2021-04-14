#include <iostream>
using namespace std;
int main(){
	double thanos, thor;
	int golpes;
	cin>> thanos;
	cin>> thor;
	golpes = 0;
	while (thanos < thor) {
		thanos = thanos - (0.02 * thanos);
		thor = thor - ( 0.06 * thor);
		golpes++;
	}
    cout<< golpes <<endl;
		
	
	return 0;
}
