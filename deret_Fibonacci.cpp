#include <iostream>
using namespace std;

int main() {
	
	int n, fn, fn1,fn2; 
	
	cout<<"Program Deret Fibonacci"<<endl<< endl;;
	cout<<"Masukkkan bilangan ke-n = " ; 
	cin >> n ;
	
	//fn = fn1 - fn2 <== rumus deret fibonacci
	fn1 = 1;
	fn2 = 0;  
	cout<< fn2 <<endl << fn1 <<endl;
	for(int i = 0 ; i < n ; i++){
		fn = fn1 + fn2; 
		fn2 = fn1;
		fn1 = fn;
		cout<< fn <<endl;
	} 
	 
	
}
