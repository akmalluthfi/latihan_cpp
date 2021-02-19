#include <iostream>

using namespace std;

int main(){
	
	int bil;
	cout<<"Program menentukan bilangan bulat" <<endl;
	cout<<"Masukkan bilangan bulat = "; cin>> bil;

	if(bil == 1 - 10000000){
		
		if(bil % 2 == 0){
			cout<<endl<<"Bilangan Genap";
		} else {
			cout<<endl<<"Bilangan Ganjil";
		}
		
	}else {
		cout<< endl << "Masukkan Bilangan bulat 1-10.000.000"; 
	}

	return 0;
}
