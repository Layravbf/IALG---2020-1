#include <iostream>
using namespace std;
void inverso (int total){
	int sequencia;
	cin>>sequencia;
	if(total ==1){
	    cout<<sequencia<<" ";
	}else{
		inverso(total-1);
		cout<<sequencia<<" ";
	}
}
int main() {
	int total;
	cin>>total;
	inverso(total);
	
	return 0;
}
	 
