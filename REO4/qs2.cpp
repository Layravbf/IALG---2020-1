#include <iostream>
using namespace std;

void shellSort(int vet[], int qtde){
    int i, j, gaps, cont = 0;
    cin>>gaps;
    int v[gaps];
    int value;

    for(i=0; i<gaps; i++){
        cin>>v[i];
    }

    int pos = gaps-1;
    cont++;
    while(v[pos]>qtde){
        cont++;
        pos--;
    }
    
    cont++;
    while(pos>=0){
        cont++;
        int gap = v[pos];
        cont++;
        for (i=gap; i<qtde; i++) {
            cont++;
            value = vet[i];
            j = i;
            cont++;
            while ((j>=gap) and (value>vet[j-gap])){
                cont++;
                vet[j] = vet[j-gap];
                j -= gap;
            }
            vet[j] = value;
        }
        pos--;
    }
    cout<<cont<<endl;
}

int main(){
    int qtde;
    cin>>qtde;
    int valores[qtde];
    
	int i;
    for(i=0; i<qtde; i++){
        cin>>valores[i];
    }

    shellSort(valores, qtde);

    return 0;
}


		
