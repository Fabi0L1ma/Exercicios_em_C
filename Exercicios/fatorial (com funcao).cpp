#include <iostream>
#include <cstdlib>
#include <math.h>

int fatorial(int x){
	
	int f =1, i; 
	
	for(i = x; i > 0; i--){
		f = f * i;
	}
	
	return f; 
}

using namespace std;

int main(){
	
	int i, fat;
	
	for(i = 1; i <= 8; i++){
		fat = fatorial(i);
		cout << "Fatorial " << i << "! = " << fat << endl;  
	}
	
	return 0;	
}
