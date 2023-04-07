// 2) leia um vetor A de 10 posições de carácter.

//Através de uma função, crie um vetor B apenas com as vogais do vetor A e Exiba o vetor B

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool vogal(char vetA){
	
	int i;
	
	for(i = 0; i < 10; i++){
		if(vetA == 'A' || vetA == 'E' || vetA == 'I' || vetA == 'O' || vetA == 'U' ){
			return true;
		}else{
			return false;
		}
	}
}

int main(){
	
	char vetA[10] = {'A', 'B', 'C', 'E', 'I', 'D', 'F', 'O', 'U', 'G'};
	char vetB[10];
	int i, j = 0;
	
	for(i = 0; i < 10; i++){
		if(vogal(vetA[i])){
			vetB[j] = vetA[i];
			j++;
		}
	}

	for(i = 0; i < j; i++){
		cout << vetB[i] << " ";
	}
	
	return 0;
}
