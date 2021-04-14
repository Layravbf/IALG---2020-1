#include <iostream>
using namespace std;
int main(){
  string text, busca;
  cin >> text;
  cin >> busca;
  int tamText = text.size(),tamBusca = busca.size();
  char letra[tamBusca];
  int posicao = 0, cont = 0, i, k, j, procura = 0;
  
  for (i=0; i<=tamText-tamBusca ; i++){
    for (k=0; k<tamBusca; k++){
      letra[k] = text[cont];
      cont++;
    }
    cont -= (tamBusca - 1);
    
    int x=0;
    
    for (j=0; j < tamBusca; j++){
      if (letra[j] == busca[j]){
        x++;
      }
    }
    if(x == tamBusca){
      procura = 1;
    }
    if(procura == 0){
      posicao++;
    }
  }
  
  if (procura == 1){
    cout << posicao;
  } 
  else{
    cout << -1;
  }

    return 0;
}
