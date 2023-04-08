#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

void triangulo(int x, int y, int z ){
	
	if((x + y) > z && (x + z)> y && (y + z) > x){
		cout << "E UM TRIANGULO.";
	}else{
		cout << "NAO E UM TRIANGULO.";
	}
}

int main(){
	
	int a, b, c;
	
	cout << "Digite o valor do primeiro lado: ";
	cin >> a;
	cout << "Digite o valor do segundo lado: ";
	cin >> b;
	cout << "Digite o valor do terceiro lado: ";
	cin >> c;
	cout << endl;
	
	triangulo(a, b, c);
	
	return 0;
}
