#include <iostream>
using namespace std;
void shellSort(float valores[], int qtde){
	int i, j;
	float value;
	int gapp[5]= {1, 3, 7, 15, 31};
	int pos = 4;
	int cont = 0;
	while(gapp[pos] > qtde){
		pos--;
	}
	while(pos>=0){
		int gap = gapp[pos];
		for(i=gap; i<qtde; i++){
			value = valores[i];
			j = i-gap;
			cont++;
			while(j>=0 and value<valores[j]){
				valores[j+gap] = valores[j];
				j -= gap;
				cont++;
			}
			valores[j+gap] = value;
		}
		pos--;
		cout<<gap<<":"<<" ";
		for(i=0; i<qtde; i++){
			cout<<valores[i]<<" ";
		}
		cout<<endl;	
	}
	cout<<cont<<endl;
}

int main() {
	int qtde;
	cin>>qtde;
	float valores[qtde];
	
	int i;
	for (i=0; i<qtde; i++){
		cin>>valores[i];
	}
	
	shellSort(valores, qtde);
	
	return 0;
}
	
	
	
