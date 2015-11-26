// Problema 1.11: Calcular nota final.

#include <iostream>
using namespace std;

int main (){
	
double nota_teoria, nota_practica, nota_problemas; // Declaración de variables para almacenar los tres tipos de calificaciones.
nota_teoria = 0.0; nota_practica = 0.0; nota_problemas = 0.0; // Inicialización de las variables declaradas.

double nota_final; // Declaración de la variable que almacenará el resultado de la nota final.
nota_final = 0.0;

	cout << "Introduzca los valores de las notas de teoría, práctica y problemas, respectivamente: ";
	cin >> nota_teoria; cin >> nota_practica; cin >> nota_problemas; // Captura los valores de las notas y las almacena en sus respectivas variables. Los datos se pueden introducir seguidos de espacios tal y como se pide en el problema.
	
	nota_final = (0.7*nota_teoria) + (0.2*nota_practica) + (0.1*nota_problemas); // Calcula el porcentaje de la nota final que aporta cada nota parcial.
	cout << "\nEl resultado de la nota final es: " << nota_final << endl; // Muestra el resultado de la nota final.
	
}
