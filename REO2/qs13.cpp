#include <iostream>
using namespace std;

int main(){
  int N, cont = 0, i, j;
  cin >> N;
  int M[N][N];
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      cin >> M[i][j];
	}
  }
  for (i=0; i<N; i++){
	for (j=0; j<N; j++){
	  if (M[i][j] == 1){
		if (M[i+2][j+1] == 2 and i+2 < N and j+1 < N){
		  cont++;
		}
		if (M[i+2][j-1] == 2 and i+2 < N and j-1 >= 0){
		  cont++;
		}
		if (M[i-2][j+1] == 2 and i-2 >= 0 and j+1 < N){
		  cont++;			
		}
		if (M[i-2][j-1] == 2 and i-2 >= 0 and j-1 >= 0){
		  cont++;
		}
		if (M[i+1][j+2] == 2 and i+1 < N and j+2 < N){
		  cont++;
		}
		if (M[i+1][j-2] == 2 and i+1 < N and j-2 >= 0){
		  cont++;
		}
		if (M[i-1][j+2] == 2 and i-1 >= 0 and j+2 < N){
		  cont++;
		}
		if ((M[i-1][j-2] == 2) and (i-1 >= 0) and (j-2 >= 0)){
		  cont++;
		}
	  }
    }
  }
  cout << cont;
	
    return 0;
}
