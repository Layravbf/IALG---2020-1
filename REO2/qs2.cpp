#include <iostream>
using namespace std;
int main() {
  int k, novoValor, p, i;
  int vInicial[10], vFinal[10];
	
  for(i=0; i<10; i++){
    vInicial[i] = 0;
  }
  
  cin >> k;
	
  for(i=0; i<k; i++){
    cin >> vInicial[i];
  }
 
  cin >> novoValor >> p;
	
  for(i=0; i<10; i++){
    vFinal[i] = vInicial[i];
  }
	
  vInicial[p] = novoValor;
	
  for(i=p+1; i<10; i++){
    vInicial[i] = vFinal[i-1];
  }
  for(i=0; i<10; i++) {
    cout<<vInicial[i]<<endl;
  }
	
  return 0;
}
