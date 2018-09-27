// lista de exercicios http://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html
#include <iostream>

using namespace std;
	

void ex1(){

	int matriz[2][2];
	int menor = 0;

	//poppulando a matriz
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << "matriz " << i << " " << j << ": ";
			cin >> matriz[i][j];
		}
	}

	menor = matriz[0][0];

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(menor > matriz[i][j]){
				menor = matriz[i][j];
			}
		}
	}

	cout << "Menor: " << menor << endl;
}

void ex2(){

	float nt1;
	float nt2;
	float nt3;
	float ma;
	float me;

	cin >> nt1 >> nt2 >> nt3;

	me = (nt1 + nt2 + nt3) / 3;

	ma = (nt1 + nt2*2 + nt3*3 + me)/7;


	if(ma >= 9){
		cout << "A";
	}
	else if(ma >= 7.5 && ma < 9){
		cout << "B";
	}
	else if(ma >= 6 && ma < 7.5){
		cout << "C";
	}
	else if(ma >= 4 && ma < 6){
		cout << "D";
	}else{
		cout << "E";
	}
}

void ex3(){

	// int n;

	// cout << "Escolha um numero";
	// cin >> n;
	
	// for(int i = 0; i < n; i++){
	// 	cout << i;
	// }
}

int main(){
		
	// ex1();
	ex2();
	return 0;	

}