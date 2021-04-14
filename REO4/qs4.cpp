#include <iostream>
using namespace std;
int particao(int v[], int c, int f){
	int pivo = v[f];
	int i = (c - 1);
	
	int j;
	for(j=c; j<=f-1; j++){
		if(v[j]<pivo){
			i++;
			int aux = v[i];
			v[i] = v[j];
			v[j] = aux;
		}
	}
	int aux1 = v[i+1];
	v[i+1] = v[f];
	v[f] = aux1;
	return (i+1);
}

void quickSort(int vet[], int com, int fim){
	if(com<fim){
		int x = particao(vet, com, fim);
		quickSort(vet, com, x-1);
		quickSort(vet, x+1, fim);
	}
}

void selectionSort(int vet[], int n){
	int i, j, min;
	for(i=0; i<n-1; i++){
		min=i;
		for(j=i+1; j<n; j++)
			if(vet[j]<vet[min])
				min = j;
		int aux = vet[min];
		vet[min] = vet[i];
		vet[i] = aux;
	}
}	
void imprima(int vet[], int tam){
	int i;
	for(i=0; i<tam; i++){
		cout<<vet[i]<<" "<<endl;
	}
}
	

int main(){
	int M;
	int num;
	cin>>M;
	cin>>num;
	int vetor[num];
	
	int i;
	for(i=0; i<num; i++){
		cin>>vetor[i];
	}

	if(num<M){
		selectionSort(vetor, num);
	}else{
		quickSort(vetor, 0, num -1);
	}
	
	imprima(vetor, num);
	
	return 0;
}

