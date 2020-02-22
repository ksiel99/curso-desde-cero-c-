//Condicional Switch

#include<iostream>

using namespace std;

int main(){
	int letra;
	cout<<"Ingresa una letra en el rango de 1 - 5: ";
	cin>>letra;
	switch(letra){
		case 1:
		cout<<"Es 1";
		break;
		
		case 2:
		cout<<"Es 2";
		break;		
		
		case 3:
		cout<<"Es 3";
		break;
		
		case 4:
		cout<<"Es 4";
		break;
		
		case 5:
		cout<<"Es 5";
		break;
		
		default:
		cout<<"No ingresaste un numero valido";
		break;
	}
	return 0;
	
}
