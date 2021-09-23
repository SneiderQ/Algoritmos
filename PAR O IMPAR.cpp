// COMPROBAR SI EL NUMERO ES PAR O IMPAR 


#include<iostream>

using namespace std;

int main (){
	
	int numero;
	
	cout << "ALGORITMO PARA COMPROBAR SI UN NUMERO ES PAR O IMPAR" << "\n";
	
	cout << "INGRESE UN NUMERO" << "\n";
	cin >> numero; 
	
	if (numero == 0){
		cout << "EL NUMERO INGRESADO ES CERO";
	}
	else if (numero%2==0){
    	cout << "EL NUMERO INGRESADO ES PAR";
	}
	else {
		cout << "EL NUMERO INGRESADO ES IMPAR";
	}
	
return 0;

}