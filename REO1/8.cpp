#include <iostream>
#include <string>
using namespace std;
string altura(int mIdeal, int cmIdeal, int mmIdeal, int mCarro, int cmCarro, int mmCarro) {
	mIdeal = mIdeal*1000;
	cmIdeal = cmIdeal*10;
	mmIdeal = mmIdeal *1;
	mCarro = mCarro*1000;
	cmCarro = cmCarro*10;
	mmCarro = mmCarro*1;
	
	mCarro = mCarro *1.01;
	cmCarro = cmCarro*1.01;
	mmCarro = mmCarro*1.01;
	
	float carIdeal = (mIdeal+cmIdeal+mmIdeal) *1.01;
	float carAvalia = (mCarro+cmCarro+mmCarro);

	if (carAvalia<=carIdeal){
		return "sim";
	}else {
		return "nao";
	}
}
	
int main () {
	int mIdeal, cmIdeal, mmIdeal, mCarro, cmCarro, mmCarro;
	string x;
	cin>>mIdeal>>cmIdeal>>mmIdeal;
	cin>>mCarro>>cmCarro>>mmCarro;
    x = altura (mIdeal, cmIdeal, mmIdeal, mCarro, cmCarro, mmCarro);
    cout<<x<<endl;
	
	
	return 0;
}
		
	
	
	
