#include <iostream>
using namespace std;
struct doadores{
	string nome;
	string tipoSangue;
};

int main(){
	int num;
	cin>> num;
	
	doadores vetorDoador[num];
	
	int i;
	for (i=0; i<num; i++){
		cin>> vetorDoador[i].nome;
		cin>> vetorDoador[i].tipoSangue;
	}
	string comparar;
	cin>> comparar;
	
	
	if(comparar == "A"){
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "A")
				cout<<vetorDoador[i].nome<<endl;
		}
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "O")
				cout<<vetorDoador[i].nome<<endl;
	    }
	}
	if(comparar == "B"){
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "B")
				cout<<vetorDoador[i].nome<<endl;
		}
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "O")
				cout<<vetorDoador[i].nome<<endl;
	    }
	}
	if(comparar == "AB"){
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "AB")
				cout<<vetorDoador[i].nome<<endl;
		}
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "A")
				cout<<vetorDoador[i].nome<<endl;
		}
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "B")
				cout<<vetorDoador[i].nome<<endl;
		}
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "O")
				cout<<vetorDoador[i].nome<<endl;
		}
	}
	if(comparar == "O"){
		for(i=0; i<num; i++){
			if(vetorDoador[i].tipoSangue == "O")
				cout<<vetorDoador[i].nome<<endl;
		}
	}
	
	return 0;
}
