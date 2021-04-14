#include <iostream>
#include <fstream>
using namespace std;
struct hospede{
	int ra;
	char nome[50];
	char tel[12];
	int id;
	
};

hospede h;

int main(){
	fstream arquivo1("alunos.dat", ios_base::in or ios_base::out 
