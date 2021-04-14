#include <iostream>
using namespace std;
int main () {
  string palavra;
  cin>>palavra;
  int  tam = palavra.size(), i=0, k=0, dif = 0;

  for(i=0; i<tam; i++){
    for(k=0; k<tam; k++){
      if(palavra[i] != palavra[k]){
        dif++;
      }
    }
    if(dif == tam-1){
      cout << palavra[i];
      i=tam;
    }
    else{
      dif=0;
    }
  }	
	
  return 0;
}
