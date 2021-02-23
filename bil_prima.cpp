#include <iostream>
using namespace std; 

main(){
		cout<<"=====SELAMAT DATANG DI PROGRAM BILANGAN PRIMA====="<<endl;
		int bil, bagi, count ; 
	
	cout<<"Masukkan bilangan asli = "; cin>> bil; 
	
	if(bil > 0){

		for (bagi = 2; bagi < bil; bagi++ ) {
			
			if (bil % bagi == 0){ 
				count++ ; }
		}
	
		if (count == 1){
			cout<< "Bilangan Prima"; 
		} else {
			cout<< "Bukan Bilangan Prima";
		}
		
	} else {
		cout<< endl <<"Masukkan bilangan asli!!"; 
	}

	return 0;
}


