#include "iostream"
#include "string"
using namespace std;

int main()
{
    string titulos[5]; // arreglo o vector
    string autores[5]; // arreglo o vector
    
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    for(int i = 0; i < 5; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        
        cout << "Titulo: ";
        getline(cin, titulos[i]); //getline permite espacios en blanco en el texto ingresado
        
		cout << "Autor: ";
        getline(cin, autores[i]);  //getline permite espacios en blanco en el texto ingresado
    }
}