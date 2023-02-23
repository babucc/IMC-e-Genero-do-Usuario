#include <iostream>

using namespace std;

	int main(){
		setlocale(LC_ALL,"portuguese");
		float peso, altura, imc;
		string genero;
		
		cout<<"Informe o seu Gênero: ";
		cin>>genero;
		cout<<"Informe o seu peso: ";
		cin>>peso;
		cout<<"Informe a sua altura: ";
		cin>>altura;
		
		imc = peso / (altura*altura);
		
		if (genero == "masculino"){
			if (imc < 20){
				cout<<"O seu IMC: " <<imc <<endl <<"Abaixo do peso ideal";
			}else if (imc >= 20 && imc <= 24.9){
				cout<<"O seu IMC: " <<imc <<endl <<"Peso normal";
			}else if (imc >= 25 && imc <= 29.9){
				cout<<"O seu IMC: " <<imc <<endl <<"Obesidade leve";
			}else if (imc >= 30 && imc <= 39.9){
				cout<<"O seu IMC: " <<imc <<endl <<"Obesidade morderada";
			}else if (imc > 43){
				cout<<"O seu IMC: " <<imc <<endl <<"Obesidade Mórbida";
			}
		}
		else if (genero == "feminino"){
			if (imc < 19){
				cout<<"O seu IMC: " <<imc <<endl <<"Abaixo do peso ideal";
			}else if (imc >= 19 && imc <= 23.9){
				cout<<"O seu IMC: " <<imc <<endl <<"Peso normal";
			}else if (imc >= 24 && imc <= 28.9){
				cout<<"O seu IMC: " <<imc <<endl <<"Obesidade leve";
			}else if (imc >= 29 && imc <= 38.9){
				cout<<"O seu IMC: " <<imc <<endl <<"Obesidade morderada";
			}else if (imc > 39){
				cout<<"O seu IMC: " <<imc <<endl <<"Obesidade Mórbida";
			}
		}
	}
