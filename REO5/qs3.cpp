#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char x[100], y[100];
	cin.getline(x,100);
	cin.getline(y,100);
	char *z;
	int tam;
	tam = strlen(x)+strlen(y)+1;
	z = (char *)malloc(tam *sizeof(char));
	memcpy(z,x,strlen(x));
	z[strlen(x)] = ' ';
	memcpy(&z[strlen(x)+1],y,strlen(y));
	
	cout<<z;
	free(z);
	
	
	return 0;
}

	
