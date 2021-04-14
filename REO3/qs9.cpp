#include <iostream>
using namespace std;

struct organizar{
    int numM;
    string nomeA;
    string assunto;
    string site;
};

organizar principal(organizar x){
	cin>>x.numM;
	cin>>x.nomeA;
	cin>>x.assunto;
	cin>>x.site;
	
	return x;
}

organizar selectionSort(organizar vetorCadastro[], int N, int x){
    int i, j, k;
    for (i=0; i<N; i++){
		j=i;
        for(k=i+1; k<N; k++) {
            if(vetorCadastro[k].numM < vetorCadastro[j].numM) {
                j = k;
            }
        }
		
		int aux1;
		string aux2, aux3, aux4;
		
		aux1 = vetorCadastro[i].numM;
		vetorCadastro[i].numM = vetorCadastro[j].numM;
		vetorCadastro[j].numM = aux1;
	
		aux2 = vetorCadastro[i].nomeA;
		vetorCadastro[i].nomeA = vetorCadastro[j].nomeA;
		vetorCadastro[j].nomeA = aux2;
    
		aux3 = vetorCadastro[i].assunto;
		vetorCadastro[i].assunto = vetorCadastro[j].assunto;
		vetorCadastro[j].assunto = aux3;
		
		aux4 = vetorCadastro[i].site;
		vetorCadastro[i].site = vetorCadastro[j].site;
		vetorCadastro[j].site = aux4;
    }
    
    return vetorCadastro[x];
}
void busca(string siteBusca, organizar vetorCadastro[], int qtde){
    int i, y=0;
    
    for(i=0; i<qtde; i++){
		if(vetorCadastro[i].site == siteBusca){
			cout<<vetorCadastro[i].numM<<" "<<vetorCadastro[i].nomeA<<" "<<vetorCadastro[i].assunto<<" "<<vetorCadastro[i].site<<endl;;
			y=1;
		}
    }
    if(y==0){
		cout<<"Inexistente"<<endl;
    }   
}
int main(){
    int N;
    cin>>N;
    organizar vetorCadastro[N], x;
    int i;
    for(i=0; i<N; i++){
		vetorCadastro[i] = principal(x);
	}
	
	string siteBusca;
	cin>>siteBusca;
	
	for(i=0; i<N; i++){
		vetorCadastro[i] = selectionSort(vetorCadastro, N, i);
	}
	
	busca(siteBusca, vetorCadastro, N);
        
    return 0;
}
