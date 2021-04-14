#include <iostream>
using namespace std;
struct pontoP{
	int x, y;
};
struct retangulo{
	pontoP v1;
	pontoP v2;
};

int main(){
    pontoP valor;
    cin>>valor.x>>valor.y;

    int num;
    cin>>num;

    retangulo vetorRetangulo[num];
    
    int i, cont=0;
    for(i=0; i<num; i++){
    cin>>vetorRetangulo[i].v1.x;
    cin>>vetorRetangulo[i].v1.y;
    cin>>vetorRetangulo[i].v2.x;
    cin>>vetorRetangulo[i].v2.y;
    }

    for(i=0; i<num; i++){
		if((valor.x <= vetorRetangulo[i].v2.x)and(valor.x >= vetorRetangulo[i].v1.x)and(valor.y <= vetorRetangulo[i].v2.y)and(valor.y >= vetorRetangulo[i].v1.y)){
			cont++;
		}
    }

    cout<<cont<<endl;

	return 0;
}
