#include <iostream>
using namespace std;
int main () {
  int vendas[10], soma = 0, i;
  float comissao[10], receber[10], valorMais;
  string nomes[10], nomeMais;
	
  for (i=0; i<10; i++){
    cin>>nomes[i]>>vendas[i]>>comissao[i];
	receber[i] = vendas[i] * comissao[i];
	soma += vendas[i];
  }
  cout<<endl;
  for (i=0; i<10; i++){
    cout<< nomes[i]<<" "<<receber[i];
	cout << endl;
  } 
  valorMais = receber[0];
  for(i=0; i<10; i++){
    if(receber[i] > valorMais){
      valorMais = receber[i];
	  nomeMais = nomes[i];
    }
  }
  cout<<endl;
  cout<<soma<<endl;
  cout<<nomeMais<<" "<<valorMais<<endl;
	
  return 0;
}
