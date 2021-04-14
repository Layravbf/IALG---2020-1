#include <iostream>
using namespace std;
struct figurinhas{
	string nome;
	int numero;
	int exemplares;
};
figurinhas principal(figurinhas fig){
    cin>>fig.numero;
    cin>>fig.nome;
    cin>>fig.exemplares;

    return fig;
}
figurinhas ordenacao(figurinhas colecao[],int qtde,int x){
	int i, j, k;
    for (i=0; i<qtde; i++){
        j=i;
        for(k=i+1; k<qtde; k++) {
            if(colecao[k].numero < colecao[j].numero) {
                j = k;
            }
        }
		
		int aux1, aux3;
		string aux2;
		
		aux1 = colecao[i].numero;
		colecao[i].numero = colecao[j].numero;
		colecao[j].numero = aux1;
	
		aux2 = colecao[i].nome;
		colecao[i].nome = colecao[j].nome;
		colecao[j].nome = aux2;
    
		aux3 = colecao[i].exemplares;
		colecao[i].exemplares = colecao[j].exemplares;
		colecao[j].exemplares = aux3;
    }
    
    return colecao[x];
}
int busca(int procurar, figurinhas colecao[], int qtde){
    int i, y=0, z=0;
    
    for(i=0; i<qtde; i++){
		if(colecao[i].numero == procurar){
			z=i;
			y=1;
		}
    }
    if(y==0){
		z=-1;
    }
    
    return z;
}
int main(){
    int qtde;
    cin>>qtde;
    figurinhas colecao[qtde], fig;
    int i;
    
    for(i=0; i<qtde; i++){
		colecao[i] = principal(fig);
    }
    
    int procurar;
    cin>>procurar;

    for(i=0; i<qtde; i++){
		colecao[i] = ordenacao(colecao, qtde ,i);
    }
    
    int x = busca(procurar, colecao, qtde);

    if(x == -1){
		cout<<"-1"<<endl;
    }else{
		cout<<x<<endl;
		cout<<colecao[x].nome<<" "<<colecao[x].exemplares<<endl;
    }
    

	return 0;
}
