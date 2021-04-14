#include <iostream>
using namespace std;
int main() {
  int qtde, i, removido;
  cin>>qtde;
  int valores[qtde];
  bool x = false;
  
  for(i=0; i<qtde; i++){
    cin>>valores[i];
  }
  
  cin>>removido;
  
  for(i=0; i<qtde; i++){
    if(removido == valores[i]){
	  while(i<qtde){
		valores[i] = valores[i+1];
		i++;
	  }
	  x=true;
    }
  }

  if(x==true){
    for(i=0; i<qtde-1; i++){
      cout<<valores[i]<<" ";
    }
  cout<<endl;
  }else{
	cout<<"ELEMENTO NAO ENCONTRADO"<<endl;
   }
  
  return 0;
}
      
  
  
