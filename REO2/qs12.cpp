#include <iostream>
using namespace std;
int main(){
  int N, i, j, cont = 0;
  cin >> N;
  int M[N][N];
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      cin >> M[i][j];
	}	
  }
  for (i=0; i<N; i++){
    for (j=0; j<N - 4; j++){
	  if (M[i][j] == 0 and M[i][j+4] == 0){
	    cont++;
	  }
    }
  }
  
  cout << cont;
	
  return 0;
}
