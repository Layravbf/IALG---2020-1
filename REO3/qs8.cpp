#include <iostream>
using namespace std;

struct funcionario{
	int identif;
	float horaT;
	float valor;
	float salario;
};

funcionario principal(funcionario ler){
    cin>>ler.identif;
    cin>>ler.horaT;
    cin>>ler.salario;
    
    ler.salario=ler.horaT*ler.salario;
    return ler;
}

void bubbleSort(funcionario vetor[], int qtde){
	funcionario aux;
	int i, troca;
	troca = 1;
    while(troca == 1){
        troca = 0;        
        for(i=0; i<=qtde; i++){
            if((vetor[i].salario > vetor[i+1].salario)and(i+1<qtde)){
                troca = 1;
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }

	for(i=0; i<qtde; i++){
		cout<<vetor[i].identif<<" "<<vetor[i].salario<<endl;
    }
}

int main(){
    int qtde;
    cin>>qtde;
    
    funcionario vetorFunc[qtde], ler;
    
    int i;
    for(i=0; i<qtde; i++){
		vetorFunc[i] = principal(ler);
    
    }
    
    bubbleSort(vetorFunc, qtde);



	return 0;
}
