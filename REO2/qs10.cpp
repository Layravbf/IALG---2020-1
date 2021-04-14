#include <iostream>
using namespace std;
int main(){
  int N,soma=0, i, j;
  cin>> N;
  int M[N][N];

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
	  cin>> M[i][j];
	}
  }
	
  for(i=0; i<N; i++){
	for(j=0; j<N ;j++){
	  if(i<=j){	
	    M[i][j]=0;
	  }
	
	  if((i+j)>=(N-1)){
	    M[i][j]=0;
	  }
	}
  }
	
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
	  soma += M[i][j];
	}
  }
	
  cout<<soma<<endl;
  return 0;
}
