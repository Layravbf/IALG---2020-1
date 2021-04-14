#include <iostream>
using namespace std;
int sucessor(int N){
	N++;
	return N;
}
int antecessor(int N){
    N--;
	return N;
}
int soma(int num1, int num2) {
	int x = 0;
	if (num2 > 0){
	num1 = sucessor(num1);
	num2 = antecessor(num2);
	x = soma(num1,num2);
	num1 = x; 
}
    if (num2 < 0){
    num1 = antecessor(num1);
    num2 = sucessor(num2);
    x = soma(num1,num2);
    num1 = x;
}
    return num1;
}

int main() {
	int num1,num2;
	cin>>num1>>num2;
	cout<<soma(num1,num2)<<endl;
	
	return 0;
}
	
