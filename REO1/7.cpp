#include <iostream>
using namespace std;
int main () {
	int num, x, y;
	char c = '@', h = '#';
	cin>>num;
	x=1;
	while(x<=num){
		y = 0;
		if(x != 0)
		cout<<endl;
		while(y < x){
			if(y%2!=0){
			cout<<h;
			}if(y%2==0){
			cout<<c;
		}
		y++;
	}
	x++;
}
	return 0;
}
		
