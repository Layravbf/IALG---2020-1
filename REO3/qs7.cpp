#include <iostream>
using namespace std;
struct produto{
	int identif;
	string descricao;
	float preco;
};
produto entrada(produto x){
	cin>>x.identif;
	getline(cin,x.descricao);
	cin>>x.preco;
	cin.ignore(2, '\n');
	
	return x;
}

produto insertionSort(produto vetor[], int tam, int x){
	produto pivo;
	int i, j;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if((vetor[j].identif > vetor[j+1].identif)and(j+1<tam)){
				pivo = vetor[j+1];
				vetor[j+1]= vetor[j];
				vetor[j] = pivo;
			}
		}
	}
	return vetor[x];
}
 
int main(){
	int num;
	cin>>num;
	produto vetorProduto[num], x;
	int i;
	for(i=0; i<num; i++){
		vetorProduto[i] = entrada(x);
		cin.ignore(2, '\n');
	}
		
	float inferior;
	cin>>inferior;
	float superior;
	cin>>superior;
	
	for(i=0; i<num; i++){
		vetorProduto[i] = insertionSort(vetorProduto, num, i);
	}
	
	for(int i = 0; i < num; i++){
		if((vetorProduto[i].preco >= inferior) and (vetorProduto[i].preco <= superior)){
			cout<<vetorProduto[i].identif<<" "<<vetorProduto[i].descricao<<" "<<vetorProduto[i].preco<<endl;
		}
    }
	
	return 0;
}
