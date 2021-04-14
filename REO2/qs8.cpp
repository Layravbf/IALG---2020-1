#include <iostream>
using namespace std;
int main(){
  float custo=0;
  int tam = 4, cidades, i, j, k;
  float M[tam][tam];
  
  for(i=0; i<tam; i++){
    for(j=0; j<tam; j++){
		cin>>M[i][j];
	}
  }
  
  cin>>cidades;
  int itinerario[cidades];
  
  for(k=0; k<cidades; k++){
    cin>>itinerario[k];
  }
  
  for(k=0; k<cidades; k++){
	if(k+1<cidades)
    custo += M[itinerario[k]][itinerario[k+1]];
  }
  
  cout<<custo<<endl;
  
  return 0;
}
