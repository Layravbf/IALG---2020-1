#include <iostream>
using namespace std;
int ricci(int n1, int n2, int n) {
	if (n==0){
	    return n1;
	}else if(n==1){
	    return n2;
	}else {
		return ricci(n1, n2, n-1)+ricci(n1, n2, n-2);
	}
}		

int main() {
	int n1, n2, n, i=0;
	cin>>n1>>n2;
	cin>>n;
	while(i<n){
	cout<<ricci(n1, n2, i)<<" "<<endl;
	i++;
}
	
	return 0;
}
