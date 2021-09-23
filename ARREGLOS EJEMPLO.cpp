
#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int numeros [10];
	int x;
	
	cout << "INGRESE LA CANTIDAD DE ELEMENTOS QUE VA A TENER EL ARREGLO ";
	cin >> x;
	
	for (int i=0; i<x; i++){
		cout << "ESCRIBA UN NUMERO: ";
		cin >> numeros[i];   	
        }
	for (int i=0; i<x; i++){
		cout <<" "<< i << " -> " << numeros [i] << endl;	
     	}
	
	getch ();
return 0;		
}
	