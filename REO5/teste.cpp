#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string westeros, inimigos, matriz[10][10];
    char preencher;
    int qtdWesteros, qtdInimigos;
    ifstream arquivo;
	arquivo.open("tropas.txt");
	arquivo>>westeros;
	arquivo>>inimigos;

    while(!arquivo.eof()){
        arquivo>>qtdWesteros;
        for(int i = 0; i < qtdWesteros; i++){
            int x, y;
            arquivo>>x;
            arquivo>>y;
            matriz[x][y] = westeros;
        }
        arquivo>>qtdInimigos;
        for(int i = 0; i < qtdInimigos; i++){
            int x, y;
            arquivo>>x;
            arquivo>>y;
            matriz[x][y] = inimigos;
        }

        arquivo>>preencher;

        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if((matriz[i][j] != westeros) and (matriz[i][j] != inimigos)){
                    matriz[i][j] = preencher;
                }
            }
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<westeros<<": ";

    int contWesteros = 0, contInimigos = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(matriz[i][j] == westeros){
                    contWesteros++;
                }
                if(matriz[i][j] == inimigos){
                    contInimigos++;
                }
            }
            if(contWesteros > contInimigos){
                cout<<i<<" ";
            }
            contWesteros = 0;
            contInimigos = 0;
        }

    return 0;
}
