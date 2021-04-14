#include <iostream>
using namespace std;

void merge(int vet[], int a, int b, int c){
	int i, j, k;
	int n1 = b - a + 1;
	int n2 = c - b;
	int v[n1], vt[n2];
	
	for(i=0; i<n1; i++)
		v[i] = vet[a+i];
	for(j=0; j<n2; j++)
		vt[j] = vet[b + 1 + j];
		
	i=0;
	j=0;
	k=a;
	
	while(i<n1 and j<n2){
		if(v[i]<=vt[j]){
			vet[k] = v[i];
			i++;
		}else{
			vet[k] = vt[j];
			j++;
		}
		k++;
	}
	
	while (i<n1){
		vet[k] = v[i];
		i++;
		k++;
	}
	
	while (j<n2){
		vet[k] = vt[j];
		j++;
		k++;
	}
}

void mergeSort(int vet[], int a, int b){
	if(a<b){
		int x = a + (b-a)/2;
		
		mergeSort(vet, a, x);
		mergeSort(vet, x+1, b);
		
		merge(vet,a,x,b);
	}
}

void imprima(int vetor[], int tam){
	int i;
	for(i=0; i<tam; i++){
		cout<<vetor[i]<<endl;
	}
}

int main(){
	int tam;
	cin>>tam;
	int vet[tam];
	
	int i;
	for(i=0; i<tam; i++){
		cin>>vet[i];
	}
	
	mergeSort(vet, 0, tam -1);
	imprima(vet, tam);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
