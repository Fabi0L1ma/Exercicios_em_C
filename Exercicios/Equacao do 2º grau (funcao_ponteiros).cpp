// 1) Considere uma equação de 2º grau f(x) = ax^2 + bx + c

// Leia os valores dos coeficientes a, b e c.
// Através de uma função determine se existem raízes reais e quais são elas.

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float delta(float a, float b, float c){
	
	float del;
	
	del = b*b - (4*a*c);
	
	return del; 
}

void bhaskara(float a, float b, float d, float *x1, float *x2){
	
	*x1 = (-b + sqrt(d))/(2*a);
	*x2 = (-b - sqrt(d))/(2*a);
}

int main(){
	
	float x, y, z, d, x1, x2;
	
	cout << "Digite o valor de A: ";
	cin >> x;
	cout << "Digite o valor de B: ";
	cin >> y;
	cout << "Digite o valor de C: ";
	cin >> z;
	cout << endl; 
	
	d = delta(x,y,z);
	
	if(d >= 0){
		bhaskara(x, y, d, &x1, &x2);
		
		cout << "Valores das raizes: " << "X1 = " << x1 << " , " << "X2 = " << x2;
	}else{	
		cout << "A EQUACAO NAO TEM SOLUCAO REAL";
	}
	
	return 0;
}

