#include <iostream>
using namespace std;
int main(){
  int L, C, i, j, intI, intJ, q, soma=0;
  cin >> L >> C;
  int M[L][C];

  for(i=0; i<L; i++){
	for(j=0; j<C; j++){
	  cin>> M[i][j];
	}
  }
	
  cin>>intI>>intJ;
  cin>>q;
  
  for(i=0; i<L; i++){
	for(j=0; j<C; j++){
	  if ((i==intI) or (j==intJ)){
	    M[i][j]=0;
	  }
	}
  }
	
  for(i=0; i<L; i++){
	for(j=0; j<C; j++){
	  if(q==1){
	    if((i<intI)and(j<intJ)){
	      soma += M[i][j];
	   }
	  }if(q==2){
	    if((i<intI)and(j>intJ)){
	      soma += M[i][j];
	   }
	  }if(q==3){
	    if((i>intI)and(j<intJ)){
		  soma += M[i][j];
	   }
	  }if(q==4){
	    if((i>intI)and(j>intJ)){
		  soma += M[i][j];
	    } 
	   }
    }
  }
	
  cout<<soma<<endl;
  return 0;
}

