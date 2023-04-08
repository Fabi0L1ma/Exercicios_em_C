#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std; 

void hip(float c1, float c2, float *h){
	
	float x, y, soma;
	
	x = c1*c1;
	y = c2*c2;
   *h = sqrt(x+y);
}

int main(){
	
	float catetoOposto, catetoAdjacente, hipotenusa;
	
	cout << "CALCULO DA HIPOTENUSA" << endl << endl;;
	cout << "Digite o valor do cateto Oposto: ";
	cin >> catetoOposto;
	cout << "Digite o valor do cateto Adjacente: ";
	cin >> catetoAdjacente;
	
	hip(catetoOposto, catetoAdjacente, &hipotenusa);
	
	cout << setprecision(4) <<"Valor hipotenusa: " << hipotenusa;
	

	return 0;
}
