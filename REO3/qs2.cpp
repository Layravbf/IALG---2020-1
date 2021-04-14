#include <iostream>
using namespace std;
struct dados{
	string nome;
	string planeta;
	int batalhas;
};
struct resultado{
	string nplaneta;
	int storms;
	double totalBatal;
	int x;
};

int main(){
	int num;
	cin>>num;
	dados vetorDados[num];

	int i, j;
	for(i=0; i<num; i++){
		cin>>vetorDados[i].nome;
		cin>>vetorDados[i].planeta;
		cin>>vetorDados[i].batalhas;
	}
	resultado vetorSaida[num];

	for(i=0; i<num; i++){
		vetorSaida[i].totalBatal = 0;
		vetorSaida[i].storms = 0;
		vetorSaida[i].x = 0;
    }

    for(i=0; i<num; i++){
    vetorSaida[i].nplaneta = vetorDados[i].planeta;
    }

	for(i=0; i<num; i++){
		for(j=0; j<num; j++){
			if((vetorSaida[i].nplaneta == vetorSaida[j].nplaneta)and(vetorSaida[i].x != 1)){
				vetorSaida[j].x = 1;
				vetorSaida[i].storms++;
				vetorSaida[i].totalBatal += vetorDados[j].batalhas;
            }
		}
	}

	for(i=0; i<num; i++){
		vetorSaida[i].x = 0;
	}

	for(i=0; i<num; i++){
		for(j=i+1; j<num; j++){
			if( vetorSaida[i].nplaneta == vetorSaida[j].nplaneta ){
			vetorSaida[j].x = 1;
			}
		}
	}


	for(int i=0; i<num; i++){
		vetorSaida[i].totalBatal = vetorSaida[i].totalBatal/vetorSaida[i].storms;
	}

	for(i=0; i<num; i++){
		for(j=0; j<num; j++){
			if(vetorSaida[i].nplaneta == vetorDados[j].planeta){
				vetorSaida[i].totalBatal = vetorSaida[j].totalBatal;
				vetorSaida[i].storms = vetorSaida[j].storms;
			}
		}
	}

	for(i=0; i<num; i++){
		if(vetorSaida[i].x != 1 ){
			cout<<vetorSaida[i].nplaneta<<" "<<vetorSaida[i].storms<<" "<<vetorSaida[i].totalBatal<<endl;
		}
	}

	return 0;
}
