#include <iostream>
using namespace std;
int main(){
 int num = 1, somaP=0, somaN=0;
 float percentualP=0, percentualN=0, media=0, i=0, s=0, somaNum=0;
 while(num !=0){
	 cin>>num;
	 i++;
	 if(num > 0){
		 somaP++;	 
	 } else if(num < 0) {
		 somaN++;
	 }
	 
	 s = somaP + somaN;
	 percentualP = somaP/s;
	 percentualN = somaN/s;
	 
	 somaNum = somaNum + num;
	 media = somaNum/i;	 
 }
 i--;
 if(i!=0){
	 media= somaNum/i;
 }
 cout<<media<<endl<<somaP<<endl<<somaN<<endl<<percentualP<<endl<<percentualN<<endl; 
  return 0;
}


