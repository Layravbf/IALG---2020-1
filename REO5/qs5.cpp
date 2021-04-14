#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int n;
	int i, j;
	char **local, **pos;
	ifstream arquivo;
	arquivo.open("BatalhaNaval.txt");
	arquivo >> n;
	
	local =(char**)malloc(n * sizeof(char*));
	for(i=0; i<n; i++){
		local[i] =(char*)malloc(n * sizeof(char));
		for(j=0; j<n; j++){
			local[i][j] = 0;
		}
	}
	pos =(char**)malloc(n * sizeof(char*));
	for(i=0; i<n; i++){
		pos[i] =(char*)malloc(n * sizeof(char));
		for(j=0; j<n; j++){
			local[i][j] = 0;
		}
	}
	while(!arquivo.eof()){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				arquivo >> local[i][j];
			}
		}
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				arquivo >> pos[i][j];
			}
		}
	}
	
	/*for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(pos[i][j] == 1 and local[i][j] >=1){
				local[i][j] = 0;
			}
			if(local[i][j] != 0){
				local[i][j] = a;
				cont++;
			}
			
		}
	}
	cout<<cont;
	*/
	int nNavios = 0,resto = 0,afundados ;
	int k = 0,cont;
	int umavez = false;

	
	// contar os navios 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(local[i][j] != k and local[i][j] != 0){
				k = local[i][j];
				cont = 0;
				umavez = false;
			}
			
		}
	}	
	

	// altera a matriz
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(pos[i][j] == 1 and local[i][j] >=1){
				local[i][j] = 0;
			}
			if(local[i][j] != k and local[i][j] != 0){
				k = local[i][j];
				resto++;
			}
			
		}
	}
	//conta quantos foram afundados 
	afundados = nNavios - resto;
	cout<<afundados;
	
	for(i=0; i<n; i++){
		free(local[i]);
	}
	for(i=0; i<n; i++){
		free(pos[i]);
	}
	free(local);
	free(pos);
	
	return 0;
}
				
	
	
