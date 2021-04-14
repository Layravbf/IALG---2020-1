#include <iostream>
using namespace std;
int soma(int x, int y) {
	if ((x != 0) and (y != 0)) {
		if (x == 1) {
			return y;
		}else {
			return y + soma(x-1, y);
		}
	}
		else { 
		   return 0;
	   }
   
}
int main() {
	int x, y;
	cin>>x>>y;
	cout<<soma(x,y)<<endl;
}

		
