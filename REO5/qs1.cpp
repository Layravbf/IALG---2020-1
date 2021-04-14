#include <iostream>
#include <fstream>
using namespace std;
int main() {
	
	string entrada;
	cin>> entrada;
	
	int i, j;
	string conteudo;
	ifstream arquivo1;
	arquivo1.open(entrada.c_str());
	ofstream arquivoS;
	arquivoS.open("cifrado.txt");
	while(getline(arquivo1,conteudo)){
		string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		string reversoLetras = "";
		for(i=letras.length()-1; i>-1; i--){
			reversoLetras += letras[i];
		}
		
		string criptografar;
		for(i=0; i<int (conteudo.length()); i++){
			if(conteudo[i] == 32){
				criptografar += " ";
			}else{
				for(j=0; j<int (letras.length()); j++){
					if(conteudo[i] == letras[j]){
						criptografar += reversoLetras[j];
						break;
					}
				}
			}
		}
		arquivoS<< criptografar << '\n';
	}
	
	arquivoS.close();
	arquivo1.close();
			
	return 0;
}

