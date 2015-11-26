// Problema 1.8. Programa que lee un número entero desde la entrada y muestra por pantalla su tabla de multiplicar.

#include <iostream>
using namespace std;

int main(){

int numero_entero = 0;  // almacena un número entero capturado desde teclado.
int multiplicador = 0; // contador que almacena el multiplicador de la tabla.
int resultado = 0;  // almacena el resultado del producto del entero introducido por el multiplicador de la tabla.

	cout << "Introduzca el númeromero entero del que desea ver su tabla de multiplicar: ";
	cin >> numero_entero;  // captura desde teclado el número del que queremos averiguar su tabla
	
	multiplicador = multiplicador + 1; // el multiplicador se incrementa en una unidad en cada iteración para obtener los valores de la tabla, mientras que el numero capturado permanece igual en cada iteración;
	resultado = numero_entero * multiplicador;
	cout << "\n" << numero_entero << " x " << multiplicador << " = " << resultado << endl;
	
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl;
		
	multiplicador = multiplicador + 1;
	resultado = numero_entero * multiplicador;
	cout << numero_entero << " x " << multiplicador << " = " << resultado << endl << endl;
	
}
