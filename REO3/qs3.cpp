#include <iostream>
using namespace std;
struct pokemon{
	string nome;
	int ataque;
	int defesa;
};
struct treinador{
	string nome;
	pokemon pokemons[3];
};

void duelo(treinador vetorTreinador[],int N, int treinador1, int treinador2){
	int ataqueMaior = 0, defesaMaior = 0;
	int j;
	pokemon ataqueM, defesaM;
	treinador nomeT;
	for(j=0; j<3; j++){
		if(vetorTreinador[treinador1].pokemons[j].ataque > ataqueMaior){ 
			ataqueMaior = vetorTreinador[treinador1].pokemons[j].ataque; 
			ataqueM = vetorTreinador[treinador1].pokemons[j];
			nomeT = vetorTreinador[treinador1];
		}
	}
	for(j=0; j<3; j++){
		if(vetorTreinador[treinador2].pokemons[j].defesa > defesaMaior){
			defesaMaior = vetorTreinador[treinador2].pokemons[j].defesa; 
			defesaM = vetorTreinador[treinador2].pokemons[j]; 
			nomeT = vetorTreinador[treinador2];
		}
	}	
	for(j=0; j<3; j++){
		if(vetorTreinador[treinador1].pokemons[j].ataque == vetorTreinador[treinador2].pokemons[j].defesa){
			ataqueMaior = vetorTreinador[treinador1].pokemons[j].ataque;
			ataqueM = vetorTreinador[treinador1].pokemons[j];
			nomeT = vetorTreinador[treinador2];
		}
	}
		
	if(ataqueMaior == defesaMaior){
		cout<<nomeT.nome<<endl;
		cout<<ataqueM.nome<<endl;
	}
	if(ataqueMaior > defesaMaior){
		cout<<nomeT.nome<<endl;
		cout<<ataqueM.nome<<endl;
	}else{
		cout<<nomeT.nome<<endl;
		cout<<defesaM.nome<<endl;	
	}
}
    
int main(){
	int N;
	cin>> N;
	
	treinador vetorTreinador[N];
	
	
	int i, j;
	for(i=0; i<N; i++){
		cin>>vetorTreinador[i].nome;
		for(j=0; j<3; j++){
			cin>>vetorTreinador[i].pokemons[j].nome;
			cin>>vetorTreinador[i].pokemons[j].ataque;
			cin>>vetorTreinador[i].pokemons[j].defesa;
		}
    }
	
	int treinador1, treinador2;
	cin>>treinador1>>treinador2; 
	
	duelo(vetorTreinador, N, treinador1, treinador2);
	
	
	return 0;
}
	
