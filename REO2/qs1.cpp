#include <iostream>
using namespace std;
int main() {
  int km, i, k;
  string nome1,nome2,lider,melhorTempo;
  cin >> km;
  float tempo1[km],tempo2[km];
  cin >> nome1;
  
  for (i=0;  i < km; i++){
    cin >> tempo1[i];
  }
    
  cin >> nome2;
    
  for (k=0;  k < km; k++){
    cin >> tempo2[k];
  }
    
  for (i=0; i < km; i++){   
    for (k=0; k < km; k++){
	  if ( i == k) {
		if(tempo1[i] < tempo2[k]){
		  lider = nome1;
		}else {
		  lider = nome2;
		}
	  }  
    }
  cout << lider <<" ";
  }
  cout << endl;

  for (i=0; i < km; i++){   
    for (k=0; k < km; k++){
	  if(i == k){
		if(tempo1[i] - tempo1[i-1] < tempo2[k] - tempo2[k-1]){
		  melhorTempo = nome1;
		}else {
		  melhorTempo = nome2;
		}
	  }  
    }
    cout << melhorTempo <<" ";
  }
    
   
  return 0;
}
