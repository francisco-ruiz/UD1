// Problema 1.14: Calcular la media y la desviación típica de tres valores introducidos por el usuario.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

double x_1, x_2, x_3; // Declaración de las variables que almacenarán los tres datos introducidos por el usuario.
x_1 = 0.0; x_2 = 0.0; x_3 = 0; // Inicialización de las variables.	

double media, desviacion; // Declaración de las variables que almacenarán los valores de media y desviación.
media = 0.0; desviacion = 0.0; // Inicialización de las variables.

double raiz; raiz = 0.0; // Variable intermedia para el cálculo.

	// Introducción y almacenamiento de los tres datos de los que se obtendrá media y desviación.
	cout << "Introduzca los tres valores de los que desea obtener media y desviación típica: " << endl;
	cin >> x_1; cin >> x_2; cin >> x_3;
	
	// Cálculo de la media.
	media = (x_1 + x_2 + x_3)/3;
	cout << "\nLa media es: " << media << endl; // Se muestra la media en pantalla.
	
	// Cálculo de la desviacion
	raiz = ((x_1-media)*(x_1-media) + (x_2-media)*(x_2-media) + (x_3-media)*(x_3-media))/3;
	desviacion = sqrt(raiz);
	cout << "El contenido de la raíz es: " << raiz << endl;
	cout << "\nLa desviación es: " << desviacion << endl; // Se muestra la desviación en pantalla.
	
}
