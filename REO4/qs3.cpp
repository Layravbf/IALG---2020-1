#include <iostream>
using namespace std;
int particao (int v[], int c, int f){
     int pivo = v[c + (f - c) / 2];
     cout<<endl<<pivo<<":"<<" ";
     int i = (c-1);
     int j = (f+1);
     int aux;
     
     while(true){
		do{
			i++;
		}
		while(v[i]<pivo);
			do{
				j--;
			}
		
		while(v[j]>pivo);
			if(i>=j){
				return j;
			}
			
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
	}
}
     
void quickSort(int vet[], int com, int fim){
    int x;
   
    if(com<fim){
		x = particao(vet, com, fim);
		
		for(int y=com; y<=fim; y++){
			cout<<vet[y]<<" ";
		}

		quickSort(vet, com, x);
		quickSort(vet, x+1, fim);
	}
} 

int main(){

	int num;

	cin>>num;
	int vetor[num];

	int i;
	for(i=0; i<num; i++){
		cin>>vetor[i];
	}

    quickSort(vetor, 0, num -1);
    
    cout<<endl;

	for(i=0; i<num; i++){
		cout<<vetor[i]<<" ";
	}

	return 0;
}






