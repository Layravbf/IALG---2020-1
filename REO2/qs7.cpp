#include <iostream>
using namespace std;
int main() {
  int B, S, N;
  cin >> N;
  int V[N], posicao = -1, cont=0;
  int i, posInicial = 0, posFinal = N-1, meio;
  for (i=0; i<N; i++){
    cin >> V[i];
  }
  cin >> B;
  cin >> S;
	
  while (posInicial <= posFinal) {
    meio = (posInicial + posFinal)/2;
      if (B == V[meio]){
	    posicao = meio;
		posInicial = posFinal + 1;
	  }else if (B > V[meio]){
		posInicial = meio + 1;
	  }else {
	    posFinal = meio -1;
	  }
    cont++;
  }
 
  for(i=0; i<N; i++)
    if(B == V[meio]){
      V[posicao] = S;
      cout<<V[i]<<" ";
    }else{
	  cout<<V[i]<<" ";
    }
    
  cout<<endl;	  
  cout<<cont<<endl;
  return 0;
}
 
 
	   
