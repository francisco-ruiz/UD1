// Problema 1.7. Programa que pregunta dos números reales y muestra en pantalla su suma, resta, producto y división.

#include <iostream>
using namespace std;

int main(){
	
double num_real_1 = 0.0; // variable donde se almacenará el primer número real introducido por teclado.
double num_real_2 = 0.0; // variable donde se almacenará el segundo número real introducido por teclado.

double suma = 0.0; // variable donde se almacenará la suma de los dos números reales.
double resta = 0.0; // variable donde se almacenará la resta de los dos números reales.
double producto = 0.0; // variable donde se almacenará el producto de los dos números reales.
double division = 0.0; // variable donde se almacenará la división de los dos números reales.

	cout << "\nIntroduzca el primer número real: ";
	cin >> num_real_1; // captura desde el teclado el primer número real y lo almacena en la variable entero1
	cout << "\nIntroduzca el segundo número real: ";
	cin  >> num_real_2; // captura desde el teclado el segundo número real y lo almacena en la variable entero2

	suma = num_real_1 + num_real_2; // almacena en la variable suma el resultado de sumar el contenido de las dos variables con números reales capturadas.
	cout << "\nLa suma de los dos números reales introducidos es: " << suma;
	resta = num_real_1 - num_real_2; // almacena en la variable resta el resultado de restar el contenido de las dos variables con números reales capturadas.
	cout << "\nLa resta de los dos números reales introducidos es: " << resta;
	producto = num_real_1 * num_real_2; // almacena en la variable producto el resultado de multiplicar el contenido de las dos variables con números reales capturadas.
	cout << "\nEl producto de los dos números reales introducidos es: " << producto;
	division = num_real_1 / num_real_2; // almacena en la variable division el resultado de dividir el contenido de las dos variables con números reales capturadas.
	cout << "\nLa divisiún de los dos números reales introducidos es: " << division << endl;
	
// No se producen errores en tiempo de ejecucción porque la división entre cero, único caso que podrá provocarlo, devuelve más o menos infinito sin que el programa se detenga; la ejecuccion del programa alcanza el final del código.

}