#include <iostream>
using namespace std;
int main () {
  int qtd1,qtd2,cont=0, i, k;
  cin >> qtd1;
  string igr1[qtd1];
  for (i=0; i<qtd1; i++){
    cin >> igr1[i];
  }
  cin >> qtd2;
  string igr2[qtd2];
  
  for(i=0; i<qtd2; i++){
    cin >> igr2[i];
  }
  for(k=0; k<qtd1; k++){
    for (i=0; i<qtd2; i++) {
	  if (igr1[k] == igr2[i]){
	    igr1[k] = "NADA" ;
	  }
    }
  }
  for (i=0; i<qtd1; i++){
	if(igr1[i] != "NADA"){
	  cout << igr1[i] <<endl;
	}
	if(igr1[i] == "NADA"){
	  cont++;
	}
  }
  
  if(cont==qtd1){
    cout << "NADA" <<endl;
  }
		 
  return 0;
}
					
