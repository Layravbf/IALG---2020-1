#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	float valor, novoValor;
	cin>> valor;
	cout<< fixed;
	cout<< setprecision(2);
	if (valor < 50){
		novoValor = valor * 1.05;
	} else if ((valor >= 50) and ( valor <= 100)){
	    novoValor = valor * 1.1;
	} else {
	    novoValor = valor * 1.15;
	} 
	if (novoValor <= 80) {
		cout<<novoValor<<endl<<"Barato"<<endl;
	} else if ((novoValor > 80) and ( novoValor <= 120)) {
		cout<<novoValor<<endl<<"Normal"<<endl;
	} else if (( novoValor > 120) and ( novoValor <= 200)) {
		cout<<novoValor<<endl<<"Caro"<<endl;
	} else {
		cout<<novoValor<<endl<<"Muito caro"<<endl;
	}
	    
	return 0;
}
