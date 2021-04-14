#include <iostream>
#include <cmath>
using namespace std;

struct cliente{
    string nome;
    int xCliente;
    int yCliente;
    int distancia;
    float valor;
};

int dist(int xPizzaria, int yPizzaria, cliente vetorCliente[], int tClientes, int x){
	int i;
    for(i=0; i<tClientes; i++){
        vetorCliente[i].distancia = sqrt(pow(xPizzaria-vetorCliente[i].xCliente, 2) + pow(yPizzaria-vetorCliente[i].yCliente, 2));
    }

    return vetorCliente[x].distancia;
}
cliente insertionSort(cliente vetorCliente[], int tClientes, int y) {
    cliente pivo;
    int i, j;
    for(i=0; i<tClientes; i++){
		for(j=0; j<tClientes; j++){
			if((vetorCliente[j].distancia > vetorCliente[j+1].distancia)and(j+1<tClientes)){
				pivo = vetorCliente[j+1];
				vetorCliente[j+1]= vetorCliente[j];
				vetorCliente[j] = pivo;
			}
		}
	}

	return vetorCliente[y];
}
int main()
{
    int xPizzaria, yPizzaria;
    int numClientes, tClientes;
    cin>> numClientes;
    cin>> xPizzaria;
    cin>> yPizzaria;
    cin>> tClientes;
    cliente vetorCliente[tClientes];
    int i;
    for(i=0; i<tClientes; i++){
        cin>>vetorCliente[i].nome>>vetorCliente[i].xCliente>>vetorCliente[i].yCliente>>vetorCliente[i].valor;
    }
    
    for(i=0; i<tClientes; i++){
		vetorCliente[i].distancia = dist(xPizzaria, yPizzaria, vetorCliente, tClientes, i);
    }

    for (i=0; i<tClientes; i++){
		vetorCliente[i]=insertionSort(vetorCliente, tClientes, i);
    }

    float total = 0;
    for(i=0; i<numClientes; i++){
        total += vetorCliente[i].valor;
    }

    cout<<total<<endl;

    return 0;
}
