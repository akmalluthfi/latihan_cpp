#include <iostream>

using namespace std;

int main(){
	
	int bil; // inisialisasi int bil 
	cout<<"Program menentukan bilangan ganjil-genap" <<endl; //membuat judul program 
	cout<<"Masukkan bilangan asli = "; cin>> bil;

	if(bil > 0){ // memastikan input adalah bilangan asli
		// Bilangan Asli adalah bilangan yang dimulai dari 1 
		// Bilangan Ganjil adalah bilangan yang tidak bisa dibagi 2
		// Bilangan Genap adalah bilangan yang bisa dibagi 2  
		if(bil % 2 == 0){ // menentukan input termasuk bilangan genap atau ganjil 
			cout<<endl<<"Bilangan Genap";
		} else {
			cout<<endl<<"Bilangan Ganjil";
		}
		
	}else {
		cout<< endl << "Masukkan Bilangan asli"; 
	}

	return 0;
}
