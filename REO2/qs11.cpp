#include <iostream>
using namespace std;
int main(){
  float h, c, custoMin = 0;
  int N, i, j; 
  cin >> N;
  float M[N][N];
  for (i=0; i<N; i++){
	for (j=0; j<N; j++){
	  cin >> M[i][j];
	}	
  }
  cin >> h >> c;
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
	  if (h - M[i][j] > 0){
	    custoMin += (h - M[i][j])*c;
	  }
	}
		
  }
  cout << custoMin;
	
  return 0;
}
