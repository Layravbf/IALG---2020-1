#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char simbW,simbI;
    int qtdW,qtdI;
	int i,j;
	int x, y;
	char vazio;
	char m[10][10];
	
	ifstream arquivoS;
	arquivoS.open("tropas.txt");
	arquivoS>>simbW;
	arquivoS>>simbI;
	
	while(!arquivoS.eof()){
		arquivoS>>qtdW;
			
		for(i=0; i<qtdW; i++){
			arquivoS >> x;
			arquivoS >> y;
			m[x][y] = simbW;
		}

		arquivoS >> qtdI;

		for(i=0; i<qtdI; i++){
			arquivoS >> x;
			arquivoS >> y;
			m[x][y] = simbI;
		}

		arquivoS >> vazio;

		for(i=0; i<10; i++){
			for(j = 0; j < 10; j++){
				if((m[i][j] != simbW) and (m[i][j] != simbI)){
					m[i][j] = vazio;
				}
			}
		}
	}
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<simbW<<":"<<" ";
	
	int contW=0, contI=0;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(m[i][j]==simbW){
			contW++;
			}
			if(m[i][j]==simbI){
				contI++;
			}
		}
		if(contW>contI){
					
			cout<<i<<" ";
		}
		contW=0, contI=0;
	}
	
	arquivoS.close();
	return 0;
}
