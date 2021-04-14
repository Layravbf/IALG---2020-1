#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float produto, estado, pesoTon, pesoKg, semImposto, imposto, Total;
    cin>>produto>>estado>>pesoTon;
    cout<<fixed;
    cout<<setprecision(2);
    pesoKg = pesoTon * 1000;
    if ((produto >= 10) and (produto <= 20)) {
	    semImposto = pesoKg * 100;
	} else if ((produto >= 21) and (produto <= 30)) {
		semImposto = pesoKg * 250;
	} else if ((produto >= 31) and (produto <= 40)) {
		semImposto = pesoKg * 340;
	}
	if (estado == 1) {
		imposto = semImposto * 0.35;
	} else if (estado == 2) {
		imposto = semImposto * 0.25;
	} else if (estado == 3) {
		imposto = semImposto * 0.15;
	} else if (estado == 4) {
		imposto = semImposto * 0.05;
	} else if (estado == 5) {
		imposto = 0;
	}
		
	Total = semImposto + imposto;
	cout<<pesoKg<<endl<<semImposto<<endl<<imposto<<endl<<Total<<endl;
 
 return 0;
}
