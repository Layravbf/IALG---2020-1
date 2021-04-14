#include <iostream>
#include <cmath>
using namespace std;
int mmc(int a, int b);
int main () {
	int a, b;
	cin>>a>>b;
	int x = mmc(a,b);
	cout<<x<<endl;
}	
int mmc(int a, int b){
	int i=1;
	while ( i<=(a*b) ) {
		if( i%a==0 and i%b==0){
		return i;
	}
	i++;
	} 
	return 0;
 }
 

	


   

	
	    
  
