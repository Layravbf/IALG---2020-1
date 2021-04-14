#include <iostream>
using namespace std;
int main () {
	int dia1,mes1,ano1,dia2,mes2,ano2;
	cin>>dia1;
	cin>>mes1;
	cin>>ano1;
	cin>>dia2;
	cin>>mes2;
	cin>>ano2;

	if (ano1>ano2 or (ano1==ano2 and mes1>mes2) or (ano1==ano2 and mes1==mes2 and dia1>dia2)){
		cout<<dia1<<endl;
		cout<<mes1<<endl;
		cout<<ano1<<endl;
	}else {
		cout<<dia2<<endl;
		cout<<mes2<<endl;
		cout<<ano2<<endl;
	}
	return 0;
}
