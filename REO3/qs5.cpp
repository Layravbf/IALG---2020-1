#include <iostream>
using namespace std;
struct data{
	int dia;
	int mes;
	int ano;
};
struct animal{
	int identif;
	string nome;
	string dono;
	data vacina;
};

int main() {
	animal vetorAnimal[100];
	int x = 0;	
	int i, j;
	for(i=0; i<100; i++){
		if(x == 0){
			cin>>vetorAnimal[i].identif;
		}
		if(vetorAnimal[i].identif != 0){
			cin>>vetorAnimal[i].nome>>vetorAnimal[i].dono>>vetorAnimal[i].vacina.dia>>vetorAnimal[i].vacina.mes>>vetorAnimal[i].vacina.ano;
		}else{
			x = 1; 
	    }
	    j = i;
	}
	int meio, posicao = -1, posInicial = 0, posFinal = j;
	int pesquisar;
	cin>> pesquisar;
	for(i=0; i<N; i++){
		while(posInicial <= posFinal){
			meio = (posInicial+posFinal)/2;
			if(pesquisar == vetorAnimal[i].identif){
				posicao = meio;
				posInicial = posFinal + 1;
				i = N + 1;
			}else{
				if(pesquisar > vetorAnimal[i].identif){
					posInicial = meio + 1;
				}else{
					posFinal = meio - 1;
				}
			}
		}
	}
	if(x == 1){
		cout<<"inexistente"<<endl;
	}
	if(x == 0){
		cout<<vetorAnimal[posicao].nome<<" "<<vetorAnimal[posicao].vacina.dia<<"/"<<vetorAnimal[posicao].vacina.mes<<"/"<<vetorAnimal[posicao].vacina.ano<<endl;
	}

	return 0;
}
	
	
	
	
	
