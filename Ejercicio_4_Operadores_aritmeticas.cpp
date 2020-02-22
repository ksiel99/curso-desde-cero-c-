//operadores aritmeticos /suma /resta /multiplicacion /division

#include<iostream>

using namespace std;

int main(){
	//variables
	int valor1,valor2, suma, resta, multiplicacion, division;
	
	//Entrada de datos
	cout<<"Ingresa el primer valor";
	cin>>valor1;
	cout<<"Ingresar el segundo valor";
	cin>>valor2;
	
	//operaciones aritmetcias
	suma = valor1 + valor2;
	resta = valor1 - valor2;
	multiplicacion = valor1 * valor2;
	division = valor1 / valor2;
	
	//salida de datos
	
	cout<<"El total de la suma es: ";
	cout<<suma;
	cout<<"\n El total de la resta es: ";
	cout<<resta;
	cout<<"\n El total de la multiplicacion es: ";
	cout<<multiplicacion;
	cout<<"\n El total de la division es: ";
	lcout<<division;
	
	return 0;
}
