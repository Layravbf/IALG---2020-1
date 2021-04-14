#include <iostream>
using namespace std;
struct tempo{
	float t;
}; 
float primeiro(float *v){
	int i, p=0;
	for(i=0; i<8; i++){
		if(v[i]<p){
			p = v[i];
		}
	}
		return p;
}
float dif(float p, float *v){
	int i;
	float *valor;
	valor = (float*)malloc(8*sizeof(float));
	for(i=0; i<8; i++){
		valor[i] = p - v[i];
	}
	free(valor);
	return valor[i];
}
	
	
int main(){
	struct tempo *v;
	v = (struct tempo*)malloc(8*sizeof(struct tempo));
	int i;
	for(i=0; i<8; i++){
		cin>>v[i].t;
	}
	float prim, val;
	primeiro(v);
	dif(prim, v);
	
	for(i=0; i<8; i++){
		cout<<val[i]<<endl;
	}
	free(v);
	return 0;
}
