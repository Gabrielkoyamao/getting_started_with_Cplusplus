#include <iostream>
#include <string>

using namespace std;


struct Pessoa {
	string nome;
	int idade;
	float altura;
};

void Struct(){

	Pessoa p1; 

	p1.nome = "gabriel";
	p1.idade = 20;
	p1.altura = 1.5;

	cout << "\nnome: " << p1.nome << endl << "Idade: " << p1.idade << endl << "Altura: " << p1.altura << endl;
	
}


void learning01(){

	int n = 0;

	do {

		cout << "Digite um numero (0 - quit): ";

		if(!(cin >> n)){
			cout << "Voce digitou algo diferente de numero. Exiting..." << endl;
			break;
		}

		cout << "Voce digitou: " << n << endl;

	}while(n != 0);

} 


void learning02(){

	int age;
	string name;


	getline(cin, name);
	cin >> age;

	cout << "I am " << age << " years old and my name is " << name;

}

int main(){

	// learning01();
	learning02();
	return 0;

}