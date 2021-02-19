#include <iostream>

using namespace std;

int main(){
	
	int bil; // inisialisasi int bil 
	cout<<"Program menentukan bilangan bulat" <<endl; //membuat judul program 
	cout<<"Masukkan bilangan bulat = "; cin>> bil;

	if(bil == 1 - 10000000){ // memastikan input adalah bilangan bulat dari range 1-10.000.000
		
		// Bilangan Ganjil adalah bilangan yang tidak bisa dibagi 2
		// Bilangan Genap adalah bilangan yang bisa dibagi 2  
		if(bil % 2 == 0){ // menentukan input termasuk bilangan genap atau ganjil 
			cout<<endl<<"Bilangan Genap";
		} else {
			cout<<endl<<"Bilangan Ganjil";
		}
		
	}else {
		cout<< endl << "Masukkan Bilangan bulat 1-10.000.000"; 
	}

	return 0;
}
