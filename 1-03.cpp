// Problema 1.3. Resultado de varias sentencias.

#include <iostream>
using namespace std;

int main(){
	
// Los valores que se obtendrán por consola serán los siguientes:

// Valor de x5
// Valor de y2
// Valor de x/y
// 2	Valor de y/x0
// La mitad de x: 2.5	

// Comprobación

	int x,y;
	x=5; y=2;
	
	cout << "Valor de x"  << x << endl;  // Muestra el valor de la variable x sin insertar espacio entre texto y variable
	cout << "Valor de y"  << y << endl; // Muestra el valor de la variable y sin insertar espacio entre texto y variable
	cout << "Valor de x/y\n" << x/y; // Muestra el mensaje de texto, después un retorno de carro y después el valor de la división entera de x entre y, por lo que no aparecen decimales, solo el valor entero.
	cout << "\tValor de y/x" << y/x << endl; //Inserta un tabulador después del valor anterior y posteriormente muestra el valor de la división entera de y/x, sin decimales.
	cout << "La mitad de x: " << x/2.0 << endl; // Al dividir un número entero entre un real, el resultado que muestra en pantalla es un número real.
}
