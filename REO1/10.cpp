#include <iostream>
using namespace std;
double soma(int N){
     float s, i;
     i=1;
     while (i<=N) {
		 s=s+(i*(i+1))/(i+3);
		 i++;
		 
	 }
	 return s;
 }


int main () {
	int N;
	float s;
	cin >> N;
	s = soma(N);
	cout<<s<<endl;
	
	
	
	return 0;
}
