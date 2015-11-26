// Problema 1.15: Cálculo de una aproximacion al número pi por el proceso de iteraciones de Borwin.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
double x; x = sqrt(2); // Declaración de la variable x e inicialización con el valor del caso x_0.
double y; y = 0.0; // Declaración de la variable y e inicialización a 0.0 de y_0, que no está definido. Se inicializará en la iteración y_1.
double pi; pi = 2 + sqrt(2); // Declaración de la variable pi e inicialización con el valor del caso pi_0.

// Se muestra por pantalla el valor de pi_0, declarado en la inicialización de la variable pi.

	cout << "El valor de pi_0 es: " << pi << endl;

// Cálculo de las variables x_1 y pi_1; inicialización de y_1:

	x = 0.5 * (sqrt(x) + (1.0/(sqrt(x)))); // Cálculo del valor de x_0.
	y = pow (2.0,0.25); // Inicialización de y_1 con el valor que aparece en el enunciado de la pregunta.
	pi = (pi) * ((x + 1.0)/(y + 1.0));// Cálculo del valor de pi_1.

	cout << "El valor de pi_1 es: " << pi << endl; // Se muestra por pantalla el valor de pi_1

// Cálculo de las variables y2, x2 y pi2:

	y = ((y * sqrt(x)) + (1.0/sqrt(x))) / (y + 1.0); // En este caso se calcula y_2 antes, puesto que necesita los valores de x_1.
	x = 0.5 * (sqrt(x) + ((1.0)/(sqrt(x)))); // Cálculo del valor de x_2	
	pi = (pi) * ((x + 1.0)/(y + 1.0));// Cálculo del valor de pi_2

	cout << "El valor de pi_2 es: " << pi << endl; // Se muestra por pantalla el valor de pi_2.
	
}
